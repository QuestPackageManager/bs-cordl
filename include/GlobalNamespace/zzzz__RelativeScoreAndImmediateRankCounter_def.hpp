#pragma once
// IWYU pragma private; include "GlobalNamespace/RelativeScoreAndImmediateRankCounter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RelativeScoreAndImmediateRankCounter)
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
struct RankModel_Rank;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class RelativeScoreAndImmediateRankCounter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RelativeScoreAndImmediateRankCounter);
// Dependencies RankModel::Rank, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RelativeScoreAndImmediateRankCounter
class CORDL_TYPE RelativeScoreAndImmediateRankCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field <immediateRank>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__immediateRank_k__BackingField,
                      put = __cordl_internal_set__immediateRank_k__BackingField)) ::GlobalNamespace::RankModel_Rank _immediateRank_k__BackingField;

  /// @brief Field <relativeScore>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__relativeScore_k__BackingField, put = __cordl_internal_set__relativeScore_k__BackingField)) float_t _relativeScore_k__BackingField;

  /// @brief Field _scoreController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreController, put = __cordl_internal_set__scoreController)) ::GlobalNamespace::IScoreController* _scoreController;

  __declspec(property(get = get_immediateRank, put = set_immediateRank)) ::GlobalNamespace::RankModel_Rank immediateRank;

  __declspec(property(get = get_relativeScore, put = set_relativeScore)) float_t relativeScore;

  /// @brief Field relativeScoreOrImmediateRankDidChangeEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_relativeScoreOrImmediateRankDidChangeEvent,
                      put = __cordl_internal_set_relativeScoreOrImmediateRankDidChangeEvent)) ::System::Action* relativeScoreOrImmediateRankDidChangeEvent;

  /// @brief Method HandleScoreDidChange, addr 0x3ba4274, size 0x13c, virtual false, abstract: false, final false
  inline void HandleScoreDidChange(int32_t scoreWithoutModifiers, int32_t scoreWithModifiers);

  static inline ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ba4174, size 0x100, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3ba4038, size 0x13c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateRelativeScoreAndImmediateRank, addr 0x3ba43b0, size 0x88, virtual false, abstract: false, final false
  inline void UpdateRelativeScoreAndImmediateRank(int32_t score, int32_t modifiedScore, int32_t maxPossibleScore, int32_t maxPossibleModifiedScore);

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::GlobalNamespace::RankModel_Rank const& __cordl_internal_get__immediateRank_k__BackingField() const;

  constexpr ::GlobalNamespace::RankModel_Rank& __cordl_internal_get__immediateRank_k__BackingField();

  constexpr float_t const& __cordl_internal_get__relativeScore_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__relativeScore_k__BackingField();

  constexpr ::GlobalNamespace::IScoreController* const& __cordl_internal_get__scoreController() const;

  constexpr ::GlobalNamespace::IScoreController*& __cordl_internal_get__scoreController();

  constexpr ::System::Action* const& __cordl_internal_get_relativeScoreOrImmediateRankDidChangeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_relativeScoreOrImmediateRankDidChangeEvent();

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__immediateRank_k__BackingField(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set__relativeScore_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr void __cordl_internal_set_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3ba4438, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_relativeScoreOrImmediateRankDidChangeEvent, addr 0x3ba2bc8, size 0x9c, virtual false, abstract: false, final false
  inline void add_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  /// @brief Method get_immediateRank, addr 0x3ba4028, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::RankModel_Rank get_immediateRank();

  /// @brief Method get_relativeScore, addr 0x3ba4018, size 0x8, virtual false, abstract: false, final false
  inline float_t get_relativeScore();

  /// @brief Method remove_relativeScoreOrImmediateRankDidChangeEvent, addr 0x3ba3f7c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  /// @brief Method set_immediateRank, addr 0x3ba4030, size 0x8, virtual false, abstract: false, final false
  inline void set_immediateRank(::GlobalNamespace::RankModel_Rank value);

  /// @brief Method set_relativeScore, addr 0x3ba4020, size 0x8, virtual false, abstract: false, final false
  inline void set_relativeScore(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelativeScoreAndImmediateRankCounter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4418 };

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _scoreController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field relativeScoreOrImmediateRankDidChangeEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___relativeScoreOrImmediateRankDidChangeEvent;

  /// @brief Field <relativeScore>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____relativeScore_k__BackingField;

  /// @brief Field <immediateRank>k__BackingField, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ____immediateRank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____scoreController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ___relativeScoreOrImmediateRankDidChangeEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____relativeScore_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____immediateRank_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeScoreAndImmediateRankCounter, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeScoreAndImmediateRankCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeScoreAndImmediateRankCounter*, "", "RelativeScoreAndImmediateRankCounter");
