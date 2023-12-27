#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlFactory"
template <typename TCreatedType, typename TTraits> constexpr UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::operator ::UnityEngine::UIElements::IUxmlFactory*() noexcept {
  return static_cast<::UnityEngine::UIElements::IUxmlFactory*>(static_cast<void*>(this));
}
template <typename TCreatedType, typename TTraits> constexpr TTraits& UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::__get_m_Traits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr TTraits const& UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::__get_m_Traits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr void UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::__set_m_Traits(TTraits value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Traits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TCreatedType, typename TTraits> inline ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>());
}
template <typename TCreatedType, typename TTraits> inline void UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::get_uxmlName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), "get_uxmlName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::get_uxmlNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), "get_uxmlNamespace",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::get_uxmlQualifiedName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), "get_uxmlQualifiedName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits>
inline bool UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), "AcceptsAttributeBag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc);
}
template <typename TCreatedType, typename TTraits>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::Create(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                       ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>*>::get(), "Create", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, bag, cc);
}
// Ctor Parameters []
template <typename TCreatedType, typename TTraits> constexpr ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, TTraits>::UxmlFactory_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
