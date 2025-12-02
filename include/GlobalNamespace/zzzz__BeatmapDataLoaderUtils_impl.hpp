#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataLoaderUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoaderUtils_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoaderUtils.GetEnvironmentKeywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::EnvironmentKeywords* (*)(::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion)>(
        &::GlobalNamespace::BeatmapDataLoaderUtils::GetEnvironmentKeywords)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x35eaac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoaderUtils*>::get(), "GetEnvironmentKeywords", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataLoaderUtils.GetEnvironmentLightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IEnvironmentLightGroups* (*)(::GlobalNamespace::IEnvironmentInfo*)>(
    &::GlobalNamespace::BeatmapDataLoaderUtils::GetEnvironmentLightGroups)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x35eac2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoaderUtils*>::get(), "GetEnvironmentLightGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EnvironmentKeywords* GlobalNamespace::BeatmapDataLoaderUtils::GetEnvironmentKeywords(::GlobalNamespace::IEnvironmentInfo* environmentInfo,
                                                                                                               ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoaderUtils*>::get(), "GetEnvironmentKeywords", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentKeywords*, false>(nullptr, ___internal_method, environmentInfo, beatmapLevelDataVersion);
}
inline ::GlobalNamespace::IEnvironmentLightGroups* GlobalNamespace::BeatmapDataLoaderUtils::GetEnvironmentLightGroups(::GlobalNamespace::IEnvironmentInfo* environmentInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataLoaderUtils*>::get(), "GetEnvironmentLightGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEnvironmentLightGroups*, false>(nullptr, ___internal_method, environmentInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataLoaderUtils::BeatmapDataLoaderUtils() {}
