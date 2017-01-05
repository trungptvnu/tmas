//===--- CheesePizza.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHEESE_PIZZA_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHEESE_PIZZA_HPP_

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"
#include <memory>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class CheesePizza : public Pizza {

        mutable std::unique_ptr< PizzaIngredientFactory > _ingredientFactory;

      public:
        explicit CheesePizza( PizzaIngredientFactory* ingredientFactory );
        void prepare() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
