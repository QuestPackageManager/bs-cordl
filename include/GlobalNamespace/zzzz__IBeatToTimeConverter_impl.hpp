#pragma once
// IWYU pragma private; include "GlobalNamespace\IBeatToTimeConverter.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatToTimeConverter.ConvertBeatToTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IBeatToTimeConverter::*)(float_t)>(&::GlobalNamespace::IBeatToTimeConverter::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IBeatToTimeConverter*>(), { ::i2c::class_of<::GlobalNamespace::IBeatToTimeConverter*>(), 0 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IBeatToTimeConverter::ConvertBeatToTime(float_t beat) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IBeatToTimeConverter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, beat);
}
