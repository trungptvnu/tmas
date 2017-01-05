//===--- Quack.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_QUACK_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_HPP_

#include "QuackBehavior.hpp"

namespace HFDP {
  namespace Strategy {

    class Quack : public QuackBehavior {

    public:
      void quack () const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
