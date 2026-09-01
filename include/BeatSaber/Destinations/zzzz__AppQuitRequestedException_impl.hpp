#pragma once
// IWYU pragma private; include "BeatSaber\Destinations\AppQuitRequestedException.hpp"
#include "BeatSaber/Destinations/zzzz__InitialDestinationException_impl.hpp"
#include "BeatSaber/Destinations/zzzz__AppQuitRequestedException_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::AppQuitRequestedException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Destinations::AppQuitRequestedException::*)()>(&::BeatSaber::Destinations::AppQuitRequestedException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3281b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::AppQuitRequestedException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void BeatSaber::Destinations::AppQuitRequestedException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Destinations::AppQuitRequestedException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Destinations::AppQuitRequestedException* BeatSaber::Destinations::AppQuitRequestedException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Destinations::AppQuitRequestedException*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::AppQuitRequestedException::AppQuitRequestedException() {}
