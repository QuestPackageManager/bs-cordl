#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.FreeInterfaceAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), { "FreeInterfaceAddresses", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetInterfaceAddresses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634f394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(),
                                                                                           { "GetInterfaceAddresses", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x634f414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::*)()>(&::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::FreeInterfaceAddresses(::System::IntPtr ifap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), { "FreeInterfaceAddresses", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ifap);
}
inline int32_t System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetInterfaceAddresses(::by_ref<::System::IntPtr> ifap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(),
                                                                                         { "GetInterfaceAddresses", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ifap);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI* System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxNetworkInterfaceAPI::LinuxNetworkInterfaceAPI() {}
