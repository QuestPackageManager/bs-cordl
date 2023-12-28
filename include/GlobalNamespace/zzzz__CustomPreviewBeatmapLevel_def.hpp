#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
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
CORDL_MODULE_EXPORT(CustomPreviewBeatmapLevel)
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
namespace GlobalNamespace {
struct __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
class CustomPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomPreviewBeatmapLevel);
MARK_VAL_T(::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69);
// Type: ::<GetCoverImageAsync>d__69
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(2677)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 777 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 777 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10291))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4384)) CS Name: ::CustomPreviewBeatmapLevel::<GetCoverImageAsync>d__69
struct CORDL_TYPE __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x23477f8 size 0x38c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2347b84 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::CustomPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
  constexpr __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                                   ::GlobalNamespace::CustomPreviewBeatmapLevel* __4__this, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CustomPreviewBeatmapLevel* __4__this;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CustomPreviewBeatmapLevel
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4385))
// CS Name: ::CustomPreviewBeatmapLevel*
class CORDL_TYPE CustomPreviewBeatmapLevel : public ::System::Object {
public:
  // Declarations
  using _GetCoverImageAsync_d__69 = ::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69;

  /// @brief Field <spriteAsyncLoader>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__spriteAsyncLoader_k__BackingField, put = __set__spriteAsyncLoader_k__BackingField))::GlobalNamespace::ISpriteAsyncLoader* _spriteAsyncLoader_k__BackingField;

  /// @brief Field <standardLevelInfoSaveData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__standardLevelInfoSaveData_k__BackingField,
                      put = __set__standardLevelInfoSaveData_k__BackingField))::GlobalNamespace::StandardLevelInfoSaveData* _standardLevelInfoSaveData_k__BackingField;

  /// @brief Field <customLevelPath>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__customLevelPath_k__BackingField, put = __set__customLevelPath_k__BackingField))::StringW _customLevelPath_k__BackingField;

  /// @brief Field <levelID>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__levelID_k__BackingField, put = __set__levelID_k__BackingField))::StringW _levelID_k__BackingField;

  /// @brief Field <songName>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__songName_k__BackingField, put = __set__songName_k__BackingField))::StringW _songName_k__BackingField;

  /// @brief Field <songSubName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__songSubName_k__BackingField, put = __set__songSubName_k__BackingField))::StringW _songSubName_k__BackingField;

  /// @brief Field <songAuthorName>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__songAuthorName_k__BackingField, put = __set__songAuthorName_k__BackingField))::StringW _songAuthorName_k__BackingField;

  /// @brief Field <levelAuthorName>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__levelAuthorName_k__BackingField, put = __set__levelAuthorName_k__BackingField))::StringW _levelAuthorName_k__BackingField;

  /// @brief Field <beatsPerMinute>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __get__beatsPerMinute_k__BackingField, put = __set__beatsPerMinute_k__BackingField)) float_t _beatsPerMinute_k__BackingField;

  /// @brief Field <songTimeOffset>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __get__songTimeOffset_k__BackingField, put = __set__songTimeOffset_k__BackingField)) float_t _songTimeOffset_k__BackingField;

  /// @brief Field <songDuration>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __get__songDuration_k__BackingField, put = __set__songDuration_k__BackingField)) float_t _songDuration_k__BackingField;

  /// @brief Field <shuffle>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __get__shuffle_k__BackingField, put = __set__shuffle_k__BackingField)) float_t _shuffle_k__BackingField;

  /// @brief Field <shufflePeriod>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __get__shufflePeriod_k__BackingField, put = __set__shufflePeriod_k__BackingField)) float_t _shufflePeriod_k__BackingField;

  /// @brief Field <previewStartTime>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __get__previewStartTime_k__BackingField, put = __set__previewStartTime_k__BackingField)) float_t _previewStartTime_k__BackingField;

  /// @brief Field <previewDuration>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __get__previewDuration_k__BackingField, put = __set__previewDuration_k__BackingField)) float_t _previewDuration_k__BackingField;

  /// @brief Field <environmentInfo>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__environmentInfo_k__BackingField, put = __set__environmentInfo_k__BackingField))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo_k__BackingField;

  /// @brief Field <allDirectionsEnvironmentInfo>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __get__allDirectionsEnvironmentInfo_k__BackingField,
                      put = __set__allDirectionsEnvironmentInfo_k__BackingField))::GlobalNamespace::EnvironmentInfoSO* _allDirectionsEnvironmentInfo_k__BackingField;

  /// @brief Field <environmentInfos>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__environmentInfos_k__BackingField,
                      put = __set__environmentInfos_k__BackingField))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> _environmentInfos_k__BackingField;

  /// @brief Field <defaultCoverImage>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__defaultCoverImage_k__BackingField, put = __set__defaultCoverImage_k__BackingField))::UnityEngine::Sprite* _defaultCoverImage_k__BackingField;

  /// @brief Field <previewDifficultyBeatmapSets>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__previewDifficultyBeatmapSets_k__BackingField, put = __set__previewDifficultyBeatmapSets_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PreviewDifficultyBeatmapSet*>* _previewDifficultyBeatmapSets_k__BackingField;

  /// @brief Field <beatmapOverrideColorSchemes>k__BackingField, offset 0x98, size 0x8
  __declspec(property(
      get = __get__beatmapOverrideColorSchemes_k__BackingField,
      put = __set__beatmapOverrideColorSchemes_k__BackingField))::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> _beatmapOverrideColorSchemes_k__BackingField;

  /// @brief Field <contentRating>k__BackingField, offset 0xa0, size 0x4
  __declspec(property(get = __get__contentRating_k__BackingField, put = __set__contentRating_k__BackingField))::GlobalNamespace::PlayerSensitivityFlag _contentRating_k__BackingField;

  /// @brief Field _coverImage, offset 0xa8, size 0x8
  __declspec(property(get = __get__coverImage, put = __set__coverImage))::UnityEngine::Sprite* _coverImage;

  __declspec(property(get = get_spriteAsyncLoader))::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader;

  __declspec(property(get = get_standardLevelInfoSaveData))::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData;

  __declspec(property(get = get_customLevelPath))::StringW customLevelPath;

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

  __declspec(property(get = get_defaultCoverImage))::UnityEngine::Sprite* defaultCoverImage;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_songPreviewAudioClipPath))::StringW songPreviewAudioClipPath;

  __declspec(property(get = get_beatmapOverrideColorSchemes))::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> beatmapOverrideColorSchemes;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept;

  constexpr ::GlobalNamespace::ISpriteAsyncLoader*& __get__spriteAsyncLoader_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISpriteAsyncLoader*> const& __get__spriteAsyncLoader_k__BackingField() const;

  constexpr void __set__spriteAsyncLoader_k__BackingField(::GlobalNamespace::ISpriteAsyncLoader* value);

  constexpr ::GlobalNamespace::StandardLevelInfoSaveData*& __get__standardLevelInfoSaveData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelInfoSaveData*> const& __get__standardLevelInfoSaveData_k__BackingField() const;

  constexpr void __set__standardLevelInfoSaveData_k__BackingField(::GlobalNamespace::StandardLevelInfoSaveData* value);

  constexpr ::StringW& __get__customLevelPath_k__BackingField();

  constexpr ::StringW const& __get__customLevelPath_k__BackingField() const;

  constexpr void __set__customLevelPath_k__BackingField(::StringW value);

  constexpr ::StringW& __get__levelID_k__BackingField();

  constexpr ::StringW const& __get__levelID_k__BackingField() const;

  constexpr void __set__levelID_k__BackingField(::StringW value);

  constexpr ::StringW& __get__songName_k__BackingField();

  constexpr ::StringW const& __get__songName_k__BackingField() const;

  constexpr void __set__songName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__songSubName_k__BackingField();

  constexpr ::StringW const& __get__songSubName_k__BackingField() const;

  constexpr void __set__songSubName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__songAuthorName_k__BackingField();

  constexpr ::StringW const& __get__songAuthorName_k__BackingField() const;

  constexpr void __set__songAuthorName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__levelAuthorName_k__BackingField();

  constexpr ::StringW const& __get__levelAuthorName_k__BackingField() const;

  constexpr void __set__levelAuthorName_k__BackingField(::StringW value);

  constexpr float_t& __get__beatsPerMinute_k__BackingField();

  constexpr float_t const& __get__beatsPerMinute_k__BackingField() const;

  constexpr void __set__beatsPerMinute_k__BackingField(float_t value);

  constexpr float_t& __get__songTimeOffset_k__BackingField();

  constexpr float_t const& __get__songTimeOffset_k__BackingField() const;

  constexpr void __set__songTimeOffset_k__BackingField(float_t value);

  constexpr float_t& __get__songDuration_k__BackingField();

  constexpr float_t const& __get__songDuration_k__BackingField() const;

  constexpr void __set__songDuration_k__BackingField(float_t value);

  constexpr float_t& __get__shuffle_k__BackingField();

  constexpr float_t const& __get__shuffle_k__BackingField() const;

  constexpr void __set__shuffle_k__BackingField(float_t value);

  constexpr float_t& __get__shufflePeriod_k__BackingField();

  constexpr float_t const& __get__shufflePeriod_k__BackingField() const;

  constexpr void __set__shufflePeriod_k__BackingField(float_t value);

  constexpr float_t& __get__previewStartTime_k__BackingField();

  constexpr float_t const& __get__previewStartTime_k__BackingField() const;

  constexpr void __set__previewStartTime_k__BackingField(float_t value);

  constexpr float_t& __get__previewDuration_k__BackingField();

  constexpr float_t const& __get__previewDuration_k__BackingField() const;

  constexpr void __set__previewDuration_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo_k__BackingField() const;

  constexpr void __set__environmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__allDirectionsEnvironmentInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__allDirectionsEnvironmentInfo_k__BackingField() const;

  constexpr void __set__allDirectionsEnvironmentInfo_k__BackingField(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*>& __get__environmentInfos_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> const& __get__environmentInfos_k__BackingField() const;

  constexpr void __set__environmentInfos_k__BackingField(::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> value);

  constexpr ::UnityEngine::Sprite*& __get__defaultCoverImage_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__defaultCoverImage_k__BackingField() const;

  constexpr void __set__defaultCoverImage_k__BackingField(::UnityEngine::Sprite* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& __get__previewDifficultyBeatmapSets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const&
  __get__previewDifficultyBeatmapSets_k__BackingField() const;

  constexpr void __set__previewDifficultyBeatmapSets_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);

  constexpr ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*>& __get__beatmapOverrideColorSchemes_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> const& __get__beatmapOverrideColorSchemes_k__BackingField() const;

  constexpr void __set__beatmapOverrideColorSchemes_k__BackingField(::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__contentRating_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__contentRating_k__BackingField() const;

  constexpr void __set__contentRating_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr ::UnityEngine::Sprite*& __get__coverImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__coverImage() const;

  constexpr void __set__coverImage(::UnityEngine::Sprite* value);

  /// @brief Method get_spriteAsyncLoader addr 0x234764c size 0x8 virtual false final false
  inline ::GlobalNamespace::ISpriteAsyncLoader* get_spriteAsyncLoader();

  /// @brief Method get_standardLevelInfoSaveData addr 0x2347654 size 0x8 virtual false final false
  inline ::GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData();

  /// @brief Method get_customLevelPath addr 0x234765c size 0x8 virtual false final false
  inline ::StringW get_customLevelPath();

  /// @brief Method get_levelID addr 0x2347664 size 0x8 virtual true final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName addr 0x234766c size 0x8 virtual true final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName addr 0x2347674 size 0x8 virtual true final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName addr 0x234767c size 0x8 virtual true final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName addr 0x2347684 size 0x8 virtual true final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute addr 0x234768c size 0x8 virtual true final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset addr 0x2347694 size 0x8 virtual true final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_songDuration addr 0x234769c size 0x8 virtual true final true
  inline float_t get_songDuration();

  /// @brief Method get_shuffle addr 0x23476a4 size 0x8 virtual true final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod addr 0x23476ac size 0x8 virtual true final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime addr 0x23476b4 size 0x8 virtual true final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration addr 0x23476bc size 0x8 virtual true final true
  inline float_t get_previewDuration();

  /// @brief Method get_environmentInfo addr 0x23476c4 size 0x8 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo addr 0x23476cc size 0x8 virtual true final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos addr 0x23476d4 size 0x8 virtual true final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_defaultCoverImage addr 0x23476dc size 0x8 virtual false final false
  inline ::UnityEngine::Sprite* get_defaultCoverImage();

  /// @brief Method get_previewDifficultyBeatmapSets addr 0x23476e4 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_songPreviewAudioClipPath addr 0x23473d0 size 0x70 virtual true final true
  inline ::StringW get_songPreviewAudioClipPath();

  /// @brief Method get_beatmapOverrideColorSchemes addr 0x23476ec size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> get_beatmapOverrideColorSchemes();

  /// @brief Method get_contentRating addr 0x23476f4 size 0x8 virtual true final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method GetCoverImageAsync addr 0x23476fc size 0xfc virtual true final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::CustomPreviewBeatmapLevel* New_ctor(::UnityEngine::Sprite* defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData,
                                                                       ::StringW customLevelPath, ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::StringW levelID, ::StringW songName,
                                                                       ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute, float_t songTimeOffset,
                                                                       float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration,
                                                                       ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo,
                                                                       ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos,
                                                                       ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> beatmapOverrideColorSchemes,
                                                                       ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                                                                       ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets);

  /// @brief Method .ctor addr 0x2347508 size 0xf8 virtual false final false
  inline void _ctor(::UnityEngine::Sprite* defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::StringW customLevelPath,
                    ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName,
                    float_t beatsPerMinute, float_t songTimeOffset, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration,
                    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo,
                    ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos,
                    ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> beatmapOverrideColorSchemes, ::GlobalNamespace::PlayerSensitivityFlag contentRating,
                    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets);

  // Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomPreviewBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomPreviewBeatmapLevel(CustomPreviewBeatmapLevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomPreviewBeatmapLevel();

public:
  /// @brief Field <spriteAsyncLoader>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ISpriteAsyncLoader* ____spriteAsyncLoader_k__BackingField;

  /// @brief Field <standardLevelInfoSaveData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelInfoSaveData* ____standardLevelInfoSaveData_k__BackingField;

  /// @brief Field <customLevelPath>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____customLevelPath_k__BackingField;

  /// @brief Field <levelID>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____levelID_k__BackingField;

  /// @brief Field <songName>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____songName_k__BackingField;

  /// @brief Field <songSubName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____songSubName_k__BackingField;

  /// @brief Field <songAuthorName>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____songAuthorName_k__BackingField;

  /// @brief Field <levelAuthorName>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____levelAuthorName_k__BackingField;

  /// @brief Field <beatsPerMinute>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____beatsPerMinute_k__BackingField;

  /// @brief Field <songTimeOffset>k__BackingField, offset: 0x54, size: 0x4, def value: None
  float_t ____songTimeOffset_k__BackingField;

  /// @brief Field <songDuration>k__BackingField, offset: 0x58, size: 0x4, def value: None
  float_t ____songDuration_k__BackingField;

  /// @brief Field <shuffle>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____shuffle_k__BackingField;

  /// @brief Field <shufflePeriod>k__BackingField, offset: 0x60, size: 0x4, def value: None
  float_t ____shufflePeriod_k__BackingField;

  /// @brief Field <previewStartTime>k__BackingField, offset: 0x64, size: 0x4, def value: None
  float_t ____previewStartTime_k__BackingField;

  /// @brief Field <previewDuration>k__BackingField, offset: 0x68, size: 0x4, def value: None
  float_t ____previewDuration_k__BackingField;

  /// @brief Field <environmentInfo>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo_k__BackingField;

  /// @brief Field <allDirectionsEnvironmentInfo>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____allDirectionsEnvironmentInfo_k__BackingField;

  /// @brief Field <environmentInfos>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> ____environmentInfos_k__BackingField;

  /// @brief Field <defaultCoverImage>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____defaultCoverImage_k__BackingField;

  /// @brief Field <previewDifficultyBeatmapSets>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* ____previewDifficultyBeatmapSets_k__BackingField;

  /// @brief Field <beatmapOverrideColorSchemes>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ColorScheme*, ::Array<::GlobalNamespace::ColorScheme*>*> ____beatmapOverrideColorSchemes_k__BackingField;

  /// @brief Field <contentRating>k__BackingField, offset: 0xa0, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____contentRating_k__BackingField;

  /// @brief Field _coverImage, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____coverImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomPreviewBeatmapLevel, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CustomPreviewBeatmapLevel___GetCoverImageAsync_d__69, "", "CustomPreviewBeatmapLevel/<GetCoverImageAsync>d__69");
