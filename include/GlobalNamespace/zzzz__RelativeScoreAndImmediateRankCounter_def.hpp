#pragma once
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
struct __RankModel__Rank;
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
// Type: ::RelativeScoreAndImmediateRankCounter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15034)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5042))
// CS Name: ::RelativeScoreAndImmediateRankCounter*
class CORDL_TYPE RelativeScoreAndImmediateRankCounter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifiersModel, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _scoreController, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreController, put = __set__scoreController))::GlobalNamespace::IScoreController* _scoreController;

  /// @brief Field _gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field relativeScoreOrImmediateRankDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_relativeScoreOrImmediateRankDidChangeEvent, put = __set_relativeScoreOrImmediateRankDidChangeEvent))::System::Action* relativeScoreOrImmediateRankDidChangeEvent;

  /// @brief Field <relativeScore>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __get__relativeScore_k__BackingField, put = __set__relativeScore_k__BackingField)) float_t _relativeScore_k__BackingField;

  /// @brief Field <immediateRank>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __get__immediateRank_k__BackingField, put = __set__immediateRank_k__BackingField))::GlobalNamespace::__RankModel__Rank _immediateRank_k__BackingField;

  __declspec(property(get = get_relativeScore, put = set_relativeScore)) float_t relativeScore;

  __declspec(property(get = get_immediateRank, put = set_immediateRank))::GlobalNamespace::__RankModel__Rank immediateRank;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::IScoreController*& __get__scoreController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& __get__scoreController() const;

  constexpr void __set__scoreController(::GlobalNamespace::IScoreController* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::System::Action*& __get_relativeScoreOrImmediateRankDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_relativeScoreOrImmediateRankDidChangeEvent() const;

  constexpr void __set_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  constexpr float_t& __get__relativeScore_k__BackingField();

  constexpr float_t const& __get__relativeScore_k__BackingField() const;

  constexpr void __set__relativeScore_k__BackingField(float_t value);

  constexpr ::GlobalNamespace::__RankModel__Rank& __get__immediateRank_k__BackingField();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __get__immediateRank_k__BackingField() const;

  constexpr void __set__immediateRank_k__BackingField(::GlobalNamespace::__RankModel__Rank value);

  /// @brief Method add_relativeScoreOrImmediateRankDidChangeEvent, addr 0x23c0f80, size 0x9c, virtual false, abstract: false, final false
  inline void add_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  /// @brief Method remove_relativeScoreOrImmediateRankDidChangeEvent, addr 0x23c235c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_relativeScoreOrImmediateRankDidChangeEvent(::System::Action* value);

  /// @brief Method get_relativeScore, addr 0x23c23f8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_relativeScore();

  /// @brief Method set_relativeScore, addr 0x23c2400, size 0x8, virtual false, abstract: false, final false
  inline void set_relativeScore(float_t value);

  /// @brief Method get_immediateRank, addr 0x23c2408, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RankModel__Rank get_immediateRank();

  /// @brief Method set_immediateRank, addr 0x23c2410, size 0x8, virtual false, abstract: false, final false
  inline void set_immediateRank(::GlobalNamespace::__RankModel__Rank value);

  /// @brief Method Start, addr 0x23c2418, size 0x138, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23c2550, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleScoreDidChange, addr 0x23c2658, size 0x13c, virtual false, abstract: false, final false
  inline void HandleScoreDidChange(int32_t scoreWithoutModifiers, int32_t scoreWithModifiers);

  /// @brief Method UpdateRelativeScoreAndImmediateRank, addr 0x23c2794, size 0x88, virtual false, abstract: false, final false
  inline void UpdateRelativeScoreAndImmediateRank(int32_t score, int32_t modifiedScore, int32_t maxPossibleScore, int32_t maxPossibleModifiedScore);

  static inline ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* New_ctor();

  /// @brief Method .ctor, addr 0x23c281c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RelativeScoreAndImmediateRankCounter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RelativeScoreAndImmediateRankCounter(RelativeScoreAndImmediateRankCounter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RelativeScoreAndImmediateRankCounter();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _scoreController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IScoreController* ____scoreController;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field relativeScoreOrImmediateRankDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___relativeScoreOrImmediateRankDidChangeEvent;

  /// @brief Field <relativeScore>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____relativeScore_k__BackingField;

  /// @brief Field <immediateRank>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__RankModel__Rank ____immediateRank_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RelativeScoreAndImmediateRankCounter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____gameplayModifiersModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____scoreController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ___relativeScoreOrImmediateRankDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____relativeScore_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RelativeScoreAndImmediateRankCounter, ____immediateRank_k__BackingField) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RelativeScoreAndImmediateRankCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeScoreAndImmediateRankCounter*, "", "RelativeScoreAndImmediateRankCounter");
