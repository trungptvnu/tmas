#ifndef _EXPRESSION_TREE_COMMAND_IMPL_CPP
#define _EXPRESSION_TREE_COMMAND_IMPL_CPP

#include <functional>
#include <algorithm>
#include <iostream>
#include "Expression_Tree_Context.h"
#include "Expression_Tree_Command_Factory_Impl.h"
#include "Expression_Tree_Command_Impl.h"

Expression_Tree_Command_Impl::Expression_Tree_Command_Impl (Expression_Tree_Context &context)
  : tree_context_ (context)
{
}

Expression_Tree_Command_Impl::~Expression_Tree_Command_Impl (void)
{ 
}

Format_Command::Format_Command (Expression_Tree_Context &context, const std::string &new_format)
  : Expression_Tree_Command_Impl (context),
    format_ (new_format)
{

}

bool
Format_Command::execute (void)
{ 
  tree_context_.format (format_);
  return true;
}


void
Format_Command::print_valid_commands (void)
{ 
  std::cout << "\n";
  std::cout << "1. expr [expression]\n";
  std::cout << "2a. eval [post-order]\n";
  std::cout << "2b. print [in-order | pre-order | post-order | level-order]\n";
  std::cout << "0a. format [in-order]\n";
  std::cout << "0b. set [variable=value]\n";
  std::cout << "0c. quit\n";
  std::cout << "\n";
}


Expr_Command::Expr_Command (Expression_Tree_Context &context,
                            const std::string &new_expr)
  : Expression_Tree_Command_Impl (context),
    expr_ (new_expr)
{
}

bool
Expr_Command::execute (void)
{ 
  tree_context_.make_tree (expr_);
  return true;
}

void
Expr_Command::print_valid_commands (void)
{ 
  std::cout << "\n";
  std::cout << "1a. eval [post-order]\n";
  std::cout << "1b. print [in-order | pre-order | post-order | level-order]\n";
  std::cout << "0a. format [in-order]\n";
  std::cout << "0b. set [variable=value]\n";
  std::cout << "0c. quit\n";
  std::cout << "\n";
}

Print_Command::Print_Command (Expression_Tree_Context &context,
                              const std::string &print_format)
  : Expression_Tree_Command_Impl (context),
    format_ (print_format)
{
}

bool
Print_Command::execute (void)
{ 
  tree_context_.print (format_);
  return true;
}

void
Print_Command::print_valid_commands (void)
{ 
  std::cout << "\n";
  std::cout << "1a. eval [post-order]\n";
  std::cout << "1b. print [in-order | pre-order | post-order | level-order]\n";
  std::cout << "0a. format [in-order]\n";
  std::cout << "0b. set [variable=value]\n";
  std::cout << "0c. quit\n";
  std::cout << "\n";
}

Eval_Command::Eval_Command (Expression_Tree_Context &context,
                            const std::string &eval_format)
  : Expression_Tree_Command_Impl (context),
    format_ (eval_format)
{
}

bool
Eval_Command::execute (void)
{ 
  tree_context_.evaluate (format_);
  return true;
}

void
Eval_Command::print_valid_commands (void)
{ 
  std::cout << "\n";
  std::cout << "1a. eval [post-order]\n";
  std::cout << "1b. print [in-order | pre-order | post-order | level-order]\n";
  std::cout << "0a. format [in-order]\n";
  std::cout << "0b. set [variable=value]\n";
  std::cout << "0c. quit\n";
  std::cout << "\n";
}

Set_Command::Set_Command (Expression_Tree_Context &context,
                            const std::string &key_value_pair)
  : Expression_Tree_Command_Impl (context),
    key_value_pair_ (key_value_pair)
{
}

bool
Set_Command::execute (void)
{ 
  tree_context_.set (key_value_pair_);
  return true;
}

void
Set_Command::print_valid_commands (void)
{ 
  std::cout << "\n";

  // if we've never had a format command called
  // successfully, then we have a different set of
  // valid commands

  char abc [3] = { 'a','b','c' };
  int step = 1;
  int sub_step = 0;
  std::string formatMessage (". format [in-order]");

  if (!tree_context_.formatted())
    std::cout << step++ << formatMessage << "\n";

  std::cout << step++ << ". expr [expression]\n";
  std::cout << step << "a. eval [post-order]\n";
  std::cout << step++ << "b. print [in-order | pre-order | post-order | level-order]\n";

  step = 0;

  if (tree_context_.formatted())
    std::cout << step << abc[sub_step++] << formatMessage << "\n";

  std::cout << step << abc[sub_step++] << ". set [variable=value]\n";
  std::cout << step << abc[sub_step++] << ". quit\n";
  std::cout << "\n";
}

Quit_Command::Quit_Command (Expression_Tree_Context &context)
  : Expression_Tree_Command_Impl (context)
{
}

bool
Quit_Command::execute (void)
{ 
  return false; 
}

void
Quit_Command::print_valid_commands (void)
{ 
}

Macro_Command::Macro_Command (Expression_Tree_Context &context,
                              const std::vector <Expression_Tree_Command> &macro_commands)
  : Expression_Tree_Command_Impl (context),
    macro_commands_ (macro_commands)
{
}

bool
Macro_Command::execute (void)
{ 
  // for (std::vector<Expression_Tree_Command>::iterator iter 
  //        = macro_commands_.begin ();
  //      iter != macro_commands_.end ();
  //      iter++)
  //      (*iter).execute ();
  std::for_each (macro_commands_.begin (),
                 macro_commands_.end (),
                 std::mem_fun_ref (&Expression_Tree_Command::execute));

  return true;
}

void
Macro_Command::print_valid_commands (void)
{ 
}

Null_Command::Null_Command (Expression_Tree_Context &context)
  : Expression_Tree_Command_Impl (context) 
{
}

bool 
Null_Command::execute (void) 
{ 
  return true; 
}

void 
Null_Command::print_valid_commands (void)
{
  std::cout << "\n1a. format [in-order]\n";
  std::cout << "1b. set [variable=value]\n";
  std::cout << "2. expr [expression]\n";
  std::cout << "3a. eval [post-order]\n";
  std::cout << "3b. print [in-order | pre-order | post-order | level-order]\n";
  std::cout << "0. quit\n\n";
}

#endif /* _EXPRESSION_TREE_COMMAND_IMPL_CPP */
