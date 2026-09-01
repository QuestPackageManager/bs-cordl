#pragma once
// IWYU pragma private; include "GlobalNamespace\HttpBadRequestException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__HttpBadRequestException_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HttpBadRequestException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HttpBadRequestException::*)(::StringW)>(&::GlobalNamespace::HttpBadRequestException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3332848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HttpBadRequestException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HttpBadRequestException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HttpBadRequestException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::HttpBadRequestException* GlobalNamespace::HttpBadRequestException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HttpBadRequestException*>(message));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HttpBadRequestException::HttpBadRequestException() {}
