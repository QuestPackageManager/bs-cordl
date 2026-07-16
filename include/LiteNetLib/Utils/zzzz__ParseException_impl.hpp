#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/ParseException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "LiteNetLib/Utils/zzzz__ParseException_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::ParseException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::ParseException::*)(::StringW)>(&::LiteNetLib::Utils::ParseException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58ae6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::ParseException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void LiteNetLib::Utils::ParseException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::ParseException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::LiteNetLib::Utils::ParseException* LiteNetLib::Utils::ParseException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::ParseException*>(message));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::ParseException::ParseException() {}
