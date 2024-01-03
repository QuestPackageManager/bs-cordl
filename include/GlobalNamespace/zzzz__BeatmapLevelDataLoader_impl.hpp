#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo::*)(
    ::StringW, ::StringW, ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x233e330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo::_ctor(::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                   ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assetBundlePath, levelDataAssetName, previewBeatmapLevel);
}
// Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo::__BeatmapLevelDataLoader__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                                                            ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) noexcept {
  this->assetBundlePath = assetBundlePath;
  this->levelDataAssetName = levelDataAssetName;
  this->previewBeatmapLevel = previewBeatmapLevel;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo::__BeatmapLevelDataLoader__AssetBundleLevelInfo() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(
        &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(),
        "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* (
    ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x233f398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(),
        "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::*)(
        ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::IBeatmapLevel*)>(
        &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x233f31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr ::GlobalNamespace::IDifficultyBeatmapSet*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::i___GlobalNamespace__IDifficultyBeatmapSet() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__difficultyBeatmapSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSet;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*> const&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__get__difficultyBeatmapSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSet;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::__set__difficultyBeatmapSet(
    ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(),
      "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(),
      "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::New_ctor(
    ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
    ::GlobalNamespace::IBeatmapLevel* parentLevel) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>(
      difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel));
}
inline void
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::_ctor(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet,
                                                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
                                                                                                                  ::GlobalNamespace::IBeatmapLevel* parentLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmapSet, beatmapCharacteristicSerializedName, parentLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet::
    __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData.get_audioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(
        &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(),
                                                 "get_audioClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* (
    ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233f314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(),
                                                 "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::*)(
    ::GlobalNamespace::BeatmapLevelDataSO*, ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::IBeatmapLevel*)>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x233f148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::operator ::GlobalNamespace::IBeatmapLevelData*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::i___GlobalNamespace__IBeatmapLevelData() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__set__audioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*> const&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__set__difficultyBeatmapSets(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmapSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AudioClip* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_audioClip() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(),
                                               "get_audioClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::get_difficultyBeatmapSets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(),
                                               "get_difficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::New_ctor(
    ::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::IBeatmapLevel* parentLevel) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>(beatmapLevelData, beatmapCharacteristicCollection, parentLevel));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::_ctor(::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData,
                                                                                                        ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                                        ::GlobalNamespace::IBeatmapLevel* parentLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelData, beatmapCharacteristicCollection, parentLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x233f3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x233f624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
    ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_levelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x233e33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_levelID",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_songName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songSubName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songSubName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songSubName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelAuthorName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songTimeOffset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_shuffle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shuffle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_shuffle",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shufflePeriod)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewStartTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233e9a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233ea44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_environmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233eae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_allDirectionsEnvironmentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233eb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_environmentInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> (
    ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfos)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233ec30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_environmentInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_previewDifficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (
    ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(&::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233ecd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_beatmapLevelData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ed78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_beatmapLevelData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_contentRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_contentRating)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x233ed80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_contentRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songPreviewAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x233ee24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songPreviewAudioClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.get_songPreviewAudioClipPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClipPath)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x233eed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                                 "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.GetCoverImageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(::System::Threading::CancellationToken)>(
        &::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::GetCoverImageAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x233efac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "GetCoverImageAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(
    ::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x233f0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview.LoadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollection*, ::GlobalNamespace::BeatmapLevelDataSO*)>(&::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::LoadData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x233f0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "LoadData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IBeatmapLevel*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevel"
constexpr ::GlobalNamespace::IBeatmapLevel* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::i___GlobalNamespace__IBeatmapLevel() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept {
  return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::i___GlobalNamespace__IPreviewBeatmapLevel() noexcept {
  return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
constexpr GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
constexpr ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::i___GlobalNamespace__IFilePathSongPreviewAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____level;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__set__level(::GlobalNamespace::IPreviewBeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____level)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*& GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__beatmapLevelData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*> const&
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__get__beatmapLevelData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData;
}
constexpr void
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__set__beatmapLevelData(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelID() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_levelID",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_songName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songSubName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_songSubName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songAuthorName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_songAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_levelAuthorName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_levelAuthorName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatsPerMinute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_beatsPerMinute", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songTimeOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_songTimeOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_songDuration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shuffle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "get_shuffle",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_shufflePeriod() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_shufflePeriod", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewStartTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_previewStartTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_previewDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_environmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_allDirectionsEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_environmentInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_environmentInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_previewDifficultyBeatmapSets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_beatmapLevelData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_beatmapLevelData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_contentRating() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_contentRating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag, false>(this, ___internal_method);
}
inline ::UnityEngine::AudioClip* GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClip() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_songPreviewAudioClip", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioClip*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::get_songPreviewAudioClipPath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(),
                                               "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "GetCoverImageAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*
GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>(previewLevel));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previewLevel);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::LoadData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                                                                                         ::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*>::get(), "LoadData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristicCollection, beatmapLevelData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview::__BeatmapLevelDataLoader__BeatmapLevelFromPreview() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x233f67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x233f9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "previewBeatmapLevel", ty:
// "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_levelID_5__2", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
    ::GlobalNamespace::BeatmapLevelDataLoader* __4__this, ::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken cancellationToken, ::StringW _levelID_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->previewBeatmapLevel = previewBeatmapLevel;
  this->__4__this = __4__this;
  this->assetBundlePath = assetBundlePath;
  this->levelDataAssetName = levelDataAssetName;
  this->cancellationToken = cancellationToken;
  this->_levelID_5__2 = _levelID_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x233fa40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x233fdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelDataLoader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder, ::GlobalNamespace::BeatmapLevelDataLoader* __4__this,
    ::StringW levelID, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233fe24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0._LoadBeatmapLevelDataAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::_LoadBeatmapLevelDataAsync_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x233fe2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*>::get(), "<LoadBeatmapLevelDataAsync>b__0",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AssetBundleCreateRequest*& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_assetBundleCreateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_assetBundleCreateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleCreateRequest;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundleCreateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_levelDataAssetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetName;
}
constexpr ::StringW const& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_levelDataAssetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDataAssetName;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_levelDataAssetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDataAssetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_taskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*> const&
GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__get_taskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskSource;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*>());
}
inline void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::_LoadBeatmapLevelDataAsync_b__0(::UnityEngine::AsyncOperation* asyncOperation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*>::get(), "<LoadBeatmapLevelDataAsync>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOperation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0::__BeatmapLevelDataLoader____c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x233ffe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1._LoadBeatmapLevelDataAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::*)(::UnityEngine::AsyncOperation*)>(
    &::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::_LoadBeatmapLevelDataAsync_b__1)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x233ffec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*>::get(), "<LoadBeatmapLevelDataAsync>b__1",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AssetBundle*& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundle;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_assetBundle(::UnityEngine::AssetBundle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AssetBundleRequest*& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundleRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleRequest;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_assetBundleRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assetBundleRequest;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_assetBundleRequest(::UnityEngine::AssetBundleRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assetBundleRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*& GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*> const&
GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__set_CS$__8__locals1(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1* GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*>());
}
inline void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::_LoadBeatmapLevelDataAsync_b__1(::UnityEngine::AsyncOperation* asyncOperation2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*>::get(), "<LoadBeatmapLevelDataAsync>b__1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOperation2);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1::__BeatmapLevelDataLoader____c__DisplayClass8_1() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::*)()>(
    &::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2340120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2340420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelDataAssetName", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*> __t__builder, ::StringW levelDataAssetName, ::StringW assetBundlePath,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->levelDataAssetName = levelDataAssetName;
  this->assetBundlePath = assetBundlePath;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)(::GlobalNamespace::BeatmapCharacteristicCollection*)>(
    &::GlobalNamespace::BeatmapLevelDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x233deec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelFormAssetBundleAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* (
    ::GlobalNamespace::BeatmapLevelDataLoader::*)(::GlobalNamespace::IPreviewBeatmapLevel*, ::StringW, ::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelFormAssetBundleAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x233e00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelFormAssetBundleAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelDataLoader::*)()>(&::GlobalNamespace::BeatmapLevelDataLoader::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x233e12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* (
    ::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x233e138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelAsync",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataLoader.LoadBeatmapLevelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO*>* (
    ::GlobalNamespace::BeatmapLevelDataLoader::*)(::StringW, ::StringW)>(&::GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x233e234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelDataAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelDataLoader::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelDataLoader::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*& GlobalNamespace::BeatmapLevelDataLoader::__get__beatmapLevelsAsyncCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsAsyncCache;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*> const&
GlobalNamespace::BeatmapLevelDataLoader::__get__beatmapLevelsAsyncCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsAsyncCache;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoader::__set__beatmapLevelsAsyncCache(::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsAsyncCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>*&
GlobalNamespace::BeatmapLevelDataLoader::__get__bundleLevelInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleLevelInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>*> const&
GlobalNamespace::BeatmapLevelDataLoader::__get__bundleLevelInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bundleLevelInfos;
}
constexpr void
GlobalNamespace::BeatmapLevelDataLoader::__set__bundleLevelInfos(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bundleLevelInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::BeatmapLevelDataLoader::__get__allBeatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapCharacteristicCollection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& GlobalNamespace::BeatmapLevelDataLoader::__get__allBeatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allBeatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::BeatmapLevelDataLoader::__set__allBeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allBeatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapLevelDataLoader* GlobalNamespace::BeatmapLevelDataLoader::New_ctor(::GlobalNamespace::BeatmapCharacteristicCollection* allBeatmapCharacteristicCollection) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelDataLoader*>(allBeatmapCharacteristicCollection));
}
inline void GlobalNamespace::BeatmapLevelDataLoader::_ctor(::GlobalNamespace::BeatmapCharacteristicCollection* allBeatmapCharacteristicCollection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allBeatmapCharacteristicCollection);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>*
GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelFormAssetBundleAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                              ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelFormAssetBundleAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>*, false>(this, ___internal_method, previewBeatmapLevel, assetBundlePath,
                                                                                                                            levelDataAssetName, cancellationToken);
}
inline void GlobalNamespace::BeatmapLevelDataLoader::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelAsync(::StringW levelID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelAsync",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>*, false>(this, ___internal_method, levelID);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO*>* GlobalNamespace::BeatmapLevelDataLoader::LoadBeatmapLevelDataAsync(::StringW assetBundlePath,
                                                                                                                                                      ::StringW levelDataAssetName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelDataLoader*>::get(), "LoadBeatmapLevelDataAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO*>*, false>(this, ___internal_method, assetBundlePath, levelDataAssetName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataLoader::BeatmapLevelDataLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
