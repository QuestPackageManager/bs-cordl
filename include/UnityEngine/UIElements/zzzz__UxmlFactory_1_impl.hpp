#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlFactory_1.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TCreatedType>
  requires(::cordl_internals::type_constraint<TCreatedType, ::UnityEngine::UIElements::VisualElement*> && ::cordl_internals::default_constructor_constraint<TCreatedType>)
inline void UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCreatedType>
  requires(::cordl_internals::type_constraint<TCreatedType, ::UnityEngine::UIElements::VisualElement*> && ::cordl_internals::default_constructor_constraint<TCreatedType>)
inline ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>* UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>*>());
}
// Ctor Parameters []
template <typename TCreatedType>
  requires(::cordl_internals::type_constraint<TCreatedType, ::UnityEngine::UIElements::VisualElement*> && ::cordl_internals::default_constructor_constraint<TCreatedType>)
constexpr ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>::UxmlFactory_1() {}
