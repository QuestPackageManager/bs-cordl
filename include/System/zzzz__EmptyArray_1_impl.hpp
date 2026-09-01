#pragma once
// IWYU pragma private; include "System\EmptyArray_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EmptyArray_1_def.hpp"
template <typename T> inline void System::EmptyArray_1<T>::setStaticF_Value(::ArrayW<T> value) {
  ::cordl_internals::setStaticField<::ArrayW<T>, "Value", ::System::EmptyArray_1<T>*>(std::forward<::ArrayW<T>>(value));
}
template <typename T> inline ::ArrayW<T> System::EmptyArray_1<T>::getStaticF_Value() {
  return ::cordl_internals::getStaticField<::ArrayW<T>, "Value", ::System::EmptyArray_1<T>*>();
}
// Ctor Parameters []
template <typename T> constexpr ::System::EmptyArray_1<T>::EmptyArray_1() {}
