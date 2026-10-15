#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelCompletionResultsBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResults)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct LevelCompletionResultsBase_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResultsBase_LevelEndStateType;
}
namespace GlobalNamespace {
struct LevelScore;
}
namespace GlobalNamespace {
struct RankModel_Rank;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class INetImmutableSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LevelCompletionResults*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
// Dependencies LevelCompletionResultsBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResults
class CORDL_TYPE LevelCompletionResults : public ::GlobalNamespace::LevelCompletionResultsBase {
public:
  // Declarations
  /// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType)) float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field averageCutScoreForNotesWithFullScoreScoringType, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType)) float_t averageCutScoreForNotesWithFullScoreScoringType;

  __declspec(property(get = get_cumulativeScore)) int32_t cumulativeScore;

  /// @brief Field gameplayModifiers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field goodCutsCountForNotesWithFullScoreScoringType, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType)) int32_t goodCutsCountForNotesWithFullScoreScoringType;

  /// @brief Field invalidated, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_invalidated, put = __cordl_internal_set_invalidated)) bool invalidated;

  /// @brief Field leftHandMovementDistance, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_leftHandMovementDistance, put = __cordl_internal_set_leftHandMovementDistance)) float_t leftHandMovementDistance;

  /// @brief Field leftSaberMovementDistance, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_leftSaberMovementDistance, put = __cordl_internal_set_leftSaberMovementDistance)) float_t leftSaberMovementDistance;

  /// @brief Field maxCutScore, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCutScore, put = __cordl_internal_set_maxCutScore)) int32_t maxCutScore;

  /// @brief Field notGoodCount, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_notGoodCount, put = __cordl_internal_set_notGoodCount)) int32_t notGoodCount;

  /// @brief Field okCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_okCount, put = __cordl_internal_set_okCount)) int32_t okCount;

  /// @brief Field rightHandMovementDistance, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_rightHandMovementDistance, put = __cordl_internal_set_rightHandMovementDistance)) float_t rightHandMovementDistance;

  /// @brief Field rightSaberMovementDistance, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_rightSaberMovementDistance, put = __cordl_internal_set_rightSaberMovementDistance)) float_t rightSaberMovementDistance;

  /// @brief Field totalCutScore, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_totalCutScore, put = __cordl_internal_set_totalCutScore)) int32_t totalCutScore;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x3a31d7c, size 0x118, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CreateFromSerializedData, addr 0x3a322d8, size 0x3cc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData, addr 0x3a322d0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief [Preserve]
  static inline ::GlobalNamespace::LevelCompletionResults* New_ctor();

  static inline ::GlobalNamespace::LevelCompletionResults*
  New_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::LevelScore score, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, float_t leftSaberMovementDistance,
           float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
           ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int32_t notGoodCount,
           int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
           float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated, float_t startSongTime);

  /// @brief Method Serialize, addr 0x3a31e94, size 0x41c, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr float_t const& __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const;

  constexpr float_t& __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType();

  constexpr float_t const& __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() const;

  constexpr float_t& __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr int32_t const& __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() const;

  constexpr int32_t& __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType();

  constexpr bool const& __cordl_internal_get_invalidated() const;

  constexpr bool& __cordl_internal_get_invalidated();

  constexpr float_t const& __cordl_internal_get_leftHandMovementDistance() const;

  constexpr float_t& __cordl_internal_get_leftHandMovementDistance();

  constexpr float_t const& __cordl_internal_get_leftSaberMovementDistance() const;

  constexpr float_t& __cordl_internal_get_leftSaberMovementDistance();

  constexpr int32_t const& __cordl_internal_get_maxCutScore() const;

  constexpr int32_t& __cordl_internal_get_maxCutScore();

  constexpr int32_t const& __cordl_internal_get_notGoodCount() const;

  constexpr int32_t& __cordl_internal_get_notGoodCount();

  constexpr int32_t const& __cordl_internal_get_okCount() const;

  constexpr int32_t& __cordl_internal_get_okCount();

  constexpr float_t const& __cordl_internal_get_rightHandMovementDistance() const;

  constexpr float_t& __cordl_internal_get_rightHandMovementDistance();

  constexpr float_t const& __cordl_internal_get_rightSaberMovementDistance() const;

  constexpr float_t& __cordl_internal_get_rightSaberMovementDistance();

  constexpr int32_t const& __cordl_internal_get_totalCutScore() const;

  constexpr int32_t& __cordl_internal_get_totalCutScore();

  constexpr void __cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr void __cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value);

  constexpr void __cordl_internal_set_invalidated(bool value);

  constexpr void __cordl_internal_set_leftHandMovementDistance(float_t value);

  constexpr void __cordl_internal_set_leftSaberMovementDistance(float_t value);

  constexpr void __cordl_internal_set_maxCutScore(int32_t value);

  constexpr void __cordl_internal_set_notGoodCount(int32_t value);

  constexpr void __cordl_internal_set_okCount(int32_t value);

  constexpr void __cordl_internal_set_rightHandMovementDistance(float_t value);

  constexpr void __cordl_internal_set_rightSaberMovementDistance(float_t value);

  constexpr void __cordl_internal_set_totalCutScore(int32_t value);

  /// [Preserve]
  /// @brief Method .ctor, addr 0x3a31bdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3a31be4, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::LevelScore score, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo,
                    float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                    ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t energy,
                    int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                    int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated, float_t startSongTime);

  /// @brief Method get_cumulativeScore, addr 0x3a31bd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cumulativeScore();

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable* i___LiteNetLib__Utils__INetImmutableSerializable() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__LevelCompletionResults__() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResults();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResults(LevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResults(LevelCompletionResults const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21956 };

  /// @brief Field gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field leftSaberMovementDistance, offset: 0x60, size: 0x4, def value: None
  float_t ___leftSaberMovementDistance;

  /// @brief Field rightSaberMovementDistance, offset: 0x64, size: 0x4, def value: None
  float_t ___rightSaberMovementDistance;

  /// @brief Field leftHandMovementDistance, offset: 0x68, size: 0x4, def value: None
  float_t ___leftHandMovementDistance;

  /// @brief Field rightHandMovementDistance, offset: 0x6c, size: 0x4, def value: None
  float_t ___rightHandMovementDistance;

  /// @brief Field notGoodCount, offset: 0x70, size: 0x4, def value: None
  int32_t ___notGoodCount;

  /// @brief Field okCount, offset: 0x74, size: 0x4, def value: None
  int32_t ___okCount;

  /// @brief Field maxCutScore, offset: 0x78, size: 0x4, def value: None
  int32_t ___maxCutScore;

  /// @brief Field totalCutScore, offset: 0x7c, size: 0x4, def value: None
  int32_t ___totalCutScore;

  /// @brief Field goodCutsCountForNotesWithFullScoreScoringType, offset: 0x80, size: 0x4, def value: None
  int32_t ___goodCutsCountForNotesWithFullScoreScoringType;

  /// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, offset: 0x84, size: 0x4, def value: None
  float_t ___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field averageCutScoreForNotesWithFullScoreScoringType, offset: 0x88, size: 0x4, def value: None
  float_t ___averageCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field invalidated, offset: 0x8c, size: 0x1, def value: None
  bool ___invalidated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___gameplayModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___leftSaberMovementDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___rightSaberMovementDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___leftHandMovementDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___rightHandMovementDistance) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___notGoodCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___okCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___maxCutScore) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___totalCutScore) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___goodCutsCountForNotesWithFullScoreScoringType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___averageCutScoreForNotesWithFullScoreScoringType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___invalidated) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelCompletionResults) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
