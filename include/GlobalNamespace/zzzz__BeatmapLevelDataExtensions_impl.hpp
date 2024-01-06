#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataExtensions.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IDifficultyBeatmap* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(
        &::GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x2348590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataExtensions.GetDifficultyBeatmapSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(
        &::GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x23489a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataExtensions.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IDifficultyBeatmap* (*)(::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::PreviewDifficultyBeatmap*)>(
        &::GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2348e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataExtensions.GetDifficultyBeatmapSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IDifficultyBeatmapSet* (*)(::GlobalNamespace::IBeatmapLevelData*, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x2348e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                                                                ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(nullptr, ___internal_method, beatmapLevelData, beatmapCharacteristic, difficulty);
}
inline ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                      ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet*, false>(nullptr, ___internal_method, beatmapLevelData, beatmapCharacteristic);
}
inline ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                ::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmap*, false>(nullptr, ___internal_method, beatmapLevelData, previewDifficultyBeatmap);
}
inline ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataExtensions::GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                                                      ::StringW beatmapCharacteristicName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataExtensions*>::get(), "GetDifficultyBeatmapSet", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IDifficultyBeatmapSet*, false>(nullptr, ___internal_method, beatmapLevelData, beatmapCharacteristicName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataExtensions::BeatmapLevelDataExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
