#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IPreviewBeatmapLevel)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPreviewBeatmapLevel);
// Type: ::IPreviewBeatmapLevel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4399))
// CS Name: ::IPreviewBeatmapLevel*
class CORDL_TYPE IPreviewBeatmapLevel {
public:
  // Declarations
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

  /// @brief Method get_levelID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_levelID();

  /// @brief Method get_songName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_songName();

  /// @brief Method get_songSubName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_songSubName();

  /// @brief Method get_songAuthorName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_songAuthorName();

  /// @brief Method get_levelAuthorName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_levelAuthorName();

  /// @brief Method get_beatsPerMinute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_beatsPerMinute();

  /// @brief Method get_songTimeOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_songTimeOffset();

  /// @brief Method get_shuffle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_shuffle();

  /// @brief Method get_shufflePeriod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_shufflePeriod();

  /// @brief Method get_previewStartTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_previewStartTime();

  /// @brief Method get_previewDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_previewDuration();

  /// @brief Method get_songDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_songDuration();

  /// @brief Method get_environmentInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_allDirectionsEnvironmentInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();

  /// @brief Method get_environmentInfos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::GlobalNamespace::EnvironmentInfoSO*, ::Array<::GlobalNamespace::EnvironmentInfoSO*>*> get_environmentInfos();

  /// @brief Method get_previewDifficultyBeatmapSets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();

  /// @brief Method get_contentRating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_contentRating();

  /// @brief Method GetCoverImageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IPreviewBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPreviewBeatmapLevel(IPreviewBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPreviewBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPreviewBeatmapLevel(IPreviewBeatmapLevel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPreviewBeatmapLevel*, "", "IPreviewBeatmapLevel");
