#pragma once
#include "UnityEngine/UIElements/zzzz__UxmlTraits_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlRootElementTraits::*)()>(
    &::UnityEngine::UIElements::UxmlRootElementTraits::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2e2b37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlRootElementTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Class() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Class;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_get_m_Class() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Class;
}
constexpr void UnityEngine::UIElements::UxmlRootElementTraits::__cordl_internal_set_m_Class(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Class)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::UxmlRootElementTraits* UnityEngine::UIElements::UxmlRootElementTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlRootElementTraits*>());
}
inline void UnityEngine::UIElements::UxmlRootElementTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlRootElementTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlRootElementTraits::UxmlRootElementTraits() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
