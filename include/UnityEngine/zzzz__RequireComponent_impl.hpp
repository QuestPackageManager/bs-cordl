#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__RequireComponent_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*)>(&::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cd276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RequireComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::RequireComponent::*)(::System::Type*, ::System::Type*)>(
    &::UnityEngine::RequireComponent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2cd2794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::RequireComponent::__get_m_Type0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type0;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::RequireComponent::__get_m_Type0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type0;
}
constexpr void UnityEngine::RequireComponent::__set_m_Type0(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::RequireComponent::__get_m_Type1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type1;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::RequireComponent::__get_m_Type1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type1;
}
constexpr void UnityEngine::RequireComponent::__set_m_Type1(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::RequireComponent::__get_m_Type2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type2;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::RequireComponent::__get_m_Type2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type2;
}
constexpr void UnityEngine::RequireComponent::__set_m_Type2(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type* requiredComponent) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RequireComponent*>(requiredComponent));
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type* requiredComponent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requiredComponent);
}
inline ::UnityEngine::RequireComponent* UnityEngine::RequireComponent::New_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::RequireComponent*>(requiredComponent, requiredComponent2));
}
inline void UnityEngine::RequireComponent::_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::RequireComponent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requiredComponent, requiredComponent2);
}
// Ctor Parameters []
constexpr ::UnityEngine::RequireComponent::RequireComponent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
