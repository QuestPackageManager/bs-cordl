#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnicastIPAddressInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnicastIPAddressInformation::*)()>(
    &::System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634d050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnicastIPAddressInformation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::UnicastIPAddressInformation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnicastIPAddressInformation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnicastIPAddressInformation* System::Net::NetworkInformation::UnicastIPAddressInformation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnicastIPAddressInformation*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnicastIPAddressInformation::UnicastIPAddressInformation() {}
