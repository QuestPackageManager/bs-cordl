#pragma once
// IWYU pragma private; include "GlobalNamespace\TubeLightTrack.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeLightTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeLightTrack::*)()>(&::GlobalNamespace::TubeLightTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x590b57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TubeLightTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeLightTrack* GlobalNamespace::TubeLightTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeLightTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightTrack::TubeLightTrack() {}
