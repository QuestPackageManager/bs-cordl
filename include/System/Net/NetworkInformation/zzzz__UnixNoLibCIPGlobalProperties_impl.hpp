#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\UnixNoLibCIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNoLibCIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties.get_DomainName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6356e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::*)()>(
    &::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6356e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::get_DomainName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties* System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties::UnixNoLibCIPGlobalProperties() {}
