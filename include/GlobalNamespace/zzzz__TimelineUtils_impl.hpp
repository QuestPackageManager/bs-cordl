#pragma once
// IWYU pragma private; include "GlobalNamespace\TimelineUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineUtils_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelineUtils.FindTrackAssetByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (*)(::UnityEngine::Timeline::TimelineAsset*, ::StringW)>(
    &::GlobalNamespace::TimelineUtils::FindTrackAssetByName)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x590a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelineUtils*>(),
                                                             { "FindTrackAssetByName", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GlobalNamespace::TimelineUtils::FindTrackAssetByName(::UnityEngine::Timeline::TimelineAsset* timeline, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TimelineUtils*>(),
                                                           { "FindTrackAssetByName", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineAsset*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(nullptr, ___internal_method, timeline, name);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineUtils::TimelineUtils() {}
