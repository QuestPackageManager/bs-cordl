#pragma once
// IWYU pragma private; include "System/Net/IWebProxy.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IWebProxy.GetProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::IWebProxy::*)(::System::Uri*)>(&::System::Net::IWebProxy::GetProxy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IWebProxy*>(), { ::i2c::class_of<::System::Net::IWebProxy*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxy.IsBypassed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IWebProxy::*)(::System::Uri*)>(&::System::Net::IWebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IWebProxy*>(), { ::i2c::class_of<::System::Net::IWebProxy*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IWebProxy.get_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::IWebProxy::*)()>(&::System::Net::IWebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IWebProxy*>(), { ::i2c::class_of<::System::Net::IWebProxy*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Uri* System::Net::IWebProxy::GetProxy(::System::Uri* destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IWebProxy*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline bool System::Net::IWebProxy::IsBypassed(::System::Uri* host) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IWebProxy*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline ::System::Net::ICredentials* System::Net::IWebProxy::get_Credentials() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IWebProxy*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
