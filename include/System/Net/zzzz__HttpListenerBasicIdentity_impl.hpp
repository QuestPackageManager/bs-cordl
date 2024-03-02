#pragma once
#include "System/Security/Principal/zzzz__GenericIdentity_impl.hpp"
#include "System/Net/zzzz__HttpListenerBasicIdentity_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerBasicIdentity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerBasicIdentity::*)(::StringW, ::StringW)>(
    &::System::Net::HttpListenerBasicIdentity::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2ab5050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerBasicIdentity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::HttpListenerBasicIdentity::__cordl_internal_get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr ::StringW const& System::Net::HttpListenerBasicIdentity::__cordl_internal_get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void System::Net::HttpListenerBasicIdentity::__cordl_internal_set_password(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::HttpListenerBasicIdentity* System::Net::HttpListenerBasicIdentity::New_ctor(::StringW username, ::StringW password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpListenerBasicIdentity*>(username, password));
}
inline void System::Net::HttpListenerBasicIdentity::_ctor(::StringW username, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerBasicIdentity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, username, password);
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerBasicIdentity::HttpListenerBasicIdentity() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
