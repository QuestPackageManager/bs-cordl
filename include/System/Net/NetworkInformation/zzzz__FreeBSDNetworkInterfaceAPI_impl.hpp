#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/FreeBSDNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__FreeBSDNetworkInterfaceAPI_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x634ed1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI* System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::FreeBSDNetworkInterfaceAPI::FreeBSDNetworkInterfaceAPI() {}
