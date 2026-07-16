#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IgnoreOnPlayableTrackAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__IgnoreOnPlayableTrackAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::*)()>(&::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c5c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute* UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::IgnoreOnPlayableTrackAttribute() {}
