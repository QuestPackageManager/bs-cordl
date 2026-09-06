#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArrayDebugView_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayDebugView_1_def.hpp"
// Ctor Parameters []
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
constexpr ::Unity::Collections::NativeArrayDebugView_1<T>::NativeArrayDebugView_1() {}
