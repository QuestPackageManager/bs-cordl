#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\MacOsNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterface::*)(::StringW, uint32_t)>(
    &::System::Net::NetworkInformation::MacOsNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6356a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6356a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::MacOsNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6356a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), 6 }));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_get__ifa_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr uint32_t const& System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_get__ifa_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr void System::Net::NetworkInformation::MacOsNetworkInterface::__cordl_internal_set__ifa_flags(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifa_flags = value;
}
inline void System::Net::NetworkInformation::MacOsNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ifa_flags);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::MacOsNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::MacOsNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterface*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterface* System::Net::NetworkInformation::MacOsNetworkInterface::New_ctor(::StringW name, uint32_t ifa_flags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::MacOsNetworkInterface*>(name, ifa_flags));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsNetworkInterface::MacOsNetworkInterface() {}
