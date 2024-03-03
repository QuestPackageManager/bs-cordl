#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__CastHelper_1_def.hpp"
// Ctor Parameters [CppParam { name: "t", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "onePointerFurtherThanT", ty: "void*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::CastHelper_1<T>::CastHelper_1(T t, void* onePointerFurtherThanT) noexcept {
  this->t = t;
  this->onePointerFurtherThanT = onePointerFurtherThanT;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::CastHelper_1<T>::CastHelper_1() {}
