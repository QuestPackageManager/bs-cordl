#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineUtils_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelineUtils.FindTrackAssetByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (*)(::UnityEngine::Timeline::TimelineAsset*, ::StringW)>(
    &::GlobalNamespace::TimelineUtils::FindTrackAssetByName)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x3ac0fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineUtils*>::get(), "FindTrackAssetByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> GlobalNamespace::TimelineUtils::FindTrackAssetByName(::UnityEngine::Timeline::TimelineAsset* timeline, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineUtils*>::get(), "FindTrackAssetByName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>, false>(nullptr, ___internal_method, timeline, name);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineUtils::TimelineUtils() {}
