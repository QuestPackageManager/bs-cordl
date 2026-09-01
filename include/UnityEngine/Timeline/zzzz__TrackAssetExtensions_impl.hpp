#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TrackAssetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAssetExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__GroupTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAssetExtensions.GetGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::GroupTrack> (*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAssetExtensions::GetGroup)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x69c79c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAssetExtensions*>(), { "GetGroup", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAssetExtensions.SetGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::GroupTrack*)>(
    &::UnityEngine::Timeline::TrackAssetExtensions::SetGroup)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x69c7a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAssetExtensions*>(),
                                                             { "SetGroup", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Timeline::GroupTrack*>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Timeline::GroupTrack> UnityEngine::Timeline::TrackAssetExtensions::GetGroup(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAssetExtensions*>(), { "GetGroup", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::GroupTrack>>(nullptr, ___internal_method, asset);
}
inline void UnityEngine::Timeline::TrackAssetExtensions::SetGroup(::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::Timeline::GroupTrack* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TrackAssetExtensions*>(),
                                                           { "SetGroup", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(), ::i2c::type_of<::UnityEngine::Timeline::GroupTrack*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset, group);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAssetExtensions::TrackAssetExtensions() {}
