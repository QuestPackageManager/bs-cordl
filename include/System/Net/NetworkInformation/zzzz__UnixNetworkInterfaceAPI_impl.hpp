#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnixNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceFactory_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI.getifaddrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::System::Net::NetworkInformation::UnixNetworkInterfaceAPI::getifaddrs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x634f398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { "getifaddrs", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI.freeifaddrs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Net::NetworkInformation::UnixNetworkInterfaceAPI::freeifaddrs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x634f318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { "freeifaddrs", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::UnixNetworkInterfaceAPI::*)()>(&::System::Net::NetworkInformation::UnixNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634ec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Net::NetworkInformation::UnixNetworkInterfaceAPI::getifaddrs(::by_ref<::System::IntPtr> ifap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { "getifaddrs", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ifap);
}
inline void System::Net::NetworkInformation::UnixNetworkInterfaceAPI::freeifaddrs(::System::IntPtr ifap) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { "freeifaddrs", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ifap);
}
inline void System::Net::NetworkInformation::UnixNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI* System::Net::NetworkInformation::UnixNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::UnixNetworkInterfaceAPI*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI::UnixNetworkInterfaceAPI() {}
