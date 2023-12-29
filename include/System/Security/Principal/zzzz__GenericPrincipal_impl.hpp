#pragma once
#include "System/Security/Claims/zzzz__ClaimsPrincipal_impl.hpp"
#include "System/Security/Principal/zzzz__GenericPrincipal_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::GenericPrincipal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::GenericPrincipal::*)(
    ::System::Security::Principal::IIdentity*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::System::Security::Principal::GenericPrincipal::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x231f0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::GenericPrincipal*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IIdentity*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::IIdentity*& System::Security::Principal::GenericPrincipal::__get_m_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_identity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IIdentity*> const& System::Security::Principal::GenericPrincipal::__get_m_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_identity;
}
constexpr void System::Security::Principal::GenericPrincipal::__set_m_identity(::System::Security::Principal::IIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Security::Principal::GenericPrincipal::__get_m_roles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_roles;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Security::Principal::GenericPrincipal::__get_m_roles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_roles;
}
constexpr void System::Security::Principal::GenericPrincipal::__set_m_roles(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_roles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Principal::GenericPrincipal* System::Security::Principal::GenericPrincipal::New_ctor(::System::Security::Principal::IIdentity* identity,
                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> roles) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::GenericPrincipal*>(identity, roles));
}
inline void System::Security::Principal::GenericPrincipal::_ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW, ::Array<::StringW>*> roles) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::GenericPrincipal*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IIdentity*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity, roles);
}
// Ctor Parameters []
constexpr ::System::Security::Principal::GenericPrincipal::GenericPrincipal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
