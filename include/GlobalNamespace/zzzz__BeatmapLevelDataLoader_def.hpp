#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataLoader)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader____c__DisplayClass8_1;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader__AssetBundleLevelInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCache_2;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class __BeatmapLevelDataSO__DifficultyBeatmapSet;
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
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataLoader;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataLoader____c__DisplayClass8_1;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader__AssetBundleLevelInfo;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataLoader);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5);
// Type: ::AssetBundleLevelInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4328))
// CS Name: ::BeatmapLevelDataLoader::AssetBundleLevelInfo
struct CORDL_TYPE __BeatmapLevelDataLoader__AssetBundleLevelInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x233e330 size 0xc virtual false final false
  inline void _ctor(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  // Ctor Parameters [CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "previewBeatmapLevel", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader__AssetBundleLevelInfo(::StringW assetBundlePath, ::StringW levelDataAssetName, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader__AssetBundleLevelInfo();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4329))
// CS Name: ::BeatmapLevelDataLoader::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*
class CORDL_TYPE __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet : public ::System::Object {
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

  /// @brief Method get_beatmapCharacteristic addr 0x233f390 size 0x8 virtual true final true
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps addr 0x233f398 size 0x1c virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();

  static inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*
  New_ctor(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
           ::GlobalNamespace::IBeatmapLevel* parentLevel);

  /// @brief Method .ctor addr 0x233f31c size 0x74 virtual false final false
  inline void _ctor(::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* difficultyBeatmapSet, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristicSerializedName,
                    ::GlobalNamespace::IBeatmapLevel* parentLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet(__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _difficultyBeatmapSet, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataSO__DifficultyBeatmapSet* ____difficultyBeatmapSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4330))
// CS Name: ::BeatmapLevelDataLoader::BeatmapLevelFromPreview::BeatmapLevelData*
class CORDL_TYPE __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData : public ::System::Object {
public:
  // Declarations
  using DifficultyBeatmapSet = ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet;

  /// @brief Field _audioClip, offset 0x10, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _difficultyBeatmapSets, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets, put = __set__difficultyBeatmapSets))::System::Collections::Generic::List_1<
      ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* _difficultyBeatmapSets;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*& __get__difficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>*> const&
  __get__difficultyBeatmapSets() const;

  constexpr void
  __set__difficultyBeatmapSets(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* value);

  /// @brief Method get_audioClip addr 0x233f30c size 0x8 virtual true final true
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets addr 0x233f314 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*
  New_ctor(::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::IBeatmapLevel* parentLevel);

  /// @brief Method .ctor addr 0x233f148 size 0x1c4 virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection,
                    ::GlobalNamespace::IBeatmapLevel* parentLevel);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData(__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData(__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData();

public:
  /// @brief Field _audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _difficultyBeatmapSets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*>* ____difficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetCoverImageAsync>d__41
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 777 }), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation {
// tdi: TypeDefinitionIndex(3394), inst: 777 }), TypeDefinitionIndex(TypeDefinitionIndex(10291)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4331)) CS Name: ::BeatmapLevelDataLoader::BeatmapLevelFromPreview::<GetCoverImageAsync>d__41
struct CORDL_TYPE __BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x233f3bc size 0x268 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x233f624 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41(int32_t __1__state,
                                                                                         ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                                                         ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview* __4__this,
                                                                                         ::System::Threading::CancellationToken cancellationToken,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelFromPreview
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4332))
// CS Name: ::BeatmapLevelDataLoader::BeatmapLevelFromPreview*
class CORDL_TYPE __BeatmapLevelDataLoader__BeatmapLevelFromPreview : public ::System::Object {
public:
  // Declarations
  using _GetCoverImageAsync_d__41 = ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41;

  using BeatmapLevelData = ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData;

  /// @brief Field _level, offset 0x10, size 0x8
  __declspec(property(get = __get__level, put = __set__level))::GlobalNamespace::IPreviewBeatmapLevel* _level;

  /// @brief Field _beatmapLevelData, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelData, put = __set__beatmapLevelData))::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData* _beatmapLevelData;

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

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

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

  constexpr ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*& __get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*> const& __get__beatmapLevelData() const;

  constexpr void __set__beatmapLevelData(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData* value);

  /// @brief Method get_levelID addr 0x233e33c size 0xa0 virtual true final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName addr 0x233e3dc size 0xa4 virtual true final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName addr 0x233e480 size 0xa4 virtual true final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName addr 0x233e524 size 0xa4 virtual true final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName addr 0x233e5c8 size 0xa4 virtual true final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute addr 0x233e66c size 0xa4 virtual true final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset addr 0x233e710 size 0xa4 virtual true final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_songDuration addr 0x233e7b4 size 0xa4 virtual true final true
  inline float_t get_songDuration();

  /// @brief Method get_shuffle addr 0x233e858 size 0xa4 virtual true final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod addr 0x233e8fc size 0xa4 virtual true final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime addr 0x233e9a0 size 0xa4 virtual true final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration addr 0x233ea44 size 0xa4 virtual true final true
  inline float_t get_previewDuration();

  /// @brief Method get_environmentInfo addr 0x233eae8 size 0xa4 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo addr 0x233eb8c size 0xa4 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos addr 0x233ec30 size 0xa4 virtual true final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_previewDifficultyBeatmapSets addr 0x233ecd4 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_beatmapLevelData addr 0x233ed78 size 0x8 virtual true final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_contentRating addr 0x233ed80 size 0xa4 virtual true final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_songPreviewAudioClip addr 0x233ee24 size 0xb4 virtual true final true
  inline ::UnityEngine::AudioClip* get_songPreviewAudioClip();

  /// @brief Method get_songPreviewAudioClipPath addr 0x233eed8 size 0xd4 virtual true final true
  inline ::StringW get_songPreviewAudioClipPath();

  /// @brief Method GetCoverImageAsync addr 0x233efac size 0xfc virtual true final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel);

  /// @brief Method .ctor addr 0x233f0a8 size 0x28 virtual false final false
  inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewLevel);

  /// @brief Method LoadData addr 0x233f0d0 size 0x78 virtual false final false
  inline void LoadData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, ::GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview(__BeatmapLevelDataLoader__BeatmapLevelFromPreview&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader__BeatmapLevelFromPreview", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoader__BeatmapLevelFromPreview(__BeatmapLevelDataLoader__BeatmapLevelFromPreview const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader__BeatmapLevelFromPreview();

public:
  /// @brief Field _level, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____level;

  /// @brief Field _beatmapLevelData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData* ____beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelFormAssetBundleAsync>d__5
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4391)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 887 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(2677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 887 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4333)) CS Name: ::BeatmapLevelDataLoader::<LoadBeatmapLevelFormAssetBundleAsync>d__5
struct CORDL_TYPE __BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x233f67c size 0x36c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x233f9e8 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty:
  // "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelDataLoader*", modifiers: "", def_value: None },
  // CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_levelID_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5(int32_t __1__state,
                                                                                 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder,
                                                                                 ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapLevelDataLoader* __4__this,
                                                                                 ::StringW assetBundlePath, ::StringW levelDataAssetName, ::System::Threading::CancellationToken cancellationToken,
                                                                                 ::StringW _levelID_5__2,
                                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevel*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder;

  /// @brief Field previewBeatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoader* __4__this;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelAsync>d__7
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(4391)), TypeDefinitionIndex(TypeDefinitionIndex(4349)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 877 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(3402), inst: 887 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(4334)) CS Name: ::BeatmapLevelDataLoader::<LoadBeatmapLevelAsync>d__7
struct CORDL_TYPE __BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x233fa40 size 0x38c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x233fdcc size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::BeatmapLevelDataLoader*", modifiers: "", def_value: None }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder,
                                                                  ::GlobalNamespace::BeatmapLevelDataLoader* __4__this, ::StringW levelID,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::IBeatmapLevel*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataLoader* __4__this;

  /// @brief Field levelID, offset: 0x28, size: 0x8, def value: None
  ::StringW levelID;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4335))
// CS Name: ::BeatmapLevelDataLoader::<>c__DisplayClass8_0*
class CORDL_TYPE __BeatmapLevelDataLoader____c__DisplayClass8_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x233fe24 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadBeatmapLevelDataAsync>b__0 addr 0x233fe2c size 0x1b8 virtual false final false
  inline void _LoadBeatmapLevelDataAsync_b__0(::UnityEngine::AsyncOperation* asyncOperation);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoader____c__DisplayClass8_0(__BeatmapLevelDataLoader____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoader____c__DisplayClass8_0(__BeatmapLevelDataLoader____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader____c__DisplayClass8_0();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4336))
// CS Name: ::BeatmapLevelDataLoader::<>c__DisplayClass8_1*
class CORDL_TYPE __BeatmapLevelDataLoader____c__DisplayClass8_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assetBundle, offset 0x10, size 0x8
  __declspec(property(get = __get_assetBundle, put = __set_assetBundle))::UnityEngine::AssetBundle* assetBundle;

  /// @brief Field assetBundleRequest, offset 0x18, size 0x8
  __declspec(property(get = __get_assetBundleRequest, put = __set_assetBundleRequest))::UnityEngine::AssetBundleRequest* assetBundleRequest;

  /// @brief Field CS$<>8__locals1, offset 0x20, size 0x8
  __declspec(property(get = __get_CS$__8__locals1, put = __set_CS$__8__locals1))::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* CS$__8__locals1;

  constexpr ::UnityEngine::AssetBundle*& __get_assetBundle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundle*> const& __get_assetBundle() const;

  constexpr void __set_assetBundle(::UnityEngine::AssetBundle* value);

  constexpr ::UnityEngine::AssetBundleRequest*& __get_assetBundleRequest();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AssetBundleRequest*> const& __get_assetBundleRequest() const;

  constexpr void __set_assetBundleRequest(::UnityEngine::AssetBundleRequest* value);

  constexpr ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*& __get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*> const& __get_CS$__8__locals1() const;

  constexpr void __set_CS$__8__locals1(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* value);

  static inline ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1* New_ctor();

  /// @brief Method .ctor addr 0x233ffe4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadBeatmapLevelDataAsync>b__1 addr 0x233ffec size 0x134 virtual false final false
  inline void _LoadBeatmapLevelDataAsync_b__1(::UnityEngine::AsyncOperation* asyncOperation2);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader____c__DisplayClass8_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataLoader____c__DisplayClass8_1(__BeatmapLevelDataLoader____c__DisplayClass8_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataLoader____c__DisplayClass8_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataLoader____c__DisplayClass8_1(__BeatmapLevelDataLoader____c__DisplayClass8_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader____c__DisplayClass8_1();

public:
  /// @brief Field assetBundle, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AssetBundle* ___assetBundle;

  /// @brief Field assetBundleRequest, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AssetBundleRequest* ___assetBundleRequest;

  /// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadBeatmapLevelDataAsync>d__8
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 877 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// TypeDefinitionIndex(TypeDefinitionIndex(4349)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 877 })} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(4337)) CS Name: ::BeatmapLevelDataLoader::<LoadBeatmapLevelDataAsync>d__8
struct CORDL_TYPE __BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2340120 size 0x300 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2340420 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }, CppParam { name: "levelDataAssetName", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8(int32_t __1__state,
                                                                      ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::BeatmapLevelDataSO*> __t__builder,
                                                                      ::StringW levelDataAssetName, ::StringW assetBundlePath,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataSO*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4338))
// CS Name: ::BeatmapLevelDataLoader*
class CORDL_TYPE BeatmapLevelDataLoader : public ::System::Object {
public:
  // Declarations
  using _LoadBeatmapLevelDataAsync_d__8 = ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8;

  using __c__DisplayClass8_1 = ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0;

  using _LoadBeatmapLevelAsync_d__7 = ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7;

  using _LoadBeatmapLevelFormAssetBundleAsync_d__5 = ::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5;

  using BeatmapLevelFromPreview = ::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview;

  using AssetBundleLevelInfo = ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo;

  /// @brief Field _beatmapLevelsAsyncCache, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelsAsyncCache,
                      put = __set__beatmapLevelsAsyncCache))::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* _beatmapLevelsAsyncCache;

  /// @brief Field _bundleLevelInfos, offset 0x18, size 0x8
  __declspec(property(get = __get__bundleLevelInfos,
                      put = __set__bundleLevelInfos))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>* _bundleLevelInfos;

  /// @brief Field _allBeatmapCharacteristicCollection, offset 0x20, size 0x8
  __declspec(property(get = __get__allBeatmapCharacteristicCollection,
                      put = __set__allBeatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _allBeatmapCharacteristicCollection;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*& __get__beatmapLevelsAsyncCache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>*> const& __get__beatmapLevelsAsyncCache() const;

  constexpr void __set__beatmapLevelsAsyncCache(::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>*& __get__bundleLevelInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>*> const&
  __get__bundleLevelInfos() const;

  constexpr void __set__bundleLevelInfos(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __get__allBeatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __get__allBeatmapCharacteristicCollection() const;

  constexpr void __set__allBeatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  static inline ::GlobalNamespace::BeatmapLevelDataLoader* New_ctor(::GlobalNamespace::BeatmapCharacteristicCollection* allBeatmapCharacteristicCollection);

  /// @brief Method .ctor addr 0x233deec size 0x120 virtual false final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicCollection* allBeatmapCharacteristicCollection);

  /// @brief Method LoadBeatmapLevelFormAssetBundleAsync addr 0x233e00c size 0x120 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelFormAssetBundleAsync(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                                                                     ::StringW assetBundlePath, ::StringW levelDataAssetName,
                                                                                                                     ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Dispose addr 0x233e12c size 0xc virtual true final true
  inline void Dispose();

  /// @brief Method LoadBeatmapLevelAsync addr 0x233e138 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapLevel*>* LoadBeatmapLevelAsync(::StringW levelID);

  /// @brief Method LoadBeatmapLevelDataAsync addr 0x233e234 size 0xfc virtual false final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelDataSO*>* LoadBeatmapLevelDataAsync(::StringW assetBundlePath, ::StringW levelDataAssetName);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataLoader(BeatmapLevelDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataLoader(BeatmapLevelDataLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataLoader();

public:
  /// @brief Field _beatmapLevelsAsyncCache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCache_2<::StringW, ::GlobalNamespace::IBeatmapLevel*>* ____beatmapLevelsAsyncCache;

  /// @brief Field _bundleLevelInfos, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo>* ____bundleLevelInfos;

  /// @brief Field _allBeatmapCharacteristicCollection, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____allBeatmapCharacteristicCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataLoader, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoader*, "", "BeatmapLevelDataLoader");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview*, "", "BeatmapLevelDataLoader/BeatmapLevelFromPreview");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData*, "", "BeatmapLevelDataLoader/BeatmapLevelFromPreview/BeatmapLevelData");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview__BeatmapLevelData__DifficultyBeatmapSet*, "",
                       "BeatmapLevelDataLoader/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_0*, "", "BeatmapLevelDataLoader/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader____c__DisplayClass8_1*, "", "BeatmapLevelDataLoader/<>c__DisplayClass8_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader__AssetBundleLevelInfo, "", "BeatmapLevelDataLoader/AssetBundleLevelInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader__BeatmapLevelFromPreview___GetCoverImageAsync_d__41, "", "BeatmapLevelDataLoader/BeatmapLevelFromPreview/<GetCoverImageAsync>d__41");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelAsync_d__7, "", "BeatmapLevelDataLoader/<LoadBeatmapLevelAsync>d__7");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelDataAsync_d__8, "", "BeatmapLevelDataLoader/<LoadBeatmapLevelDataAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataLoader___LoadBeatmapLevelFormAssetBundleAsync_d__5, "", "BeatmapLevelDataLoader/<LoadBeatmapLevelFormAssetBundleAsync>d__5");
