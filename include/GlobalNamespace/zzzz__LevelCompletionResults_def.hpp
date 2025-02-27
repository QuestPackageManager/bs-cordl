#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResults)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
struct RankModel_Rank;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResults_LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelCompletionResults_LevelEndAction);
MARK_VAL_T(::GlobalNamespace::LevelCompletionResults_LevelEndStateType);
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResults);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelCompletionResults/LevelEndStateType
struct CORDL_TYPE LevelCompletionResults_LevelEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelCompletionResults_LevelEndStateType_Unwrapped
  enum struct __LevelCompletionResults_LevelEndStateType_Unwrapped : int32_t {
    __E_Incomplete = static_cast<int32_t>(0x0),
    __E_Cleared = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelCompletionResults_LevelEndStateType_Unwrapped() const noexcept {
    return static_cast<__LevelCompletionResults_LevelEndStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResults_LevelEndStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelCompletionResults_LevelEndStateType(int32_t value__) noexcept;

  /// @brief Field Cleared value: I32(1)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const Cleared;

  /// @brief Field Failed value: I32(2)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const Failed;

  /// @brief Field Incomplete value: I32(0)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const Incomplete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17000 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResults_LevelEndStateType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResults_LevelEndStateType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelCompletionResults/LevelEndAction
struct CORDL_TYPE LevelCompletionResults_LevelEndAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelCompletionResults_LevelEndAction_Unwrapped
  enum struct __LevelCompletionResults_LevelEndAction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Quit = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelCompletionResults_LevelEndAction_Unwrapped() const noexcept {
    return static_cast<__LevelCompletionResults_LevelEndAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResults_LevelEndAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelCompletionResults_LevelEndAction(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndAction const None;

  /// @brief Field Quit value: I32(1)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndAction const Quit;

  /// @brief Field Restart value: I32(2)
  static ::GlobalNamespace::LevelCompletionResults_LevelEndAction const Restart;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17001 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResults_LevelEndAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResults_LevelEndAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelCompletionResults::LevelEndAction, LevelCompletionResults::LevelEndStateType, LiteNetLib.Utils.INetImmutableSerializable`1<T>, RankModel::Rank, System.IComparable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResults
class CORDL_TYPE LevelCompletionResults : public ::System::Object {
public:
  // Declarations
  using LevelEndAction = ::GlobalNamespace::LevelCompletionResults_LevelEndAction;

  using LevelEndStateType = ::GlobalNamespace::LevelCompletionResults_LevelEndStateType;

  /// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType)) float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field averageCutScoreForNotesWithFullScoreScoringType, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType)) float_t averageCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field badCutsCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_badCutsCount, put = __cordl_internal_set_badCutsCount)) int32_t badCutsCount;

  __declspec(property(get = get_cumulativeScore)) int32_t cumulativeScore;

  /// @brief Field endSongTime, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_endSongTime, put = __cordl_internal_set_endSongTime)) float_t endSongTime;

  /// @brief Field energy, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_energy, put = __cordl_internal_set_energy)) float_t energy;

  /// @brief Field fullCombo, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field gameplayModifiers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field goodCutsCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCount, put = __cordl_internal_set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field goodCutsCountForNotesWithFullScoreScoringType, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType,
                      put = __cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType)) int32_t goodCutsCountForNotesWithFullScoreScoringType;

  /// @brief Field invalidated, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_invalidated, put = __cordl_internal_set_invalidated)) bool invalidated;

  /// @brief Field leftHandMovementDistance, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_leftHandMovementDistance, put = __cordl_internal_set_leftHandMovementDistance)) float_t leftHandMovementDistance;

  /// @brief Field leftSaberMovementDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_leftSaberMovementDistance, put = __cordl_internal_set_leftSaberMovementDistance)) float_t leftSaberMovementDistance;

  /// @brief Field levelEndAction, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_levelEndAction, put = __cordl_internal_set_levelEndAction)) ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction;

  /// @brief Field levelEndStateType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_levelEndStateType, put = __cordl_internal_set_levelEndStateType)) ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType;

  /// @brief Field maxCombo, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field maxCutScore, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCutScore, put = __cordl_internal_set_maxCutScore)) int32_t maxCutScore;

  /// @brief Field missedCount, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_missedCount, put = __cordl_internal_set_missedCount)) int32_t missedCount;

  /// @brief Field modifiedScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_modifiedScore, put = __cordl_internal_set_modifiedScore)) int32_t modifiedScore;

  /// @brief Field multipliedScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_multipliedScore, put = __cordl_internal_set_multipliedScore)) int32_t multipliedScore;

  /// @brief Field notGoodCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_notGoodCount, put = __cordl_internal_set_notGoodCount)) int32_t notGoodCount;

  /// @brief Field okCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_okCount, put = __cordl_internal_set_okCount)) int32_t okCount;

  /// @brief Field rank, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_rank, put = __cordl_internal_set_rank)) ::GlobalNamespace::RankModel_Rank rank;

  /// @brief Field rightHandMovementDistance, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_rightHandMovementDistance, put = __cordl_internal_set_rightHandMovementDistance)) float_t rightHandMovementDistance;

  /// @brief Field rightSaberMovementDistance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_rightSaberMovementDistance, put = __cordl_internal_set_rightSaberMovementDistance)) float_t rightSaberMovementDistance;

  /// @brief Field totalCutScore, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_totalCutScore, put = __cordl_internal_set_totalCutScore)) int32_t totalCutScore;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x2724ea0, size 0x11c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CreateFromSerializedData, addr 0x27252a8, size 0x31c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData, addr 0x27252a0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  static inline ::GlobalNamespace::LevelCompletionResults* New_ctor();

  static inline ::GlobalNamespace::LevelCompletionResults* New_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore,
                                                                    ::GlobalNamespace::RankModel_Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance,
                                                                    float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                                                                    ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
                                                                    ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount,
                                                                    int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                                                                    int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                                    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated);

  /// @brief Method Serialize, addr 0x2724fbc, size 0x2c4, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr float_t const& __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const;

  constexpr float_t& __cordl_internal_get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType();

  constexpr float_t const& __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType() const;

  constexpr float_t& __cordl_internal_get_averageCutScoreForNotesWithFullScoreScoringType();

  constexpr int32_t const& __cordl_internal_get_badCutsCount() const;

  constexpr int32_t& __cordl_internal_get_badCutsCount();

  constexpr float_t const& __cordl_internal_get_endSongTime() const;

  constexpr float_t& __cordl_internal_get_endSongTime();

  constexpr float_t const& __cordl_internal_get_energy() const;

  constexpr float_t& __cordl_internal_get_energy();

  constexpr bool const& __cordl_internal_get_fullCombo() const;

  constexpr bool& __cordl_internal_get_fullCombo();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr int32_t const& __cordl_internal_get_goodCutsCount() const;

  constexpr int32_t& __cordl_internal_get_goodCutsCount();

  constexpr int32_t const& __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType() const;

  constexpr int32_t& __cordl_internal_get_goodCutsCountForNotesWithFullScoreScoringType();

  constexpr bool const& __cordl_internal_get_invalidated() const;

  constexpr bool& __cordl_internal_get_invalidated();

  constexpr float_t const& __cordl_internal_get_leftHandMovementDistance() const;

  constexpr float_t& __cordl_internal_get_leftHandMovementDistance();

  constexpr float_t const& __cordl_internal_get_leftSaberMovementDistance() const;

  constexpr float_t& __cordl_internal_get_leftSaberMovementDistance();

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction const& __cordl_internal_get_levelEndAction() const;

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndAction& __cordl_internal_get_levelEndAction();

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const& __cordl_internal_get_levelEndStateType() const;

  constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType& __cordl_internal_get_levelEndStateType();

  constexpr int32_t const& __cordl_internal_get_maxCombo() const;

  constexpr int32_t& __cordl_internal_get_maxCombo();

  constexpr int32_t const& __cordl_internal_get_maxCutScore() const;

  constexpr int32_t& __cordl_internal_get_maxCutScore();

  constexpr int32_t const& __cordl_internal_get_missedCount() const;

  constexpr int32_t& __cordl_internal_get_missedCount();

  constexpr int32_t const& __cordl_internal_get_modifiedScore() const;

  constexpr int32_t& __cordl_internal_get_modifiedScore();

  constexpr int32_t const& __cordl_internal_get_multipliedScore() const;

  constexpr int32_t& __cordl_internal_get_multipliedScore();

  constexpr int32_t const& __cordl_internal_get_notGoodCount() const;

  constexpr int32_t& __cordl_internal_get_notGoodCount();

  constexpr int32_t const& __cordl_internal_get_okCount() const;

  constexpr int32_t& __cordl_internal_get_okCount();

  constexpr ::GlobalNamespace::RankModel_Rank const& __cordl_internal_get_rank() const;

  constexpr ::GlobalNamespace::RankModel_Rank& __cordl_internal_get_rank();

  constexpr float_t const& __cordl_internal_get_rightHandMovementDistance() const;

  constexpr float_t& __cordl_internal_get_rightHandMovementDistance();

  constexpr float_t const& __cordl_internal_get_rightSaberMovementDistance() const;

  constexpr float_t& __cordl_internal_get_rightSaberMovementDistance();

  constexpr int32_t const& __cordl_internal_get_totalCutScore() const;

  constexpr int32_t& __cordl_internal_get_totalCutScore();

  constexpr void __cordl_internal_set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr void __cordl_internal_set_averageCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr void __cordl_internal_set_badCutsCount(int32_t value);

  constexpr void __cordl_internal_set_endSongTime(float_t value);

  constexpr void __cordl_internal_set_energy(float_t value);

  constexpr void __cordl_internal_set_fullCombo(bool value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_goodCutsCount(int32_t value);

  constexpr void __cordl_internal_set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value);

  constexpr void __cordl_internal_set_invalidated(bool value);

  constexpr void __cordl_internal_set_leftHandMovementDistance(float_t value);

  constexpr void __cordl_internal_set_leftSaberMovementDistance(float_t value);

  constexpr void __cordl_internal_set_levelEndAction(::GlobalNamespace::LevelCompletionResults_LevelEndAction value);

  constexpr void __cordl_internal_set_levelEndStateType(::GlobalNamespace::LevelCompletionResults_LevelEndStateType value);

  constexpr void __cordl_internal_set_maxCombo(int32_t value);

  constexpr void __cordl_internal_set_maxCutScore(int32_t value);

  constexpr void __cordl_internal_set_missedCount(int32_t value);

  constexpr void __cordl_internal_set_modifiedScore(int32_t value);

  constexpr void __cordl_internal_set_multipliedScore(int32_t value);

  constexpr void __cordl_internal_set_notGoodCount(int32_t value);

  constexpr void __cordl_internal_set_okCount(int32_t value);

  constexpr void __cordl_internal_set_rank(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set_rightHandMovementDistance(float_t value);

  constexpr void __cordl_internal_set_rightSaberMovementDistance(float_t value);

  constexpr void __cordl_internal_set_totalCutScore(int32_t value);

  /// @brief Method .ctor, addr 0x2724d64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2724d6c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo,
                    float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                    ::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction, float_t energy,
                    int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                    int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime, bool invalidated);

  /// @brief Method get_cumulativeScore, addr 0x2724d5c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cumulativeScore();

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
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResults(LevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResults(LevelCompletionResults const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17002 };

  /// @brief Field gameplayModifiers, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field modifiedScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___modifiedScore;

  /// @brief Field multipliedScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___multipliedScore;

  /// @brief Field rank, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ___rank;

  /// @brief Field fullCombo, offset: 0x24, size: 0x1, def value: None
  bool ___fullCombo;

  /// @brief Field leftSaberMovementDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___leftSaberMovementDistance;

  /// @brief Field rightSaberMovementDistance, offset: 0x2c, size: 0x4, def value: None
  float_t ___rightSaberMovementDistance;

  /// @brief Field leftHandMovementDistance, offset: 0x30, size: 0x4, def value: None
  float_t ___leftHandMovementDistance;

  /// @brief Field rightHandMovementDistance, offset: 0x34, size: 0x4, def value: None
  float_t ___rightHandMovementDistance;

  /// @brief Field levelEndStateType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResults_LevelEndStateType ___levelEndStateType;

  /// @brief Field levelEndAction, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResults_LevelEndAction ___levelEndAction;

  /// @brief Field energy, offset: 0x40, size: 0x4, def value: None
  float_t ___energy;

  /// @brief Field goodCutsCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___goodCutsCount;

  /// @brief Field badCutsCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___badCutsCount;

  /// @brief Field missedCount, offset: 0x4c, size: 0x4, def value: None
  int32_t ___missedCount;

  /// @brief Field notGoodCount, offset: 0x50, size: 0x4, def value: None
  int32_t ___notGoodCount;

  /// @brief Field okCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___okCount;

  /// @brief Field maxCutScore, offset: 0x58, size: 0x4, def value: None
  int32_t ___maxCutScore;

  /// @brief Field totalCutScore, offset: 0x5c, size: 0x4, def value: None
  int32_t ___totalCutScore;

  /// @brief Field goodCutsCountForNotesWithFullScoreScoringType, offset: 0x60, size: 0x4, def value: None
  int32_t ___goodCutsCountForNotesWithFullScoreScoringType;

  /// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, offset: 0x64, size: 0x4, def value: None
  float_t ___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field averageCutScoreForNotesWithFullScoreScoringType, offset: 0x68, size: 0x4, def value: None
  float_t ___averageCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field maxCombo, offset: 0x6c, size: 0x4, def value: None
  int32_t ___maxCombo;

  /// @brief Field endSongTime, offset: 0x70, size: 0x4, def value: None
  float_t ___endSongTime;

  /// @brief Field invalidated, offset: 0x74, size: 0x1, def value: None
  bool ___invalidated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___gameplayModifiers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___modifiedScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___multipliedScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___rank) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___fullCombo) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___leftSaberMovementDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___rightSaberMovementDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___leftHandMovementDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___rightHandMovementDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___levelEndStateType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___levelEndAction) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___energy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___goodCutsCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___badCutsCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___missedCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___notGoodCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___okCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___maxCutScore) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___totalCutScore) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___goodCutsCountForNotesWithFullScoreScoringType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___averageCenterDistanceCutScoreForNotesWithFullScoreScoringType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___averageCutScoreForNotesWithFullScoreScoringType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___maxCombo) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___endSongTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResults, ___invalidated) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResults, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults_LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults_LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
