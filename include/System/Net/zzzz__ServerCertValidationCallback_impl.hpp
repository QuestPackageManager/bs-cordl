#pragma once
// IWYU pragma private; include "System/Net/ServerCertValidationCallback.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::__ServerCertValidationCallback__CallbackContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__ServerCertValidationCallback__CallbackContext::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::__ServerCertValidationCallback__CallbackContext::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ff0c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServerCertValidationCallback__CallbackContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_set_request(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_certificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const&
System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_certificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificate;
}
constexpr void System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Chain*& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Chain*> const&
System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chain;
}
constexpr void System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_set_chain(::System::Security::Cryptography::X509Certificates::X509Chain* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Security::SslPolicyErrors& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_sslPolicyErrors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslPolicyErrors;
}
constexpr ::System::Net::Security::SslPolicyErrors const& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_sslPolicyErrors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sslPolicyErrors;
}
constexpr void System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_set_sslPolicyErrors(::System::Net::Security::SslPolicyErrors value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sslPolicyErrors = value;
}
constexpr bool& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr bool const& System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void System::Net::__ServerCertValidationCallback__CallbackContext::__cordl_internal_set_result(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
inline ::System::Net::__ServerCertValidationCallback__CallbackContext*
System::Net::__ServerCertValidationCallback__CallbackContext::New_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                       ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__ServerCertValidationCallback__CallbackContext*>(request, certificate, chain, sslPolicyErrors));
}
inline void System::Net::__ServerCertValidationCallback__CallbackContext::_ctor(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                                ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__ServerCertValidationCallback__CallbackContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, certificate, chain, sslPolicyErrors);
}
// Ctor Parameters []
constexpr ::System::Net::__ServerCertValidationCallback__CallbackContext::__ServerCertValidationCallback__CallbackContext() {}
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServerCertValidationCallback::*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
    &::System::Net::ServerCertValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2ff099c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.get_ValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Security::RemoteCertificateValidationCallback* (::System::Net::ServerCertValidationCallback::*)()>(
    &::System::Net::ServerCertValidationCallback::get_ValidationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ff0a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(),
                                                                               "get_ValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.Callback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServerCertValidationCallback::*)(::System::Object*)>(
    &::System::Net::ServerCertValidationCallback::Callback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ff0a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), "Callback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServerCertValidationCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::ServerCertValidationCallback::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::ServerCertValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2ff0ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_ValidationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidationCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const&
System::Net::ServerCertValidationCallback::__cordl_internal_get_m_ValidationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidationCallback;
}
constexpr void System::Net::ServerCertValidationCallback::__cordl_internal_set_m_ValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ValidationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Net::ServerCertValidationCallback::__cordl_internal_get_m_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr void System::Net::ServerCertValidationCallback::__cordl_internal_set_m_Context(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::ServerCertValidationCallback* System::Net::ServerCertValidationCallback::New_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ServerCertValidationCallback*>(validationCallback));
}
inline void System::Net::ServerCertValidationCallback::_ctor(::System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, validationCallback);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::ServerCertValidationCallback::get_ValidationCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(),
                                                                             "get_ValidationCallback", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::RemoteCertificateValidationCallback*, false>(this, ___internal_method);
}
inline void System::Net::ServerCertValidationCallback::Callback(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), "Callback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool System::Net::ServerCertValidationCallback::Invoke(::System::Object* request, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                              ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServerCertValidationCallback*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, request, certificate, chain, sslPolicyErrors);
}
// Ctor Parameters []
constexpr ::System::Net::ServerCertValidationCallback::ServerCertValidationCallback() {}
