#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\AixNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::AixNetworkInterface::*)(::StringW, uint32_t, int32_t)>(
    &::System::Net::NetworkInformation::AixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x635432c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (::System::Net::NetworkInformation::AixNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63544a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::AixNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6354520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(), 6 }));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifa_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr uint32_t const& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifa_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifa_flags;
}
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_set__ifa_flags(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifa_flags = value;
}
constexpr int32_t& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifru_mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifru_mtu;
}
constexpr int32_t const& System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_get__ifru_mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ifru_mtu;
}
constexpr void System::Net::NetworkInformation::AixNetworkInterface::__cordl_internal_set__ifru_mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ifru_mtu = value;
}
inline void System::Net::NetworkInformation::AixNetworkInterface::_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, ifa_flags, ifru_mtu);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::AixNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::AixNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterface*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::AixNetworkInterface* System::Net::NetworkInformation::AixNetworkInterface::New_ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::AixNetworkInterface*>(name, ifa_flags, ifru_mtu));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixNetworkInterface::AixNetworkInterface() {}
