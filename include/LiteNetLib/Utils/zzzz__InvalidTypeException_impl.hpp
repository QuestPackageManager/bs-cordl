#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\InvalidTypeException.hpp"
#include "System/zzzz__ArgumentException_impl.hpp"
#include "LiteNetLib/Utils/zzzz__InvalidTypeException_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::InvalidTypeException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::InvalidTypeException::*)(::StringW)>(&::LiteNetLib::Utils::InvalidTypeException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58ac820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::InvalidTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::InvalidTypeException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::InvalidTypeException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::LiteNetLib::Utils::InvalidTypeException* LiteNetLib::Utils::InvalidTypeException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::InvalidTypeException*>(message));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::InvalidTypeException::InvalidTypeException() {}
