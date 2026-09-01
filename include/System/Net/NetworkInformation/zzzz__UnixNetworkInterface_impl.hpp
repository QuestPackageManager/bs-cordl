#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\UnixNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::StringW)>(&::System::Net::NetworkInformation::UnixNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x635441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.AddAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::UnixNetworkInterface::AddAddress)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6354354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), { "AddAddress", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.SetLinkLayerInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterface::*)(
    int32_t, ::ArrayW<uint8_t>, ::System::Net::NetworkInformation::NetworkInterfaceType)>(&::System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6354408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(),
                         { "SetLinkLayerInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(&::System::Net::NetworkInformation::UnixNetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63573a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterface.get_NetworkInterfaceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceType (::System::Net::NetworkInformation::UnixNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63573b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), 7 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties*& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_ipproperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipproperties;
}
constexpr ::System::Net::NetworkInformation::IPInterfaceProperties* const& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_ipproperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ipproperties;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_set_ipproperties(::System::Net::NetworkInformation::IPInterfaceProperties* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ipproperties = value;
}
constexpr ::StringW& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_addresses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* const& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_addresses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addresses;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addresses = value;
}
constexpr ::ArrayW<uint8_t>& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_macAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAddress;
}
constexpr ::ArrayW<uint8_t> const& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_macAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAddress;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_set_macAddress(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macAddress = value;
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Net::NetworkInformation::NetworkInterfaceType const& System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Net::NetworkInformation::UnixNetworkInterface::__cordl_internal_set_type(::System::Net::NetworkInformation::NetworkInterfaceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::AddAddress(::System::Net::IPAddress* address) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), { "AddAddress", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::NetworkInformation::UnixNetworkInterface::SetLinkLayerInfo(int32_t index, ::ArrayW<uint8_t> macAddress, ::System::Net::NetworkInformation::NetworkInterfaceType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(),
                          { "SetLinkLayerInfo", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, macAddress, type);
}
inline ::StringW System::Net::NetworkInformation::UnixNetworkInterface::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::UnixNetworkInterface::get_NetworkInterfaceType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterface*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceType>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixNetworkInterface* System::Net::NetworkInformation::UnixNetworkInterface::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnixNetworkInterface*>(name));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNetworkInterface::UnixNetworkInterface() {}
