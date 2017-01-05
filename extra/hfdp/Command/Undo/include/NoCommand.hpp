//===--- NoCommand.hpp - ----------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_

#include "Command.hpp"

namespace HFDP {
  namespace Command {
    namespace Undo {

      class NoCommand : public Command {

      public:
        void execute() const;
        void undo() const;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
