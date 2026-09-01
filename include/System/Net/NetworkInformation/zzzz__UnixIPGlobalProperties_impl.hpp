#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\UnixIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/zzzz__CommonUnixIPGlobalProperties_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixIPGlobalProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixIPGlobalProperties::*)()>(&::System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6356e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixIPGlobalProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::UnixIPGlobalProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixIPGlobalProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixIPGlobalProperties* System::Net::NetworkInformation::UnixIPGlobalProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnixIPGlobalProperties*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixIPGlobalProperties::UnixIPGlobalProperties() {}
