#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BasicNodePool_1.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNodePool_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BasicNode_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNodePool_1<T>::Reset(::UnityEngine::UIElements::UIR::BasicNode_1<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>(),
                                                                                         { "Reset", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::BasicNode_1<T>* UnityEngine::UIElements::UIR::BasicNodePool_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::BasicNode_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::BasicNodePool_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::BasicNodePool_1<T>* UnityEngine::UIElements::UIR::BasicNodePool_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::BasicNodePool_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<T>::BasicNodePool_1() {}
