#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/MacOsNetworkInterfaceAPI.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__MacOsNetworkInterfaceAPI_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(&::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6350714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)(int32_t)>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634ed28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::*)()>(
    &::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x6350720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), 4 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_get_AF_INET6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AF_INET6;
}
constexpr int32_t const& System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_get_AF_INET6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AF_INET6;
}
constexpr void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::__cordl_internal_set_AF_INET6(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AF_INET6 = value;
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::_ctor(int32_t AF_INET6) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, AF_INET6);
}
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::GetAllNetworkInterfaces() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>());
}
inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::New_ctor(int32_t AF_INET6) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*>(AF_INET6));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI::MacOsNetworkInterfaceAPI() {}
