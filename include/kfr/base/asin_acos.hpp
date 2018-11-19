/** @addtogroup math
 *  @{
 */
/*
  Copyright (C) 2016 D Levin (https://www.kfrlib.com)
  This file is part of KFR

  KFR is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  KFR is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with KFR.

  If GPL is not suitable for your project, you must purchase a commercial license to use KFR.
  Buying a commercial license is mandatory as soon as you develop commercial activities without
  disclosing the source code of your own applications.
  See https://www.kfrlib.com for details.
 */
#pragma once

#include "impl/asin_acos.hpp"

namespace kfr
{

/**
 * @brief Returns the arc sine of x. The returned angle is in the range \f$-\pi/2\f$ through \f$\pi/2\f$.
 */
template <typename T1, KFR_ENABLE_IF(is_numeric<T1>::value)>
KFR_INTRIN flt_type<T1> asin(const T1& x)
{
    return intrinsics::asin(x);
}

/**
 * @brief Returns template expression that returns the arc sine of x.
 */
template <typename E1, KFR_ENABLE_IF(is_input_expression<E1>::value)>
KFR_INTRIN internal::expression_function<fn::asin, E1> asin(E1&& x)
{
    return { fn::asin(), std::forward<E1>(x) };
}
/**
 * @brief Returns the arc cosine of x. The returned angle is in the range 0 through \f$\pi\f$.
 */
template <typename T1, KFR_ENABLE_IF(is_numeric<T1>::value)>
KFR_INTRIN flt_type<T1> acos(const T1& x)
{
    return intrinsics::acos(x);
}

/**
 * @brief Returns template expression that returns the arc cosine of x.
 */
template <typename E1, KFR_ENABLE_IF(is_input_expression<E1>::value)>
KFR_INTRIN internal::expression_function<fn::acos, E1> acos(E1&& x)
{
    return { fn::acos(), std::forward<E1>(x) };
}
}
