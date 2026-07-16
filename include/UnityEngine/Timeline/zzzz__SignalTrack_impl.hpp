#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalTrack.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__SignalTrack_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::SignalTrack._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::SignalTrack::*)()>(&::UnityEngine::Timeline::SignalTrack::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c21a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalTrack*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::SignalTrack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::SignalTrack*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::SignalTrack* UnityEngine::Timeline::SignalTrack::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::SignalTrack*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::SignalTrack::SignalTrack() {}
