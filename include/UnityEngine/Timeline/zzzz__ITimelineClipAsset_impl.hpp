#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ITimelineClipAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::UnityEngine::Timeline::ITimelineClipAsset::*)()>(
    &::UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ITimelineClipAsset*>(), { ::i2c::class_of<::UnityEngine::Timeline::ITimelineClipAsset*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::ITimelineClipAsset::get_clipCaps() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ITimelineClipAsset*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
