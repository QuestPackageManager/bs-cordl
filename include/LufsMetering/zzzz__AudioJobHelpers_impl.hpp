#pragma once
// IWYU pragma private; include "LufsMetering\AudioJobHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LufsMetering/zzzz__AudioJobHelpers_def.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
//  Writing Method size for method: ::LufsMetering::AudioJobHelpers.GetHighShelfDeManCoefficients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LufsMetering::FilterCoefficients (*)(float_t, float_t, float_t, float_t)>(&::LufsMetering::AudioJobHelpers::GetHighShelfDeManCoefficients)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3267cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LufsMetering::AudioJobHelpers*>(),
                                         { "GetHighShelfDeManCoefficients", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::AudioJobHelpers.GetHighPassDeManCoefficients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LufsMetering::FilterCoefficients (*)(float_t, float_t, float_t)>(&::LufsMetering::AudioJobHelpers::GetHighPassDeManCoefficients)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3267d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::AudioJobHelpers*>(),
                                                             { "GetHighPassDeManCoefficients", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::LufsMetering::FilterCoefficients LufsMetering::AudioJobHelpers::GetHighShelfDeManCoefficients(float_t gain, float_t quality, float_t frequency, float_t rate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LufsMetering::AudioJobHelpers*>(),
                                       { "GetHighShelfDeManCoefficients", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::FilterCoefficients>(nullptr, ___internal_method, gain, quality, frequency, rate);
}
inline ::LufsMetering::FilterCoefficients LufsMetering::AudioJobHelpers::GetHighPassDeManCoefficients(float_t quality, float_t frequency, float_t rate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LufsMetering::AudioJobHelpers*>(),
                                                           { "GetHighPassDeManCoefficients", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::FilterCoefficients>(nullptr, ___internal_method, quality, frequency, rate);
}
// Ctor Parameters []
constexpr ::LufsMetering::AudioJobHelpers::AudioJobHelpers() {}
