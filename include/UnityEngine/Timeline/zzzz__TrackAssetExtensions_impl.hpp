#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAssetExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAssetExtensions_def.hpp"
#include "UnityEngine/Timeline/zzzz__GroupTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAssetExtensions.GetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Timeline::GroupTrack> (*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAssetExtensions::GetGroup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x339f220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAssetExtensions*>::get(), "GetGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAssetExtensions.SetGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::Timeline::GroupTrack*)>(
    &::UnityEngine::Timeline::TrackAssetExtensions::SetGroup)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x339f2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAssetExtensions*>::get(), "SetGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::GroupTrack*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Timeline::GroupTrack> UnityEngine::Timeline::TrackAssetExtensions::GetGroup(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAssetExtensions*>::get(), "GetGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::GroupTrack>, false>(nullptr, ___internal_method, asset);
}
inline void UnityEngine::Timeline::TrackAssetExtensions::SetGroup(::UnityEngine::Timeline::TrackAsset* asset, ::UnityEngine::Timeline::GroupTrack* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAssetExtensions*>::get(), "SetGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::GroupTrack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, group);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAssetExtensions::TrackAssetExtensions() {}
