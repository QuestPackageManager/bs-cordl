#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightIntensityTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightIntensityTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightIntensityTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeLightIntensityTrack::*)()>(&::GlobalNamespace::TubeLightIntensityTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5909a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightIntensityTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TubeLightIntensityTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightIntensityTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeLightIntensityTrack* GlobalNamespace::TubeLightIntensityTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeLightIntensityTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightIntensityTrack::TubeLightIntensityTrack() {}
