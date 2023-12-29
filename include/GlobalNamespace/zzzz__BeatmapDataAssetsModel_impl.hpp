#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataAssetsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.BeatmapLevelDataAssetNameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21f20d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataAssetsModel*>::get(), "BeatmapLevelDataAssetNameForBeatmapLevel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataAssetsModel.AssetBundleNameForBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f2124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataAssetsModel*>::get(), "AssetBundleNameForBeatmapLevel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::BeatmapLevelDataAssetNameForBeatmapLevel(::StringW levelID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataAssetsModel*>::get(), "BeatmapLevelDataAssetNameForBeatmapLevel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, levelID);
}
inline ::StringW GlobalNamespace::BeatmapDataAssetsModel::AssetBundleNameForBeatmapLevel(::StringW levelID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataAssetsModel*>::get(), "AssetBundleNameForBeatmapLevel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, levelID);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataAssetsModel::BeatmapDataAssetsModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
