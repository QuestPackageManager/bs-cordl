#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResults)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
struct __RankModel__Rank;
}
namespace LiteNetLib::Utils {
template <typename T> class INetImmutableSerializable_1;
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
struct __LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
struct __LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelCompletionResults__LevelEndAction);
MARK_VAL_T(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType);
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResults);
// Type: ::LevelEndStateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15017))
// CS Name: ::LevelCompletionResults::LevelEndStateType
struct CORDL_TYPE __LevelCompletionResults__LevelEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LevelCompletionResults__LevelEndStateType_Unwrapped
  enum struct ____LevelCompletionResults__LevelEndStateType_Unwrapped : int32_t {
    __E_Incomplete = static_cast<int32_t>(0x0),
    __E_Cleared = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelCompletionResults__LevelEndStateType_Unwrapped() const noexcept {
    return static_cast<____LevelCompletionResults__LevelEndStateType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelCompletionResults__LevelEndStateType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCompletionResults__LevelEndStateType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Incomplete value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Incomplete;

  /// @brief Field Cleared value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Cleared;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelEndAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15018))
// CS Name: ::LevelCompletionResults::LevelEndAction
struct CORDL_TYPE __LevelCompletionResults__LevelEndAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LevelCompletionResults__LevelEndAction_Unwrapped
  enum struct ____LevelCompletionResults__LevelEndAction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Quit = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelCompletionResults__LevelEndAction_Unwrapped() const noexcept {
    return static_cast<____LevelCompletionResults__LevelEndAction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelCompletionResults__LevelEndAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCompletionResults__LevelEndAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const None;

  /// @brief Field Quit value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const Quit;

  /// @brief Field Restart value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const Restart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCompletionResults__LevelEndAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelCompletionResults__LevelEndAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCompletionResults
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15017)), TypeDefinitionIndex(TypeDefinitionIndex(15034)),
// TypeDefinitionIndex(TypeDefinitionIndex(15018))} Self: TypeDefinitionIndex(TypeDefinitionIndex(15019)) CS Name: ::LevelCompletionResults*
class CORDL_TYPE LevelCompletionResults : public ::System::Object {
public:
  // Declarations
  using LevelEndAction = ::GlobalNamespace::__LevelCompletionResults__LevelEndAction;

  using LevelEndStateType = ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType;

  /// @brief Field gameplayModifiers, offset 0x10, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field modifiedScore, offset 0x18, size 0x4
  __declspec(property(get = __get_modifiedScore, put = __set_modifiedScore)) int32_t modifiedScore;

  /// @brief Field multipliedScore, offset 0x1c, size 0x4
  __declspec(property(get = __get_multipliedScore, put = __set_multipliedScore)) int32_t multipliedScore;

  /// @brief Field rank, offset 0x20, size 0x4
  __declspec(property(get = __get_rank, put = __set_rank))::GlobalNamespace::__RankModel__Rank rank;

  /// @brief Field fullCombo, offset 0x24, size 0x1
  __declspec(property(get = __get_fullCombo, put = __set_fullCombo)) bool fullCombo;

  /// @brief Field leftSaberMovementDistance, offset 0x28, size 0x4
  __declspec(property(get = __get_leftSaberMovementDistance, put = __set_leftSaberMovementDistance)) float_t leftSaberMovementDistance;

  /// @brief Field rightSaberMovementDistance, offset 0x2c, size 0x4
  __declspec(property(get = __get_rightSaberMovementDistance, put = __set_rightSaberMovementDistance)) float_t rightSaberMovementDistance;

  /// @brief Field leftHandMovementDistance, offset 0x30, size 0x4
  __declspec(property(get = __get_leftHandMovementDistance, put = __set_leftHandMovementDistance)) float_t leftHandMovementDistance;

  /// @brief Field rightHandMovementDistance, offset 0x34, size 0x4
  __declspec(property(get = __get_rightHandMovementDistance, put = __set_rightHandMovementDistance)) float_t rightHandMovementDistance;

  /// @brief Field levelEndStateType, offset 0x38, size 0x4
  __declspec(property(get = __get_levelEndStateType, put = __set_levelEndStateType))::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType;

  /// @brief Field levelEndAction, offset 0x3c, size 0x4
  __declspec(property(get = __get_levelEndAction, put = __set_levelEndAction))::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction;

  /// @brief Field energy, offset 0x40, size 0x4
  __declspec(property(get = __get_energy, put = __set_energy)) float_t energy;

  /// @brief Field goodCutsCount, offset 0x44, size 0x4
  __declspec(property(get = __get_goodCutsCount, put = __set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field badCutsCount, offset 0x48, size 0x4
  __declspec(property(get = __get_badCutsCount, put = __set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field missedCount, offset 0x4c, size 0x4
  __declspec(property(get = __get_missedCount, put = __set_missedCount)) int32_t missedCount;

  /// @brief Field notGoodCount, offset 0x50, size 0x4
  __declspec(property(get = __get_notGoodCount, put = __set_notGoodCount)) int32_t notGoodCount;

  /// @brief Field okCount, offset 0x54, size 0x4
  __declspec(property(get = __get_okCount, put = __set_okCount)) int32_t okCount;

  /// @brief Field maxCutScore, offset 0x58, size 0x4
  __declspec(property(get = __get_maxCutScore, put = __set_maxCutScore)) int32_t maxCutScore;

  /// @brief Field totalCutScore, offset 0x5c, size 0x4
  __declspec(property(get = __get_totalCutScore, put = __set_totalCutScore)) int32_t totalCutScore;

  /// @brief Field goodCutsCountForNotesWithFullScoreScoringType, offset 0x60, size 0x4
  __declspec(property(get = __get_goodCutsCountForNotesWithFullScoreScoringType, put = __set_goodCutsCountForNotesWithFullScoreScoringType)) int32_t goodCutsCountForNotesWithFullScoreScoringType;

  /// @brief Field averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, offset 0x64, size 0x4
  __declspec(property(get = __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                      put = __set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType)) float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field averageCutScoreForNotesWithFullScoreScoringType, offset 0x68, size 0x4
  __declspec(property(get = __get_averageCutScoreForNotesWithFullScoreScoringType,
                      put = __set_averageCutScoreForNotesWithFullScoreScoringType)) float_t averageCutScoreForNotesWithFullScoreScoringType;

  /// @brief Field maxCombo, offset 0x6c, size 0x4
  __declspec(property(get = __get_maxCombo, put = __set_maxCombo)) int32_t maxCombo;

  /// @brief Field endSongTime, offset 0x70, size 0x4
  __declspec(property(get = __get_endSongTime, put = __set_endSongTime)) float_t endSongTime;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
  constexpr operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
  constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*
  i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__LevelCompletionResults__() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  constexpr ::GlobalNamespace::GameplayModifiers*& __get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr int32_t& __get_modifiedScore();

  constexpr int32_t const& __get_modifiedScore() const;

  constexpr void __set_modifiedScore(int32_t value);

  constexpr int32_t& __get_multipliedScore();

  constexpr int32_t const& __get_multipliedScore() const;

  constexpr void __set_multipliedScore(int32_t value);

  constexpr ::GlobalNamespace::__RankModel__Rank& __get_rank();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __get_rank() const;

  constexpr void __set_rank(::GlobalNamespace::__RankModel__Rank value);

  constexpr bool& __get_fullCombo();

  constexpr bool const& __get_fullCombo() const;

  constexpr void __set_fullCombo(bool value);

  constexpr float_t& __get_leftSaberMovementDistance();

  constexpr float_t const& __get_leftSaberMovementDistance() const;

  constexpr void __set_leftSaberMovementDistance(float_t value);

  constexpr float_t& __get_rightSaberMovementDistance();

  constexpr float_t const& __get_rightSaberMovementDistance() const;

  constexpr void __set_rightSaberMovementDistance(float_t value);

  constexpr float_t& __get_leftHandMovementDistance();

  constexpr float_t const& __get_leftHandMovementDistance() const;

  constexpr void __set_leftHandMovementDistance(float_t value);

  constexpr float_t& __get_rightHandMovementDistance();

  constexpr float_t const& __get_rightHandMovementDistance() const;

  constexpr void __set_rightHandMovementDistance(float_t value);

  constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& __get_levelEndStateType();

  constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& __get_levelEndStateType() const;

  constexpr void __set_levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType value);

  constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction& __get_levelEndAction();

  constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const& __get_levelEndAction() const;

  constexpr void __set_levelEndAction(::GlobalNamespace::__LevelCompletionResults__LevelEndAction value);

  constexpr float_t& __get_energy();

  constexpr float_t const& __get_energy() const;

  constexpr void __set_energy(float_t value);

  constexpr int32_t& __get_goodCutsCount();

  constexpr int32_t const& __get_goodCutsCount() const;

  constexpr void __set_goodCutsCount(int32_t value);

  constexpr int32_t& __get_badCutsCount();

  constexpr int32_t const& __get_badCutsCount() const;

  constexpr void __set_badCutsCount(int32_t value);

  constexpr int32_t& __get_missedCount();

  constexpr int32_t const& __get_missedCount() const;

  constexpr void __set_missedCount(int32_t value);

  constexpr int32_t& __get_notGoodCount();

  constexpr int32_t const& __get_notGoodCount() const;

  constexpr void __set_notGoodCount(int32_t value);

  constexpr int32_t& __get_okCount();

  constexpr int32_t const& __get_okCount() const;

  constexpr void __set_okCount(int32_t value);

  constexpr int32_t& __get_maxCutScore();

  constexpr int32_t const& __get_maxCutScore() const;

  constexpr void __set_maxCutScore(int32_t value);

  constexpr int32_t& __get_totalCutScore();

  constexpr int32_t const& __get_totalCutScore() const;

  constexpr void __set_totalCutScore(int32_t value);

  constexpr int32_t& __get_goodCutsCountForNotesWithFullScoreScoringType();

  constexpr int32_t const& __get_goodCutsCountForNotesWithFullScoreScoringType() const;

  constexpr void __set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value);

  constexpr float_t& __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType();

  constexpr float_t const& __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const;

  constexpr void __set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr float_t& __get_averageCutScoreForNotesWithFullScoreScoringType();

  constexpr float_t const& __get_averageCutScoreForNotesWithFullScoreScoringType() const;

  constexpr void __set_averageCutScoreForNotesWithFullScoreScoringType(float_t value);

  constexpr int32_t& __get_maxCombo();

  constexpr int32_t const& __get_maxCombo() const;

  constexpr void __set_maxCombo(int32_t value);

  constexpr float_t& __get_endSongTime();

  constexpr float_t const& __get_endSongTime() const;

  constexpr void __set_endSongTime(float_t value);

  static inline ::GlobalNamespace::LevelCompletionResults* New_ctor();

  /// @brief Method .ctor, addr 0x12a2c7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelCompletionResults* New_ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore,
                                                                    ::GlobalNamespace::__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance,
                                                                    float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                                                                    ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
                                                                    ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount,
                                                                    int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                                                                    int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                                                                    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime);

  /// @brief Method .ctor, addr 0x12a2c84, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GameplayModifiers* gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::__RankModel__Rank rank, bool fullCombo,
                    float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance,
                    ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy,
                    int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore,
                    int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType,
                    float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime);

  /// @brief Method CompareTo, addr 0x12a2db0, size 0x124, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method Serialize, addr 0x12a2ed4, size 0x1d4, virtual true, abstract: false, final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData, addr 0x12a30b8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::LevelCompletionResults* LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method CreateFromSerializedData, addr 0x12a30c0, size 0x340, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::LevelCompletionResults* CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResults(LevelCompletionResults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResults(LevelCompletionResults const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResults();

public:
  /// @brief Field gameplayModifiers, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field modifiedScore, offset: 0x18, size: 0x4, def value: None
  int32_t ___modifiedScore;

  /// @brief Field multipliedScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___multipliedScore;

  /// @brief Field rank, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__RankModel__Rank ___rank;

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
  ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType ___levelEndStateType;

  /// @brief Field levelEndAction, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__LevelCompletionResults__LevelEndAction ___levelEndAction;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResults, 0x78>, "Size mismatch!");

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

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCompletionResults__LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults*, "", "LevelCompletionResults");
