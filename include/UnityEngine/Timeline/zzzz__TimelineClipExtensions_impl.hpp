#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClipExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2d5825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "MoveToTrack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.TryMoveToTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2d5873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "TryMoveToTrack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimelineClipExtensions.MoveToTrack_Impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Object*,
                                                                                           ::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2d5861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "MoveToTrack_Impl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::TimelineClipExtensions::setStaticF_k_UndoSetParentTrackText(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_UndoSetParentTrackText", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Timeline::TimelineClipExtensions::getStaticF_k_UndoSetParentTrackText() {
  return ::cordl_internals::getStaticField<::StringW, "k_UndoSetParentTrackText", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get>();
}
inline void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "MoveToTrack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip, destinationTrack);
}
inline bool UnityEngine::Timeline::TimelineClipExtensions::TryMoveToTrack(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "TryMoveToTrack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clip, destinationTrack);
}
inline void UnityEngine::Timeline::TimelineClipExtensions::MoveToTrack_Impl(::UnityEngine::Timeline::TimelineClip* clip, ::UnityEngine::Timeline::TrackAsset* destinationTrack,
                                                                            ::UnityEngine::Object* asset, ::UnityEngine::Timeline::TrackAsset* parentTrack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimelineClipExtensions*>::get(), "MoveToTrack_Impl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip, destinationTrack, asset, parentTrack);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimelineClipExtensions::TimelineClipExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
