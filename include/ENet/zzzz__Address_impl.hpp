#pragma once
// IWYU pragma private; include "ENet/Address.hpp"
#include "ENet/zzzz__ENetAddress_impl.hpp"
#include "ENet/zzzz__Address_def.hpp"
#include "ENet/zzzz__ENetAddress_def.hpp"
//  Writing Method size for method: ::ENet::Address.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::ENetAddress (::ENet::Address::*)()>(&::ENet::Address::get_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5893f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Address::*)(::ENet::ENetAddress)>(&::ENet::Address::set_NativeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5893f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetAddress>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Address::*)(::ENet::ENetAddress)>(&::ENet::Address::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5893f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetAddress>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.get_Port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::ENet::Address::*)()>(&::ENet::Address::get_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "get_Port", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.set_Port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Address::*)(uint16_t)>(&::ENet::Address::set_Port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "set_Port", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.GetIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::Address::*)()>(&::ENet::Address::GetIP)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5893f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "GetIP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.SetIP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Address::*)(::StringW)>(&::ENet::Address::SetIP)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58940cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "SetIP", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.GetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::Address::*)()>(&::ENet::Address::GetHost)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58941d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "GetHost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Address.SetHost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Address::*)(::StringW)>(&::ENet::Address::SetHost)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5894348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "SetHost", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::ENet::ENetAddress ENet::Address::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetAddress>(*this, ___internal_method);
}
inline void ENet::Address::set_NativeData(::ENet::ENetAddress value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "set_NativeData", {}, { ::i2c::type_of<::ENet::ENetAddress>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::Address::_ctor(::ENet::ENetAddress address) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { ".ctor", {}, { ::i2c::type_of<::ENet::ENetAddress>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, address);
}
inline uint16_t ENet::Address::get_Port() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "get_Port", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline void ENet::Address::set_Port(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "set_Port", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW ENet::Address::GetIP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "GetIP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool ENet::Address::SetIP(::StringW ip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "SetIP", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ip);
}
inline ::StringW ENet::Address::GetHost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "GetHost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool ENet::Address::SetHost(::StringW hostName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Address>(), { "SetHost", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, hostName);
}
// Ctor Parameters [CppParam { name: "nativeAddress", ty: "::ENet::ENetAddress", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Address::Address(::ENet::ENetAddress nativeAddress) noexcept {
  this->nativeAddress = nativeAddress;
}
// Ctor Parameters []
constexpr ::ENet::Address::Address() {}
