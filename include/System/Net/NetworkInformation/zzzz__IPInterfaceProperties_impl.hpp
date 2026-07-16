#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/IPInterfaceProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__GatewayIPAddressInformationCollection_def.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformationCollection_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties.get_UnicastAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* (::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties.get_GatewayAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* (::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(
    &::System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPInterfaceProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::IPInterfaceProperties::*)()>(&::System::Net::NetworkInformation::IPInterfaceProperties::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634cad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::IPInterfaceProperties::get_UnicastAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::IPInterfaceProperties::get_GatewayAddresses() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::IPInterfaceProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPInterfaceProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::IPInterfaceProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::IPInterfaceProperties*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties::IPInterfaceProperties() {}
