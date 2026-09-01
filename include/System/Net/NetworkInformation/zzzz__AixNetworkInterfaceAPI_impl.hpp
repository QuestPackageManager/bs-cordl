#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\AixNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__AixNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifconf_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_flags_def.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__ifreq_mtu_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixAddressFamily_def.hpp"
#include "System/Net/NetworkInformation/zzzz__AixIoctlRequest_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.socket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::NetworkInformation::AixAddressFamily, int32_t, int32_t)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6352f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                { "socket", {}, { ::i2c::type_of<::System::Net::NetworkInformation::AixAddressFamily>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::close)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6352fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), { "close", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ::by_ref<int32_t>)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x635302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                         { "ioctl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ::by_ref<::System::Net::NetworkInformation::AixStructs::ifconf>)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63530cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                           { "ioctl",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifconf>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_flags>)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x635316c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                           { "ioctl",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_flags>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ioctl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Net::NetworkInformation::AixIoctlRequest, ::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>)>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x635320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                           { "ioctl",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                               ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.ByteArrayCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x63532ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                             { "ByteArrayCopy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (::System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0xf2c;
  constexpr static std::size_t addrs = 0x63532c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::AixNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::AixNetworkInterfaceAPI::*)()>(&::System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6354414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::socket(::System::Net::NetworkInformation::AixAddressFamily family, int32_t type, int32_t protocol) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                              { "socket", {}, { ::i2c::type_of<::System::Net::NetworkInformation::AixAddressFamily>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, family, type, protocol);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::close(int32_t fd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), { "close", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fd);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request, ::by_ref<int32_t> arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                       { "ioctl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ::by_ref<::System::Net::NetworkInformation::AixStructs::ifconf> arg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                         { "ioctl",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifconf>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_flags> arg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                         { "ioctl",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_flags>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fd, request, arg);
}
inline int32_t System::Net::NetworkInformation::AixNetworkInterfaceAPI::ioctl(int32_t fd, ::System::Net::NetworkInformation::AixIoctlRequest request,
                                                                              ::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_mtu> arg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                                                         { "ioctl",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::NetworkInformation::AixIoctlRequest>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Net::NetworkInformation::AixStructs::ifreq_mtu>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fd, request, arg);
}
inline void System::Net::NetworkInformation::AixNetworkInterfaceAPI::ByteArrayCopy(uint8_t* dst, uint8_t* src, int32_t elements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(),
                                                           { "ByteArrayCopy", {}, { ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dst, src, elements);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::AixNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::AixNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::AixNetworkInterfaceAPI* System::Net::NetworkInformation::AixNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::AixNetworkInterfaceAPI*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixNetworkInterfaceAPI::AixNetworkInterfaceAPI() {}
