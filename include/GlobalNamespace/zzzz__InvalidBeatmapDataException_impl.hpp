#pragma once
// IWYU pragma private; include "GlobalNamespace\InvalidBeatmapDataException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__InvalidBeatmapDataException_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InvalidBeatmapDataException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InvalidBeatmapDataException::*)(::StringW)>(&::GlobalNamespace::InvalidBeatmapDataException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32b2cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InvalidBeatmapDataException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InvalidBeatmapDataException::_ctor(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InvalidBeatmapDataException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::InvalidBeatmapDataException* GlobalNamespace::InvalidBeatmapDataException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InvalidBeatmapDataException*>(message));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InvalidBeatmapDataException::InvalidBeatmapDataException() {}
