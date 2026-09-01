#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlFactory_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TCreatedType, typename TTraits>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::Create(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, bag, cc);
}
template <typename TCreatedType, typename TTraits> inline void UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlFactory"
template <typename TCreatedType, typename TTraits> constexpr UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::operator ::UnityEngine::UIElements::IUxmlFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IUxmlFactory"
template <typename TCreatedType, typename TTraits>
constexpr ::UnityEngine::UIElements::IUxmlFactory* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::i___UnityEngine__UIElements__IUxmlFactory() noexcept {
  return static_cast<::UnityEngine::UIElements::IUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IBaseUxmlFactory"
template <typename TCreatedType, typename TTraits> constexpr UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::operator ::UnityEngine::UIElements::IBaseUxmlFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IBaseUxmlFactory"
template <typename TCreatedType, typename TTraits>
constexpr ::UnityEngine::UIElements::IBaseUxmlFactory* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::i___UnityEngine__UIElements__IBaseUxmlFactory() noexcept {
  return static_cast<::UnityEngine::UIElements::IBaseUxmlFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TCreatedType, typename TTraits> constexpr ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::UxmlFactory_2() {}
