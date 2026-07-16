#pragma once
// IWYU pragma private; include "System/Net/IPAddress_ReadOnlyIPAddress.hpp"
#include "System/Net/zzzz__IPAddress_impl.hpp"
#include "System/Net/zzzz__IPAddress_ReadOnlyIPAddress_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IPAddress_ReadOnlyIPAddress._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IPAddress_ReadOnlyIPAddress::*)(int64_t)>(&::GlobalNamespace::IPAddress_ReadOnlyIPAddress::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x63f5b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPAddress_ReadOnlyIPAddress::_ctor(int64_t newAddress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAddress);
}
inline ::GlobalNamespace::IPAddress_ReadOnlyIPAddress* GlobalNamespace::IPAddress_ReadOnlyIPAddress::New_ctor(int64_t newAddress) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::IPAddress_ReadOnlyIPAddress*>(newAddress));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IPAddress_ReadOnlyIPAddress::IPAddress_ReadOnlyIPAddress() {}
