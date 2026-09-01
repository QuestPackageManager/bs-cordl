#pragma once
// IWYU pragma private; include "GlobalNamespace\CustomControlTrack.hpp"
#include "UnityEngine/Timeline/zzzz__ControlTrack_impl.hpp"
#include "GlobalNamespace/zzzz__CustomControlTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomControlTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomControlTrack::*)()>(&::GlobalNamespace::CustomControlTrack::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5907900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomControlTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomControlTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CustomControlTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomControlTrack* GlobalNamespace::CustomControlTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomControlTrack*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomControlTrack::CustomControlTrack() {}
