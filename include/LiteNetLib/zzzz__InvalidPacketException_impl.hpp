#pragma once
// IWYU pragma private; include "LiteNetLib\InvalidPacketException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "LiteNetLib/zzzz__InvalidPacketException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::LiteNetLib::InvalidPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::InvalidPacketException::*)()>(&::LiteNetLib::InvalidPacketException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589d9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::InvalidPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::InvalidPacketException::*)(::StringW)>(&::LiteNetLib::InvalidPacketException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x589d9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::InvalidPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::InvalidPacketException::*)(::StringW, ::System::Exception*)>(&::LiteNetLib::InvalidPacketException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x589d9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::InvalidPacketException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::InvalidPacketException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void LiteNetLib::InvalidPacketException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::InvalidPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::LiteNetLib::InvalidPacketException* LiteNetLib::InvalidPacketException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::InvalidPacketException*>());
}
inline ::LiteNetLib::InvalidPacketException* LiteNetLib::InvalidPacketException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::InvalidPacketException*>(message));
}
inline ::LiteNetLib::InvalidPacketException* LiteNetLib::InvalidPacketException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::InvalidPacketException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::LiteNetLib::InvalidPacketException::InvalidPacketException() {}
