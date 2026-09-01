#pragma once
// IWYU pragma private; include "System\Net\NetworkInformation\NetworkInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceType_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetAllNetworkInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (*)()>(
    &::System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6352380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), { "GetAllNetworkInterfaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x63524d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetIPProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::IPInterfaceProperties* (::System::Net::NetworkInformation::NetworkInterface::*)()>(
    &::System::Net::NetworkInformation::NetworkInterface::GetIPProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6352508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_OperationalStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::NetworkInterface::*)()>(
    &::System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6352540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_NetworkInterfaceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::NetworkInterfaceType (::System::Net::NetworkInformation::NetworkInterface::*)()>(
    &::System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6352578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                                                                                          { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63525b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), { "GetAllNetworkInterfaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(nullptr, ___internal_method);
}
inline ::StringW System::Net::NetworkInformation::NetworkInterface::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::IPInterfaceProperties* System::Net::NetworkInformation::NetworkInterface::GetIPProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::IPInterfaceProperties*>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::NetworkInterfaceType System::Net::NetworkInformation::NetworkInterface::get_NetworkInterfaceType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::NetworkInterfaceType>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::NetworkInterface::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::NetworkInterface* System::Net::NetworkInformation::NetworkInterface::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::NetworkInterface*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetworkInterface::NetworkInterface() {}
