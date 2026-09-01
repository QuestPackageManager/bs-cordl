#pragma once
// IWYU pragma private; include "LiteNetLib\TooBigPacketException.hpp"
#include "LiteNetLib/zzzz__InvalidPacketException_impl.hpp"
#include "LiteNetLib/zzzz__TooBigPacketException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::LiteNetLib::TooBigPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::TooBigPacketException::*)()>(&::LiteNetLib::TooBigPacketException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589d9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::TooBigPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::TooBigPacketException::*)(::StringW)>(&::LiteNetLib::TooBigPacketException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x589d9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::TooBigPacketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::TooBigPacketException::*)(::StringW, ::System::Exception*)>(&::LiteNetLib::TooBigPacketException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x589da20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::TooBigPacketException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::TooBigPacketException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void LiteNetLib::TooBigPacketException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::TooBigPacketException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline ::LiteNetLib::TooBigPacketException* LiteNetLib::TooBigPacketException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::TooBigPacketException*>());
}
inline ::LiteNetLib::TooBigPacketException* LiteNetLib::TooBigPacketException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::TooBigPacketException*>(message));
}
inline ::LiteNetLib::TooBigPacketException* LiteNetLib::TooBigPacketException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::TooBigPacketException*>(message, innerException));
}
// Ctor Parameters []
constexpr ::LiteNetLib::TooBigPacketException::TooBigPacketException() {}
