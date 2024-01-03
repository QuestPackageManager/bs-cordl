#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EmptyBeatmapLevel)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyBeatmapLevel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyBeatmapLevel);
// Type: ::EmptyBeatmapLevel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4386))
// CS Name: ::EmptyBeatmapLevel*
class CORDL_TYPE EmptyBeatmapLevel : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapLevelData>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelData_k__BackingField, put = __set__beatmapLevelData_k__BackingField))::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData_k__BackingField;

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

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_allDirectionsEnvironmentInfo))::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;

  __declspec(property(get = get_environmentInfos))::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> environmentInfos;

  __declspec(property(get = get_previewDifficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;

  __declspec(property(get = get_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
  constexpr operator ::GlobalNamespace::IBeatmapLevel*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __get__beatmapLevelData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& __get__beatmapLevelData_k__BackingField() const;

  constexpr void __set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value);

  /// @brief Method get_levelID, addr 0x2347bdc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelID();

  /// @brief Method get_songName, addr 0x2347be4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x2347bec, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x2347bf4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x2347bfc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x2347c04, size 0x8, virtual true, abstract: false, final true
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x2347c0c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle, addr 0x2347c14, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x2347c1c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x2347c24, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x2347c2c, size 0x8, virtual true, abstract: false, final true
  inline float_t get_previewDuration();

  /// @brief Method get_songDuration, addr 0x2347c34, size 0x8, virtual true, abstract: false, final true
  inline float_t get_songDuration();

  /// @brief Method get_environmentInfo, addr 0x2347c3c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo, addr 0x2347c44, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos, addr 0x2347c4c, size 0x7c, virtual true, abstract: false, final true
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x2347cc8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_contentRating, addr 0x2347cd0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method GetPreviewAudioClipAsync, addr 0x2347cd8, size 0x40, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method GetCoverImageAsync, addr 0x2347d18, size 0x40, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_beatmapLevelData, addr 0x2347d58, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  static inline ::GlobalNamespace::EmptyBeatmapLevel* New_ctor();

  /// @brief Method .ctor, addr 0x2347d60, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyBeatmapLevel(EmptyBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyBeatmapLevel(EmptyBeatmapLevel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyBeatmapLevel();

public:
  /// @brief Field <beatmapLevelData>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyBeatmapLevel, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EmptyBeatmapLevel, ____beatmapLevelData_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyBeatmapLevel*, "", "EmptyBeatmapLevel");
