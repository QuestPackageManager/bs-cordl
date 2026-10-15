#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScore_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCompletionResultsBase)
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
// Forward declare root types
namespace GlobalNamespace {
struct LevelCompletionResultsBase_LevelEndAction;
}
namespace GlobalNamespace {
struct LevelCompletionResultsBase_LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResultsBase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction);
MARK_VAL_T(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType);
MARK_REF_T(::GlobalNamespace::LevelCompletionResultsBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction, "", "LevelCompletionResultsBase/LevelEndAction");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType, "", "LevelCompletionResultsBase/LevelEndStateType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelCompletionResultsBase*, "", "LevelCompletionResultsBase");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelCompletionResultsBase/LevelEndStateType
struct CORDL_TYPE LevelCompletionResultsBase_LevelEndStateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelCompletionResultsBase_LevelEndStateType_Unwrapped
  enum struct __LevelCompletionResultsBase_LevelEndStateType_Unwrapped : int32_t {
    __E_Incomplete = static_cast<int32_t>(0x0),
    __E_Cleared = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelCompletionResultsBase_LevelEndStateType_Unwrapped() const noexcept {
    return static_cast<__LevelCompletionResultsBase_LevelEndStateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsBase_LevelEndStateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LevelCompletionResultsBase_LevelEndStateType(int32_t value__) noexcept;

  /// @brief Field Cleared value: I32(1)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType const Cleared;

  /// @brief Field Failed value: I32(2)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType const Failed;

  /// @brief Field Incomplete value: I32(0)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType const Incomplete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21957 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelCompletionResultsBase/LevelEndAction
struct CORDL_TYPE LevelCompletionResultsBase_LevelEndAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelCompletionResultsBase_LevelEndAction_Unwrapped
  enum struct __LevelCompletionResultsBase_LevelEndAction_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Quit = static_cast<int32_t>(0x1),
    __E_Restart = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelCompletionResultsBase_LevelEndAction_Unwrapped() const noexcept {
    return static_cast<__LevelCompletionResultsBase_LevelEndAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsBase_LevelEndAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr LevelCompletionResultsBase_LevelEndAction(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction const None;

  /// @brief Field Quit value: I32(1)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction const Quit;

  /// @brief Field Restart value: I32(2)
  static ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction const Restart;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelCompletionResultsBase::LevelEndAction, LevelCompletionResultsBase::LevelEndStateType, LevelScore, RankModel::Rank, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResultsBase
class CORDL_TYPE LevelCompletionResultsBase : public ::System::Object {
public:
  // Declarations
  using LevelEndAction = ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction;

  using LevelEndStateType = ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType;

  /// @brief Field badCutsCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_badCutsCount, put = __cordl_internal_set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field bombCutsCount, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_bombCutsCount, put = __cordl_internal_set_bombCutsCount)) int32_t bombCutsCount;

  /// @brief Field endSongTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_endSongTime, put = __cordl_internal_set_endSongTime)) float_t endSongTime;

  /// @brief Field energy, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_energy, put = __cordl_internal_set_energy)) float_t energy;

  /// @brief Field fullCombo, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field gameplayModifierMask, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayModifierMask, put = __cordl_internal_set_gameplayModifierMask)) int32_t gameplayModifierMask;

  /// @brief Field goodCutsCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCount, put = __cordl_internal_set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field levelEndAction, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_levelEndAction, put = __cordl_internal_set_levelEndAction)) ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction;

  /// @brief Field levelEndStateType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_levelEndStateType, put = __cordl_internal_set_levelEndStateType)) ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType;

  /// @brief Field maxCombo, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field missedCutsCount, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_missedCutsCount, put = __cordl_internal_set_missedCutsCount)) int32_t missedCutsCount;

  /// @brief Field obstacleHitsCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_obstacleHitsCount, put = __cordl_internal_set_obstacleHitsCount)) int32_t obstacleHitsCount;

  /// @brief Field rank, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_rank, put = __cordl_internal_set_rank)) ::GlobalNamespace::RankModel_Rank rank;

  /// @brief Field score, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_score, put = __cordl_internal_set_score)) ::GlobalNamespace::LevelScore score;

  /// @brief Field startSongTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::LevelCompletionResultsBase* New_ctor();

  static inline ::GlobalNamespace::LevelCompletionResultsBase* New_ctor(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType,
                                                                        ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction, float_t startSongTime, float_t endSongTime,
                                                                        float_t energy, int32_t gameplayModifierMask, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo,
                                                                        ::GlobalNamespace::LevelScore score, int32_t maxCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount,
                                                                        int32_t bombCutsCount, int32_t obstacleHitsCount);

  constexpr int32_t const& __cordl_internal_get_badCutsCount() const;

  constexpr int32_t& __cordl_internal_get_badCutsCount();

  constexpr int32_t const& __cordl_internal_get_bombCutsCount() const;

  constexpr int32_t& __cordl_internal_get_bombCutsCount();

  constexpr float_t const& __cordl_internal_get_endSongTime() const;

  constexpr float_t& __cordl_internal_get_endSongTime();

  constexpr float_t const& __cordl_internal_get_energy() const;

  constexpr float_t& __cordl_internal_get_energy();

  constexpr bool const& __cordl_internal_get_fullCombo() const;

  constexpr bool& __cordl_internal_get_fullCombo();

  constexpr int32_t const& __cordl_internal_get_gameplayModifierMask() const;

  constexpr int32_t& __cordl_internal_get_gameplayModifierMask();

  constexpr int32_t const& __cordl_internal_get_goodCutsCount() const;

  constexpr int32_t& __cordl_internal_get_goodCutsCount();

  constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction const& __cordl_internal_get_levelEndAction() const;

  constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction& __cordl_internal_get_levelEndAction();

  constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType const& __cordl_internal_get_levelEndStateType() const;

  constexpr ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType& __cordl_internal_get_levelEndStateType();

  constexpr int32_t const& __cordl_internal_get_maxCombo() const;

  constexpr int32_t& __cordl_internal_get_maxCombo();

  constexpr int32_t const& __cordl_internal_get_missedCutsCount() const;

  constexpr int32_t& __cordl_internal_get_missedCutsCount();

  constexpr int32_t const& __cordl_internal_get_obstacleHitsCount() const;

  constexpr int32_t& __cordl_internal_get_obstacleHitsCount();

  constexpr ::GlobalNamespace::RankModel_Rank const& __cordl_internal_get_rank() const;

  constexpr ::GlobalNamespace::RankModel_Rank& __cordl_internal_get_rank();

  constexpr ::GlobalNamespace::LevelScore const& __cordl_internal_get_score() const;

  constexpr ::GlobalNamespace::LevelScore& __cordl_internal_get_score();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_badCutsCount(int32_t value);

  constexpr void __cordl_internal_set_bombCutsCount(int32_t value);

  constexpr void __cordl_internal_set_endSongTime(float_t value);

  constexpr void __cordl_internal_set_energy(float_t value);

  constexpr void __cordl_internal_set_fullCombo(bool value);

  constexpr void __cordl_internal_set_gameplayModifierMask(int32_t value);

  constexpr void __cordl_internal_set_goodCutsCount(int32_t value);

  constexpr void __cordl_internal_set_levelEndAction(::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction value);

  constexpr void __cordl_internal_set_levelEndStateType(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType value);

  constexpr void __cordl_internal_set_maxCombo(int32_t value);

  constexpr void __cordl_internal_set_missedCutsCount(int32_t value);

  constexpr void __cordl_internal_set_obstacleHitsCount(int32_t value);

  constexpr void __cordl_internal_set_rank(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set_score(::GlobalNamespace::LevelScore value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x3a31be0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3a31d30, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction levelEndAction,
                    float_t startSongTime, float_t endSongTime, float_t energy, int32_t gameplayModifierMask, ::GlobalNamespace::RankModel_Rank rank, bool fullCombo,
                    ::GlobalNamespace::LevelScore score, int32_t maxCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int32_t bombCutsCount, int32_t obstacleHitsCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsBase", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResultsBase(LevelCompletionResultsBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsBase", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResultsBase(LevelCompletionResultsBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21959 };

  /// @brief Field levelEndStateType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResultsBase_LevelEndStateType ___levelEndStateType;

  /// @brief Field levelEndAction, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::LevelCompletionResultsBase_LevelEndAction ___levelEndAction;

  /// @brief Field startSongTime, offset: 0x18, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field endSongTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___endSongTime;

  /// @brief Field energy, offset: 0x20, size: 0x4, def value: None
  float_t ___energy;

  /// @brief Field gameplayModifierMask, offset: 0x24, size: 0x4, def value: None
  int32_t ___gameplayModifierMask;

  /// @brief Field rank, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ___rank;

  /// @brief Field fullCombo, offset: 0x2c, size: 0x1, def value: None
  bool ___fullCombo;

  /// @brief Field score, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::LevelScore ___score;

  /// @brief Field maxCombo, offset: 0x40, size: 0x4, def value: None
  int32_t ___maxCombo;

  /// @brief Field goodCutsCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___goodCutsCount;

  /// @brief Field badCutsCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___badCutsCount;

  /// @brief Field missedCutsCount, offset: 0x4c, size: 0x4, def value: None
  int32_t ___missedCutsCount;

  /// @brief Field bombCutsCount, offset: 0x50, size: 0x4, def value: None
  int32_t ___bombCutsCount;

  /// @brief Field obstacleHitsCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___obstacleHitsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___levelEndStateType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___levelEndAction) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___startSongTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___endSongTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___energy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___gameplayModifierMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___rank) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___fullCombo) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___score) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___maxCombo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___goodCutsCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___badCutsCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___missedCutsCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___bombCutsCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCompletionResultsBase, ___obstacleHitsCount) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LevelCompletionResultsBase) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
