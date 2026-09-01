#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\TimelineClipExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClipExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x69ce354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                                { "MoveToTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.TryMoveToTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x69ce794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                                { "TryMoveToTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack_Impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Object*,
                                                                ::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x69ce670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                                             { "MoveToTrack_Impl",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                                 ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimelineClipExtensions::setStaticF_k_UndoSetParentTrackText(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_UndoSetParentTrackText", ::UnityEngine::Timeline::TimelineClipExtensions*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Timeline::TimelineClipExtensions::getStaticF_k_UndoSetParentTrackText() {
  return ::cordl_internals::getStaticField<::StringW, "k_UndoSetParentTrackText", ::UnityEngine::Timeline::TimelineClipExtensions*>();
}
inline void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                              { "MoveToTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, destinationTrack);
}
inline bool UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                              { "TryMoveToTrack", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, clip, destinationTrack);
}
inline void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack,
                                                                            ::UnityEngine::Object* asset, ::UnityEngine::Timeline::TrackAsset* parentTrack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimelineClipExtensions*>(),
                                                           { "MoveToTrack_Impl",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>(),
                                                               ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clip, destinationTrack, asset, parentTrack);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClipExtensions::TimelineClipExtensions() {}
