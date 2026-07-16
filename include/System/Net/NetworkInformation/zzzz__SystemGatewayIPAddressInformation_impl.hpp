#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/SystemGatewayIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__SystemGatewayIPAddressInformation_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressCollection_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634cd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation.ToGatewayIpAddressInformationCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (*)(::System::Net::NetworkInformation::IPAddressCollection*)>(
    &::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x634cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(),
                                                             { "ToGatewayIpAddressInformationCollection", {}, { ::i2c::type_of<::System::Net::NetworkInformation::IPAddressCollection*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPAddress*& System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_get_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr ::System::Net::IPAddress* const& System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_get_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::__cordl_internal_set_address(::System::Net::IPAddress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___address = value;
}
inline void System::Net::NetworkInformation::SystemGatewayIPAddressInformation::_ctor(::System::Net::IPAddress* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*
System::Net::NetworkInformation::SystemGatewayIPAddressInformation::ToGatewayIpAddressInformationCollection(::System::Net::NetworkInformation::IPAddressCollection* addresses) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(),
                                                           { "ToGatewayIpAddressInformationCollection", {}, { ::i2c::type_of<::System::Net::NetworkInformation::IPAddressCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(nullptr, ___internal_method, addresses);
}
inline ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation* System::Net::NetworkInformation::SystemGatewayIPAddressInformation::New_ctor(::System::Net::IPAddress* address) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::SystemGatewayIPAddressInformation*>(address));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::SystemGatewayIPAddressInformation::SystemGatewayIPAddressInformation() {}
