#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FilteredBeatmapLevel)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class __FilteredBeatmapLevel__FilteredBeatmapLevelData;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class FilteredBeatmapLevel;
}
namespace GlobalNamespace {
class __FilteredBeatmapLevel__FilteredBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FilteredBeatmapLevel);
MARK_REF_PTR_T(::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData);
// Type: ::FilteredBeatmapLevelData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5653))
// CS Name: ::FilteredBeatmapLevel::FilteredBeatmapLevelData*
class CORDL_TYPE __FilteredBeatmapLevel__FilteredBeatmapLevelData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <difficultyBeatmapSets>k__BackingField, offset 0x10, size 0x8
  __declspec(
      property(get = __get__difficultyBeatmapSets_k__BackingField,
               put = __set__difficultyBeatmapSets_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* _difficultyBeatmapSets_k__BackingField;

  /// @brief Field _beatmapLevelData, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelData, put = __set__beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*& __get__difficultyBeatmapSets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*> const&
  __get__difficultyBeatmapSets_k__BackingField() const;

  constexpr void __set__difficultyBeatmapSets_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* value);

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __get__beatmapLevelData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __get__beatmapLevelData() const;

  constexpr void __set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  /// @brief Method get_audioClip, addr 0x22b89d8, size 0xa0, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets, addr 0x22b8a78, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData*
  New_ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
           ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics);

  /// @brief Method .ctor, addr 0x22b7f30, size 0xaa8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics);

  // Ctor Parameters [CppParam { name: "", ty: "__FilteredBeatmapLevel__FilteredBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FilteredBeatmapLevel__FilteredBeatmapLevelData(__FilteredBeatmapLevel__FilteredBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FilteredBeatmapLevel__FilteredBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FilteredBeatmapLevel__FilteredBeatmapLevelData(__FilteredBeatmapLevel__FilteredBeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FilteredBeatmapLevel__FilteredBeatmapLevelData();

public:
  /// @brief Field <difficultyBeatmapSets>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* ____difficultyBeatmapSets_k__BackingField;

  /// @brief Field _beatmapLevelData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData, ____difficultyBeatmapSets_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData, ____beatmapLevelData) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FilteredBeatmapLevel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5654))
// CS Name: ::FilteredBeatmapLevel*
class CORDL_TYPE FilteredBeatmapLevel : public ::System::Object {
public:
  // Declarations
  using FilteredBeatmapLevelData = ::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData;

  /// @brief Field <previewDifficultyBeatmapSets>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__previewDifficultyBeatmapSets_k__BackingField, put = __set__previewDifficultyBeatmapSets_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<
      ::GlobalNamespace::PreviewDifficultyBeatmapSet*>* _previewDifficultyBeatmapSets_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevelData_k__BackingField, put = __set__beatmapLevelData_k__BackingField))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData_k__BackingField;

  /// @brief Field _beatmapLevel, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::IBeatmapLevel* _beatmapLevel;

  __declspec(property(get = get_levelID))::StringW levelID;

  __declspec(property(get = get_songName))::StringW songName;

  __declspec(property(get = get_songSubName))::StringW songSubName;

  __declspec(property(get = get_songAuthorName))::StringW songAuthorName;

  __declspec(property(get = get_levelAuthorName))::StringW levelAuthorName;

  __declspec(property(get = get_beatsPerMinute)) float_t beatsPerMinute;

  __declspec(property(get = get_songTimeOffset)) float_t songTimeOffset;

  __declspec(property(get = get_shuffle)) float_t shuffle;

  __declspec(property(get = get_shufflePeriod)) float_t shufflePeriod;

  __declspec(property(get = get_previewStartTime)) float_t previewStartTime;

  __declspec(property(get = get_previewDuration)) float_t previewDuration;

  __declspec(property(get = get_songDuration)) float_t songDuration;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_songPreviewAudioClip))::UnityEngine::AudioClip* songPreviewAudioClip;

  __declspec(property(get = get_songAudioClip))::UnityEngine::AudioClip* songAudioClip;

  __declspec(property(get = get_songPreviewAudioClipPath))::StringW songPreviewAudioClipPath;

  __declspec(property(get = get_songAudioClipPath))::StringW songAudioClipPath;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
  constexpr operator ::GlobalNamespace::IBeatmapLevel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevel"
  constexpr ::GlobalNamespace::IBeatmapLevel* i___GlobalNamespace__IBeatmapLevel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr ::GlobalNamespace::IPreviewBeatmapLevel* i___GlobalNamespace__IPreviewBeatmapLevel() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
  constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IFilePathSongPreviewAudioClipProvider"
  constexpr ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* i___GlobalNamespace__IFilePathSongPreviewAudioClipProvider() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IFilePathSongAudioClipProvider"
  constexpr ::GlobalNamespace::IFilePathSongAudioClipProvider* i___GlobalNamespace__IFilePathSongAudioClipProvider() noexcept;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& __get__previewDifficultyBeatmapSets_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*> const&
  __get__previewDifficultyBeatmapSets_k__BackingField() const;

  constexpr void __set__previewDifficultyBeatmapSets_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* value);

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __get__beatmapLevelData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __get__beatmapLevelData_k__BackingField() const;

  constexpr void __set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr ::GlobalNamespace::IBeatmapLevel*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevel*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::IBeatmapLevel* value);

  /// @brief Method get_levelID, addr 0x22b6e68, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName, addr 0x22b6f08, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x22b6fac, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x22b7050, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x22b70f4, size 0xa4, virtual true, abstract: false, final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x22b7198, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x22b723c, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle, addr 0x22b72e0, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x22b7384, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x22b7428, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x22b74cc, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_previewDuration();

  /// @brief Method get_songDuration, addr 0x22b7570, size 0xa4, virtual true, abstract: false, final true
  inline float_t get_songDuration();

  /// @brief Method get_contentRating, addr 0x22b7614, size 0xa4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method get_environmentInfo, addr 0x22b76b8, size 0xa4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo, addr 0x22b775c, size 0xa4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos, addr 0x22b7800, size 0xa4, virtual true, abstract: false, final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x22b78a4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_songPreviewAudioClip, addr 0x22b78ac, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_songPreviewAudioClip();

  /// @brief Method get_songAudioClip, addr 0x22b7960, size 0xb4, virtual true, abstract: false, final true
  inline ::UnityEngine::AudioClip* get_songAudioClip();

  /// @brief Method get_songPreviewAudioClipPath, addr 0x22b7a14, size 0xd4, virtual true, abstract: false, final true
  inline ::StringW get_songPreviewAudioClipPath();

  /// @brief Method get_songAudioClipPath, addr 0x22b7ae8, size 0xd4, virtual true, abstract: false, final true
  inline ::StringW get_songAudioClipPath();

  /// @brief Method GetCoverImageAsync, addr 0x22b7bbc, size 0xac, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_beatmapLevelData, addr 0x22b7c68, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_isEmpty, addr 0x22b7c70, size 0x124, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  static inline ::GlobalNamespace::FilteredBeatmapLevel* New_ctor(::GlobalNamespace::IBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                                                                  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics);

  /// @brief Method .ctor, addr 0x22b7d94, size 0x19c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics);

  // Ctor Parameters [CppParam { name: "", ty: "FilteredBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilteredBeatmapLevel(FilteredBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilteredBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilteredBeatmapLevel(FilteredBeatmapLevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilteredBeatmapLevel();

public:
  /// @brief Field <previewDifficultyBeatmapSets>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* ____previewDifficultyBeatmapSets_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData_k__BackingField;

  /// @brief Field _beatmapLevel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevel* ____beatmapLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FilteredBeatmapLevel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FilteredBeatmapLevel, ____previewDifficultyBeatmapSets_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FilteredBeatmapLevel, ____beatmapLevelData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FilteredBeatmapLevel, ____beatmapLevel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FilteredBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FilteredBeatmapLevel*, "", "FilteredBeatmapLevel");
NEED_NO_BOX(::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FilteredBeatmapLevel__FilteredBeatmapLevelData*, "", "FilteredBeatmapLevel/FilteredBeatmapLevelData");
