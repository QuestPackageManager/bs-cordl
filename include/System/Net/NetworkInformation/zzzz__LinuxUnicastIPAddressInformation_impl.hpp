#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxUnicastIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxUnicastIPAddressInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)(::System::Net::IPAddress*)>(
    &::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6350608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation.get_Address
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6350610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPAddress*& System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_get_address() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr ::System::Net::IPAddress* const& System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_get_address() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___address;
}
constexpr void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::__cordl_internal_set_address(::System::Net::IPAddress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___address = value;
}
inline void System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::_ctor(::System::Net::IPAddress* address) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::IPAddress*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline ::System::Net::IPAddress* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::get_Address() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation* System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::New_ctor(::System::Net::IPAddress* address) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*>(address));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation::LinuxUnicastIPAddressInformation() {}
