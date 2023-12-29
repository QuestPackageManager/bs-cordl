#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataLoaderSO)
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO__AssetBundleLevelInfo;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCache_2;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO____c__DisplayClass6_1;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataLoaderSO;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO____c__DisplayClass6_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoaderSO____c__DisplayClass6_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO__AssetBundleLevelInfo;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataLoaderSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4);
// Type: ::AssetBundleLevelInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4347))
// CS Name: ::BeatmapLevelDataLoaderSO::AssetBundleLevelInfo
struct CORDL_TYPE __BeatmapLevelDataLoaderSO__AssetBundleLevelInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x21f24cc size 0xc virtual false final false
  inline void _ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  // Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoaderSO__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO__AssetBundleLevelInfo();

  /// @brief Field assetBundlePath, offset: 0x0, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field levelDataAssetName, offset: 0x8, size: 0x8, def value: None
  ::StringW levelDataAssetName;

  /// @brief Field previewBeatmapLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, assetBundlePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, levelDataAssetName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, previewBeatmapLevel) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4348))
// CS Name: ::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _difficultyBeatmapSet, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSet, put = __set__difficultyBeatmapSet))::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* _difficultyBeatmapSet;

  __declspec(property(get = get_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept;

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*& __get__difficultyBeatmapSet();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet*> const& __get__difficultyBeatmapSet() const;

  constexpr void __set__difficultyBeatmapSet(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* value);

  /// @brief Method get_beatmapCharacteristic addr 0x21f33e4 size 0x8 virtual true final true
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps addr 0x21f33ec size 0x1c virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();

  static inline ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*
  New_ctor(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
           ::GlobalNamespace::IBeatmapLevel* parentLevel);

  /// @brief Method .ctor addr 0x21f3370 size 0x74 virtual false final false
  inline void _ctor(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
                    ::GlobalNamespace::IBeatmapLevel* parentLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet const&) =
      delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _difficultyBeatmapSet, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* ____difficultyBeatmapSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet, ____difficultyBeatmapSet) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4349))
// CS Name: ::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*
class CORDL_TYPE __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData : public ::System::Object {
public:
  // Declarations
  using DifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;

  /// @brief Field _audioClip, offset 0x10, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _difficultyBeatmapSets, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets, put = __set__difficultyBeatmapSets))::System::Collections::Generic::List_1<
      ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* _difficultyBeatmapSets;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*& __get__difficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*> const&
  __get__difficultyBeatmapSets() const;

  constexpr void
  __set__difficultyBeatmapSets(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* value);

  /// @brief Method get_audioClip addr 0x21f3360 size 0x8 virtual true final true
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets addr 0x21f3368 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData*
  New_ctor(::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection,
           ::GlobalNamespace::IBeatmapLevel* parentLevel);

  /// @brief Method .ctor addr 0x21f319c size 0x1c4 virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection,
                    ::GlobalNamespace::IBeatmapLevel* parentLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData();

public:
  /// @brief Field _audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _difficultyBeatmapSets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* ____difficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, ____audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData, ____difficultyBeatmapSets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetCoverImageAsync>d__37
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 765 }), TypeDefinitionIndex(TypeDefinitionIndex(2675)),
// TypeDefinitionIndex(TypeDefinitionIndex(10213)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 765 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4350)) CS Name: ::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::<GetCoverImageAsync>d__37
struct CORDL_TYPE __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f3410 size 0x268 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f3678 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37(int32_t __1__state,
                                                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                                                           ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview* __4__this,
                                                                                           ::System::Threading::CancellationToken cancellationToken,
                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelFromPreview
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4351))
// CS Name: ::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview*
class CORDL_TYPE __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview : public ::System::Object {
public:
  // Declarations
  using _GetCoverImageAsync_d__37 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37;

  using BeatmapLevelData = ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData;

  /// @brief Field _level, offset 0x10, size 0x8
  __declspec(property(get = __get__level, put = __set__level))::GlobalNamespace::IPreviewBeatmapLevel* _level;

  /// @brief Field _beatmapLevelData, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelData, put = __set__beatmapLevelData))::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData* _beatmapLevelData;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  __declspec(property(get = get_songPreviewAudioClip))::UnityEngine::AudioClip* songPreviewAudioClip;

  __declspec(property(get = get_songPreviewAudioClipPath))::StringW songPreviewAudioClipPath;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
  constexpr operator ::GlobalNamespace::IBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept;

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__level();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__level() const;

  constexpr void __set__level(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData*& __get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData*> const& __get__beatmapLevelData() const;

  constexpr void __set__beatmapLevelData(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData* value);

  /// @brief Method get_levelID addr 0x21f24d8 size 0xa0 virtual true final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName addr 0x21f2578 size 0xa4 virtual true final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName addr 0x21f261c size 0xa4 virtual true final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName addr 0x21f26c0 size 0xa4 virtual true final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName addr 0x21f2764 size 0xa4 virtual true final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute addr 0x21f2808 size 0xa4 virtual true final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset addr 0x21f28ac size 0xa4 virtual true final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_songDuration addr 0x21f2950 size 0xa4 virtual true final true
  inline float_t get_songDuration();

  /// @brief Method get_shuffle addr 0x21f29f4 size 0xa4 virtual true final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod addr 0x21f2a98 size 0xa4 virtual true final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime addr 0x21f2b3c size 0xa4 virtual true final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration addr 0x21f2be0 size 0xa4 virtual true final true
  inline float_t get_previewDuration();

  /// @brief Method get_environmentInfo addr 0x21f2c84 size 0xa4 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo addr 0x21f2d28 size 0xa4 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_previewDifficultyBeatmapSets addr 0x21f2dcc size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_beatmapLevelData addr 0x21f2e70 size 0x8 virtual true final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_songPreviewAudioClip addr 0x21f2e78 size 0xb4 virtual true final true
  inline ::UnityEngine::AudioClip* get_songPreviewAudioClip();

  /// @brief Method get_songPreviewAudioClipPath addr 0x21f2f2c size 0xd4 virtual true final true
  inline ::StringW get_songPreviewAudioClipPath();

  /// @brief Method GetCoverImageAsync addr 0x21f3000 size 0xfc virtual true final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel);

  /// @brief Method .ctor addr 0x21f30fc size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel);

  /// @brief Method LoadData addr 0x21f3124 size 0x78 virtual false final false
  inline void LoadData(::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, ::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview(__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview();

public:
  /// @brief Field _level, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____level;

  /// @brief Field _beatmapLevelData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData* ____beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, ____level) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview, ____beatmapLevelData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelFormAssetBundleAsync>d__4
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 870 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4413)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3389), inst: 870 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4352)) CS Name: ::BeatmapLevelDataLoaderSO::<LoadBeatmapLevelFormAssetBundleAsync>d__4
struct CORDL_TYPE __BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f36d0 size 0x418 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f3ae8 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty:
  // "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoaderSO*", modifiers: "", def_value: None },
  // CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelID_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4(int32_t __1__state,
                                                                                   ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder,
                                                                                   ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapLevelDataLoaderSO* __4__this,
                                                                                   ::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken cancellationToken,
                                                                                   ::StringW _levelID_5__2,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoaderSO* __4__this;

  /// @brief Field assetBundlePath, offset: 0x30, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field levelDataAssetName, offset: 0x38, size: 0x8, def value: None
  ::StringW levelDataAssetName;

  /// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <levelID>5__2, offset: 0x48, size: 0x8, def value: None
  ::StringW _levelID_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, previewBeatmapLevel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, assetBundlePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, levelDataAssetName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, _levelID_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__5
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 861 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 870 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4368)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(4413)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4353)) CS Name: ::BeatmapLevelDataLoaderSO::<LoadBeatmapLevelAsync>d__5
struct CORDL_TYPE __BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f3b40 size 0x38c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f3ecc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelDataLoaderSO*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder,
                                                                    ::GlobalNamespace::BeatmapLevelDataLoaderSO* __4__this, ::StringW levelID,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoaderSO* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, levelID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4354))
// CS Name: ::BeatmapLevelDataLoaderSO::<>c__DisplayClass6_0*
class CORDL_TYPE __BeatmapLevelDataLoaderSO____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundleCreateRequest, offset 0x10, size 0x8
  __declspec(property(get = __get_assetBundleCreateRequest, put = __set_assetBundleCreateRequest))::UnityEngine::AssetBundleCreateRequest* assetBundleCreateRequest;

  /// @brief Field levelDataAssetName, offset 0x18, size 0x8
  __declspec(property(get = __get_levelDataAssetName, put = __set_levelDataAssetName))::StringW levelDataAssetName;

  /// @brief Field taskSource, offset 0x20, size 0x8
  __declspec(property(get = __get_taskSource, put = __set_taskSource))::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>* taskSource;

  constexpr ::UnityEngine::AssetBundleCreateRequest*& __get_assetBundleCreateRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleCreateRequest*> const& __get_assetBundleCreateRequest() const;

  constexpr void __set_assetBundleCreateRequest(::UnityEngine::AssetBundleCreateRequest* value);

  constexpr ::StringW& __get_levelDataAssetName();

  constexpr ::StringW const& __get_levelDataAssetName() const;

  constexpr void __set_levelDataAssetName(::StringW value);

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*& __get_taskSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>*> const& __get_taskSource() const;

  constexpr void __set_taskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>* value);

  static inline ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x21f3f24 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadBeatmapLevelDataAsync>b__0 addr 0x21f3f2c size 0x1b8 virtual false final false
  inline void _LoadBeatmapLevelDataAsync_b__0(::UnityEngine::AsyncOperation* asyncOperation);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoaderSO____c__DisplayClass6_0(__BeatmapLevelDataLoaderSO____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoaderSO____c__DisplayClass6_0(__BeatmapLevelDataLoaderSO____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO____c__DisplayClass6_0();

public:
  /// @brief Field assetBundleCreateRequest, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AssetBundleCreateRequest* ___assetBundleCreateRequest;

  /// @brief Field levelDataAssetName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelDataAssetName;

  /// @brief Field taskSource, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::BeatmapLevelDataSO*>* ___taskSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, ___assetBundleCreateRequest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, ___levelDataAssetName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0, ___taskSource) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass6_1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4355))
// CS Name: ::BeatmapLevelDataLoaderSO::<>c__DisplayClass6_1*
class CORDL_TYPE __BeatmapLevelDataLoaderSO____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundle, offset 0x10, size 0x8
  __declspec(property(get = __get_assetBundle, put = __set_assetBundle))::UnityEngine::AssetBundle* assetBundle;

  /// @brief Field assetBundleRequest, offset 0x18, size 0x8
  __declspec(property(get = __get_assetBundleRequest, put = __set_assetBundleRequest))::UnityEngine::AssetBundleRequest* assetBundleRequest;

  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0* CS$__8__locals1;

  constexpr ::UnityEngine::AssetBundle*& __get_assetBundle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& __get_assetBundle() const;

  constexpr void __set_assetBundle(::UnityEngine::AssetBundle* value);

  constexpr ::UnityEngine::AssetBundleRequest*& __get_assetBundleRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __get_assetBundleRequest() const;

  constexpr void __set_assetBundleRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0* value);

  static inline ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1* New_ctor();

  /// @brief Method .ctor addr 0x21f40e4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadBeatmapLevelDataAsync>b__1 addr 0x21f40ec size 0x134 virtual false final false
  inline void _LoadBeatmapLevelDataAsync_b__1(::UnityEngine::AsyncOperation* asyncOperation2);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoaderSO____c__DisplayClass6_1(__BeatmapLevelDataLoaderSO____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoaderSO____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoaderSO____c__DisplayClass6_1(__BeatmapLevelDataLoaderSO____c__DisplayClass6_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO____c__DisplayClass6_1();

public:
  /// @brief Field assetBundle, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AssetBundle* ___assetBundle;

  /// @brief Field assetBundleRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AssetBundleRequest* ___assetBundleRequest;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1, ___assetBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1, ___assetBundleRequest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelDataAsync>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(4368)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 861
// }), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 861 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4356)) CS
// Name: ::BeatmapLevelDataLoaderSO::<LoadBeatmapLevelDataAsync>d__6
struct CORDL_TYPE __BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21f4220 size 0x300 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21f4520 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6(int32_t __1__state,
                                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*> __t__builder,
                                                                        ::StringW levelDataAssetName, ::StringW assetBundlePath,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*> __t__builder;

  /// @brief Field levelDataAssetName, offset: 0x20, size: 0x8, def value: None
  ::StringW levelDataAssetName;

  /// @brief Field assetBundlePath, offset: 0x28, size: 0x8, def value: None
  ::StringW assetBundlePath;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, levelDataAssetName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, assetBundlePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataLoaderSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4357))
// CS Name: ::BeatmapLevelDataLoaderSO*
class CORDL_TYPE BeatmapLevelDataLoaderSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _LoadBeatmapLevelDataAsync_d__6 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6;

  using __c__DisplayClass6_1 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1;

  using __c__DisplayClass6_0 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0;

  using _LoadBeatmapLevelAsync_d__5 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5;

  using _LoadBeatmapLevelFormAssetBundleAsync_d__4 = ::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4;

  using BeatmapLevelFromPreview = ::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview;

  using AssetBundleLevelInfo = ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo;

  /// @brief Field _allBeatmapCharacteristicCollection, offset 0x18, size 0x8
  __declspec(property(get = __get__allBeatmapCharacteristicCollection,
                      put = __set__allBeatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollectionSO* _allBeatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsAsyncCache, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapLevelsAsyncCache,
                      put = __set__beatmapLevelsAsyncCache))::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* _beatmapLevelsAsyncCache;

  /// @brief Field _bundleLevelInfos, offset 0x28, size 0x8
  __declspec(property(get = __get__bundleLevelInfos,
                      put = __set__bundleLevelInfos))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>* _bundleLevelInfos;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& __get__allBeatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> const& __get__allBeatmapCharacteristicCollection() const;

  constexpr void __set__allBeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO* value);

  constexpr ::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*& __get__beatmapLevelsAsyncCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*> const& __get__beatmapLevelsAsyncCache() const;

  constexpr void __set__beatmapLevelsAsyncCache(::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>*& __get__bundleLevelInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>*> const&
  __get__bundleLevelInfos() const;

  constexpr void __set__bundleLevelInfos(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>* value);

  /// @brief Method LoadBeatmapLevelFormAssetBundleAsync addr 0x21f2138 size 0x120 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelFormAssetBundleAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                     ::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadBeatmapLevelAsync addr 0x21f2258 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelAsync(::StringW levelID);

  /// @brief Method LoadBeatmapLevelDataAsync addr 0x21f2354 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO*>* LoadBeatmapLevelDataAsync(::StringW assetBundlePath, ::StringW levelDataAssetName);

  static inline ::GlobalNamespace::BeatmapLevelDataLoaderSO* New_ctor();

  /// @brief Method .ctor addr 0x21f2450 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoaderSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataLoaderSO(BeatmapLevelDataLoaderSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoaderSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataLoaderSO(BeatmapLevelDataLoaderSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoaderSO();

public:
  /// @brief Field _allBeatmapCharacteristicCollection, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollectionSO* ____allBeatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelsAsyncCache, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* ____beatmapLevelsAsyncCache;

  /// @brief Field _bundleLevelInfos, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo>* ____bundleLevelInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataLoaderSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoaderSO, ____allBeatmapCharacteristicCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoaderSO, ____beatmapLevelsAsyncCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataLoaderSO, ____bundleLevelInfos) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoaderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoaderSO*, "", "BeatmapLevelDataLoaderSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*, "",
                       "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_0*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO____c__DisplayClass6_1*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO__AssetBundleLevelInfo, "", "BeatmapLevelDataLoaderSO/AssetBundleLevelInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO__BeatmapLevelFromPreview___GetCoverImageAsync_d__37, "",
                       "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/<GetCoverImageAsync>d__37");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelAsync_d__5, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelDataAsync_d__6, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelDataAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoaderSO___LoadBeatmapLevelFormAssetBundleAsync_d__4, "", "BeatmapLevelDataLoaderSO/<LoadBeatmapLevelFormAssetBundleAsync>d__4");
