#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\AppRestartRequestedException.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationException_impl.hpp"
#include "BeatSaber/Destinations/zzzz__AppRestartRequestedException_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::AppRestartRequestedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::AppRestartRequestedException::*)()>(&::BeatSaber::Destinations::AppRestartRequestedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3281b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::AppRestartRequestedException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::AppRestartRequestedException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::AppRestartRequestedException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::AppRestartRequestedException* BeatSaber::Destinations::AppRestartRequestedException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::AppRestartRequestedException*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::AppRestartRequestedException::AppRestartRequestedException() {}
