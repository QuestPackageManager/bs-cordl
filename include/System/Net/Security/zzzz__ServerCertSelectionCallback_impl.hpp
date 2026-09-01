#pragma once
// IWYU pragma private; include "System\Net\Security\ServerCertSelectionCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Net/Security/zzzz__ServerCertSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Security::ServerCertSelectionCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Security::ServerCertSelectionCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Net::Security::ServerCertSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6370d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::ServerCertSelectionCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Security::ServerCertSelectionCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::System::Net::Security::ServerCertSelectionCallback::*)(::StringW)>(
    &::System::Net::Security::ServerCertSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6370dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Security::ServerCertSelectionCallback*>(),
                                                                                          { ::i2c::class_of<::System::Net::Security::ServerCertSelectionCallback*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Net::Security::ServerCertSelectionCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Security::ServerCertSelectionCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Security::ServerCertSelectionCallback::Invoke(::StringW hostName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Security::ServerCertSelectionCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(this, ___internal_method, hostName);
}
inline ::System::Net::Security::ServerCertSelectionCallback* System::Net::Security::ServerCertSelectionCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Security::ServerCertSelectionCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::Security::ServerCertSelectionCallback::ServerCertSelectionCallback() {}
