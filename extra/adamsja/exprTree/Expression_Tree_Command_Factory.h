/* -*- C++ -*- */
#ifndef _EXPRESSION_TREE_COMMAND_FACTORY_H_
#define _EXPRESSION_TREE_COMMAND_FACTORY_H_

#include <string>
#include "Expression_Tree_Command.h"
#include "Expression_Tree_Command_Factory_Impl.h"
#include "Refcounter.h"

// Forward declarations.
class Expression_Tree_Iterator_Impl;
class Expression_Tree_Context;

/**
 * @class Expression_Tree_Command_Factory
 * @brief Interface for the Abstract Factory pattern that is used
 *        create the appropriate @a Expression_Tree_Command based on a
 *        string supplied by the caller.  
 *
 *        Plays the role of the "abstraction" class in the Bridge
 *        pattern and delegates to the appropriate "implementor"
 *        that creates the designated commands.
 */
class Expression_Tree_Command_Factory
{
public:
  /// Default ctor that storms the designated @ tree_context.
  Expression_Tree_Command_Factory (Expression_Tree_Context &tree_context);

  /// Copy ctor - needed for reference counting.
  Expression_Tree_Command_Factory (const Expression_Tree_Command_Factory &f);

  /// Assignment operator - needed for reference counting.
  void operator= (const Expression_Tree_Command_Factory &f);

  /// Dtor.
  ~Expression_Tree_Command_Factory (void);

  /// Make the requested command.  This method is the primary method
  /// used by clients.  
  Expression_Tree_Command make_command (const std::string &command);

  /// Make the requested format command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_format_command (const std::string &);

  /// Make the requested expression command.  This method is used in
  /// the implementation of the various commands.
  Expression_Tree_Command make_expr_command (const std::string &);

  /// Make the requested print command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_print_command (const std::string &);

  /// Make the requested set command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_set_command (const std::string &);

  /// Make the requested eval command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_eval_command (const std::string &);

  /// Make the requested quit command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_quit_command (const std::string &);

  /// Make the requested macro command.  This method is used in the
  /// implementation of the various commands.
  Expression_Tree_Command make_macro_command (const std::string &);

private:
  /// Pointer to actual implementation, i.e., the "bridge", which is
  /// reference counted to automate memory management. 
  Refcounter <Expression_Tree_Command_Factory_Impl> factory_impl_;
};

#endif /* _EXPRESSION_TREE_COMMAND_FACTORY_H_ */
