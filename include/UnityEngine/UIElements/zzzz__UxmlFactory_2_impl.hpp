#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlFactory_2.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
template <typename TCreatedType, typename TTraits>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::Create(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, bag, cc);
}
template <typename TCreatedType, typename TTraits> inline void UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>());
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
