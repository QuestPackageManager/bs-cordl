#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializableHelper_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.GetIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable* (*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::GetIdentifier)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x2340e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "GetIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.HasIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::HasIdentifier)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x2341110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "HasIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToPreviewDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::PreviewDifficultyBeatmap* (*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::BeatmapLevelsModel*,
                                                     ::GlobalNamespace::BeatmapCharacteristicCollection*)>(&::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToPreviewDifficultyBeatmap)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23413a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToPreviewDifficultyBeatmap", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper.ToIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapIdentifierNetSerializable* (*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x23416cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToIdentifier", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatmapIdentifierNetSerializable* GlobalNamespace::BeatmapIdentifierNetSerializableHelper::GetIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "GetIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapIdentifierNetSerializable*, false>(nullptr, ___internal_method, difficultyBeatmap);
}
inline bool GlobalNamespace::BeatmapIdentifierNetSerializableHelper::HasIdentifier(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                                   ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "HasIdentifier", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, difficultyBeatmap, beatmapId);
}
inline ::GlobalNamespace::PreviewDifficultyBeatmap*
GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToPreviewDifficultyBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId,
                                                                                    ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                                    ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToPreviewDifficultyBeatmap", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PreviewDifficultyBeatmap*, false>(nullptr, ___internal_method, beatmapId, beatmapLevelsModel, beatmapCharacteristicCollection);
}
inline ::GlobalNamespace::BeatmapIdentifierNetSerializable*
GlobalNamespace::BeatmapIdentifierNetSerializableHelper::ToIdentifier(::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapIdentifierNetSerializableHelper*>::get(), "ToIdentifier", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapIdentifierNetSerializable*, false>(nullptr, ___internal_method, previewDifficultyBeatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializableHelper::BeatmapIdentifierNetSerializableHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
