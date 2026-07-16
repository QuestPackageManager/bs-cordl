#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/LinuxNetworkInterface.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__LinuxNetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.unitydroid_get_network_interface_up_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<bool>)>(&::System::Net::NetworkInformation::LinuxNetworkInterface::unitydroid_get_network_interface_up_state)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x634ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(),
                                                             { "unitydroid_get_network_interface_up_state", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_IfacePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x634ffe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { "get_IfacePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::LinuxNetworkInterface::*)(::StringW)>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x634fefc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x634fff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::LinuxNetworkInterface::*)()>(
    &::System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6350060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::LinuxNetworkInterface.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x63503a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { "ReadLine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iface_path = value;
}
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_operstate_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_operstate_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_operstate_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_operstate_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_operstate_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iface_operstate_path = value;
}
constexpr ::StringW& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_flags_path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_flags_path;
}
constexpr ::StringW const& System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_get_iface_flags_path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iface_flags_path;
}
constexpr void System::Net::NetworkInformation::LinuxNetworkInterface::__cordl_internal_set_iface_flags_path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iface_flags_path = value;
}
inline bool System::Net::NetworkInformation::LinuxNetworkInterface::unitydroid_get_network_interface_up_state(::StringW ifname, ::by_ref<bool> is_up) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(),
                                                           { "unitydroid_get_network_interface_up_state", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ifname, is_up);
}
inline ::StringW System::Net::NetworkInformation::LinuxNetworkInterface::get_IfacePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { "get_IfacePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::LinuxNetworkInterface::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::LinuxNetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::LinuxNetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus>(this, ___internal_method);
}
inline ::StringW System::Net::NetworkInformation::LinuxNetworkInterface::ReadLine(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::LinuxNetworkInterface*>(), { "ReadLine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::System::Net::NetworkInformation::LinuxNetworkInterface* System::Net::NetworkInformation::LinuxNetworkInterface::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::LinuxNetworkInterface*>(name));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::LinuxNetworkInterface::LinuxNetworkInterface() {}
