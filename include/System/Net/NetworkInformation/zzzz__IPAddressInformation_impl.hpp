#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/IPAddressInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::IPAddressInformation.get_Address
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkInformation::IPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::IPAddressInformation::get_Address)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPAddressInformation*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::IPAddressInformation*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::IPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::IPAddressInformation::*)()>(&::System::Net::NetworkInformation::IPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634ca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPAddressInformation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::IPAddress* System::Net::NetworkInformation::IPAddressInformation::get_Address() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::IPAddressInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::IPAddressInformation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::IPAddressInformation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPAddressInformation* System::Net::NetworkInformation::IPAddressInformation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::IPAddressInformation*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::IPAddressInformation::IPAddressInformation() {}
