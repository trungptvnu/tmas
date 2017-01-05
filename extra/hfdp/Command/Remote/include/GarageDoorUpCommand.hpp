//===--- GarageDoorUpCommand.hpp - ------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_UP_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_UP_COMMAND_HPP_

#include "Command.hpp"
#include "GarageDoor.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class GarageDoorUpCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorUpCommand( const GarageDoor* garageDoor );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
