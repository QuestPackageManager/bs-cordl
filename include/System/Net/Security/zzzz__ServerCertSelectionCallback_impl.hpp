#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__ServerCertSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Security::ServerCertSelectionCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Security::ServerCertSelectionCallback::*)(::System::Object*, void*)>(
    &::System::Net::Security::ServerCertSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29043c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::ServerCertSelectionCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::ServerCertSelectionCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Security::ServerCertSelectionCallback::*)(::StringW)>(&::System::Net::Security::ServerCertSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2904498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::ServerCertSelectionCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::ServerCertSelectionCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Net::Security::ServerCertSelectionCallback* System::Net::Security::ServerCertSelectionCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Security::ServerCertSelectionCallback*>(object, method));
}
inline void System::Net::Security::ServerCertSelectionCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::ServerCertSelectionCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::ServerCertSelectionCallback::Invoke(::StringW hostName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Security::ServerCertSelectionCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, hostName);
}
// Ctor Parameters []
constexpr ::System::Net::Security::ServerCertSelectionCallback::ServerCertSelectionCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
