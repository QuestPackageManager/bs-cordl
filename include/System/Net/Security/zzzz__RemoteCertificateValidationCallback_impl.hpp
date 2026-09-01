#pragma once
// IWYU pragma private; include "System\Net\Security\RemoteCertificateValidationCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Security::RemoteCertificateValidationCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::RemoteCertificateValidationCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Net::Security::RemoteCertificateValidationCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6370b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::RemoteCertificateValidationCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::RemoteCertificateValidationCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Security::RemoteCertificateValidationCallback::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::System::Net::Security::RemoteCertificateValidationCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6370cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Security::RemoteCertificateValidationCallback*>(),
                                                                                          { ::i2c::class_of<::System::Net::Security::RemoteCertificateValidationCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Net::Security::RemoteCertificateValidationCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::RemoteCertificateValidationCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool System::Net::Security::RemoteCertificateValidationCallback::Invoke(::System::Object* sender, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate,
                                                                               ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                               ::System::Net::Security::SslPolicyErrors sslPolicyErrors) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Security::RemoteCertificateValidationCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sender, certificate, chain, sslPolicyErrors);
}
inline ::System::Net::Security::RemoteCertificateValidationCallback* System::Net::Security::RemoteCertificateValidationCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::RemoteCertificateValidationCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Security::RemoteCertificateValidationCallback::RemoteCertificateValidationCallback() {}
