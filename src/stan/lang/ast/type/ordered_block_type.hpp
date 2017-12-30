#ifndef STAN_LANG_AST_ORDERED_BLOCK_TYPE_HPP
#define STAN_LANG_AST_ORDERED_BLOCK_TYPE_HPP

#include <stan/lang/ast/node/expression.hpp>
#include <stan/lang/ast/node/range.hpp>

namespace stan {
  namespace lang {

    /**
     * Ordered block var type.
     */
    struct ordered_block_type {
      /**
       * Length of ordered vector
       */
      expression K_;

      /**
       * Construct a block var type with default values.
       */
      ordered_block_type();

      /**
       * Construct a block var type with specified values.
       *
       * @param K size
       */
      ordered_block_type(const expression& K);
    };

  }
}
#endif