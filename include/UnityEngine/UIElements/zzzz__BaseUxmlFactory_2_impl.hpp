#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseUxmlFactory_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseUxmlFactory_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename TCreatedType, typename TTraits> constexpr TTraits& UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_get_m_Traits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr TTraits const& UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_get_m_Traits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Traits;
}
template <typename TCreatedType, typename TTraits> constexpr void UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::__cordl_internal_set_m_Traits(TTraits value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Traits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TCreatedType, typename TTraits>
inline ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>* UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>());
}
template <typename TCreatedType, typename TTraits> inline void UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlNamespace() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::StringW UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlQualifiedName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits> inline ::System::Type* UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::get_uxmlType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TCreatedType, typename TTraits>
inline bool UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc);
}
// Ctor Parameters []
template <typename TCreatedType, typename TTraits> constexpr ::UnityEngine::UIElements::BaseUxmlFactory_2<TCreatedType, TTraits>::BaseUxmlFactory_2() {}
