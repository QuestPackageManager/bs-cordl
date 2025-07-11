#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreController)
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class BadCutScoringElement_Pool;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GoodCutScoringElement_Pool;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace GlobalNamespace {
class MissScoringElement_Pool;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class RecPlayBehaviour_State;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreController);
// Dependencies IScoreController, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreController
class CORDL_TYPE ScoreController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioTimeSyncController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::UnityW<::GlobalNamespace::AudioTimeSyncController>
      _audioTimeSyncController;

  /// @brief Field _badCutScoringElementPool, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__badCutScoringElementPool,
                      put = __cordl_internal_set__badCutScoringElementPool)) ::GlobalNamespace::BadCutScoringElement_Pool* _badCutScoringElementPool;

  /// @brief Field _beatmapObjectManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameEnergyCounter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameEnergyCounter, put = __cordl_internal_set__gameEnergyCounter)) ::GlobalNamespace::IGameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _gameplayModifierParams, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifierParams,
                      put = __cordl_internal_set__gameplayModifierParams)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* _gameplayModifierParams;

  /// @brief Field _gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _gameplayModifiersModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _goodCutScoringElementPool, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__goodCutScoringElementPool,
                      put = __cordl_internal_set__goodCutScoringElementPool)) ::GlobalNamespace::GoodCutScoringElement_Pool* _goodCutScoringElementPool;

  /// @brief Field _immediateMaxPossibleModifiedScore, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__immediateMaxPossibleModifiedScore, put = __cordl_internal_set__immediateMaxPossibleModifiedScore)) int32_t _immediateMaxPossibleModifiedScore;

  /// @brief Field _immediateMaxPossibleMultipliedScore, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__immediateMaxPossibleMultipliedScore, put = __cordl_internal_set__immediateMaxPossibleMultipliedScore)) int32_t _immediateMaxPossibleMultipliedScore;

  /// @brief Field _invalidated, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get__invalidated, put = __cordl_internal_set__invalidated)) bool _invalidated;

  /// @brief Field _maxScoreMultiplierCounter, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__maxScoreMultiplierCounter,
                      put = __cordl_internal_set__maxScoreMultiplierCounter)) ::GlobalNamespace::ScoreMultiplierCounter* _maxScoreMultiplierCounter;

  /// @brief Field _missScoringElementPool, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__missScoringElementPool, put = __cordl_internal_set__missScoringElementPool)) ::GlobalNamespace::MissScoringElement_Pool* _missScoringElementPool;

  /// @brief Field _modifiedScore, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__modifiedScore, put = __cordl_internal_set__modifiedScore)) int32_t _modifiedScore;

  /// @brief Field _multipliedScore, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__multipliedScore, put = __cordl_internal_set__multipliedScore)) int32_t _multipliedScore;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction)) ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>
      _playerHeadAndObstacleInteraction;

  /// @brief Field _prevMultiplierFromModifiers, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMultiplierFromModifiers, put = __cordl_internal_set__prevMultiplierFromModifiers)) float_t _prevMultiplierFromModifiers;

  /// @brief Field _recPlayState, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__recPlayState, put = __cordl_internal_set__recPlayState)) ::GlobalNamespace::RecPlayBehaviour_State* _recPlayState;

  /// @brief Field _scoreMultiplierCounter, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreMultiplierCounter, put = __cordl_internal_set__scoreMultiplierCounter)) ::GlobalNamespace::ScoreMultiplierCounter* _scoreMultiplierCounter;

  /// @brief Field _scoringElementsToRemove, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__scoringElementsToRemove,
                      put = __cordl_internal_set__scoringElementsToRemove)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _scoringElementsToRemove;

  /// @brief Field _scoringElementsWithMultiplier, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__scoringElementsWithMultiplier,
                      put = __cordl_internal_set__scoringElementsWithMultiplier)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _scoringElementsWithMultiplier;

  /// @brief Field _sortedNoteTimesWithoutScoringElements, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedNoteTimesWithoutScoringElements,
                      put = __cordl_internal_set__sortedNoteTimesWithoutScoringElements)) ::System::Collections::Generic::List_1<float_t>* _sortedNoteTimesWithoutScoringElements;

  /// @brief Field _sortedScoringElementsWithoutMultiplier, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__sortedScoringElementsWithoutMultiplier,
      put = __cordl_internal_set__sortedScoringElementsWithoutMultiplier)) ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _sortedScoringElementsWithoutMultiplier;

  __declspec(property(get = get_immediateMaxPossibleModifiedScore)) int32_t immediateMaxPossibleModifiedScore;

  __declspec(property(get = get_immediateMaxPossibleMultipliedScore)) int32_t immediateMaxPossibleMultipliedScore;

  __declspec(property(get = get_invalidated)) bool invalidated;

  __declspec(property(get = get_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_multipliedScore)) int32_t multipliedScore;

  /// @brief Field multiplierDidChangeEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplierDidChangeEvent, put = __cordl_internal_set_multiplierDidChangeEvent)) ::System::Action_2<int32_t, float_t>* multiplierDidChangeEvent;

  /// @brief Field scoreDidChangeEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_scoreDidChangeEvent, put = __cordl_internal_set_scoreDidChangeEvent)) ::System::Action_2<int32_t, int32_t>* scoreDidChangeEvent;

  /// @brief Field scoringForNoteFinishedEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_scoringForNoteFinishedEvent,
                      put = __cordl_internal_set_scoringForNoteFinishedEvent)) ::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteFinishedEvent;

  /// @brief Field scoringForNoteStartedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_scoringForNoteStartedEvent,
                      put = __cordl_internal_set_scoringForNoteStartedEvent)) ::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteStartedEvent;

  /// @brief Convert operator to "::GlobalNamespace::IScoreController"
  constexpr operator ::GlobalNamespace::IScoreController*() noexcept;

  /// @brief Method DespawnScoringElement, addr 0x3beec80, size 0x180, virtual false, abstract: false, final false
  inline void DespawnScoringElement(::GlobalNamespace::ScoringElement* scoringElement);

  /// @brief Method HandleNoteWasCut, addr 0x3beee9c, size 0x178, virtual false, abstract: false, final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed, addr 0x3bef0d0, size 0x10c, virtual false, abstract: false, final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasSpawned, addr 0x3beee00, size 0x9c, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandlePlayerHeadDidEnterObstacles, addr 0x3bef228, size 0x6c, virtual false, abstract: false, final false
  inline void HandlePlayerHeadDidEnterObstacles();

  /// @brief Method LateUpdate, addr 0x3bee44c, size 0x79c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::ScoreController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bee274, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetEnabled, addr 0x3bee02c, size 0xc, virtual true, abstract: false, final true
  inline void SetEnabled(bool enabled);

  /// @brief Method Start, addr 0x3bee038, size 0x23c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& __cordl_internal_get__audioTimeSyncController();

  constexpr ::GlobalNamespace::BadCutScoringElement_Pool* const& __cordl_internal_get__badCutScoringElementPool() const;

  constexpr ::GlobalNamespace::BadCutScoringElement_Pool*& __cordl_internal_get__badCutScoringElementPool();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::GlobalNamespace::IGameEnergyCounter* const& __cordl_internal_get__gameEnergyCounter() const;

  constexpr ::GlobalNamespace::IGameEnergyCounter*& __cordl_internal_get__gameEnergyCounter();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const& __cordl_internal_get__gameplayModifierParams() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& __cordl_internal_get__gameplayModifierParams();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::GlobalNamespace::GoodCutScoringElement_Pool* const& __cordl_internal_get__goodCutScoringElementPool() const;

  constexpr ::GlobalNamespace::GoodCutScoringElement_Pool*& __cordl_internal_get__goodCutScoringElementPool();

  constexpr int32_t const& __cordl_internal_get__immediateMaxPossibleModifiedScore() const;

  constexpr int32_t& __cordl_internal_get__immediateMaxPossibleModifiedScore();

  constexpr int32_t const& __cordl_internal_get__immediateMaxPossibleMultipliedScore() const;

  constexpr int32_t& __cordl_internal_get__immediateMaxPossibleMultipliedScore();

  constexpr bool const& __cordl_internal_get__invalidated() const;

  constexpr bool& __cordl_internal_get__invalidated();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter* const& __cordl_internal_get__maxScoreMultiplierCounter() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter*& __cordl_internal_get__maxScoreMultiplierCounter();

  constexpr ::GlobalNamespace::MissScoringElement_Pool* const& __cordl_internal_get__missScoringElementPool() const;

  constexpr ::GlobalNamespace::MissScoringElement_Pool*& __cordl_internal_get__missScoringElementPool();

  constexpr int32_t const& __cordl_internal_get__modifiedScore() const;

  constexpr int32_t& __cordl_internal_get__modifiedScore();

  constexpr int32_t const& __cordl_internal_get__multipliedScore() const;

  constexpr int32_t& __cordl_internal_get__multipliedScore();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr float_t const& __cordl_internal_get__prevMultiplierFromModifiers() const;

  constexpr float_t& __cordl_internal_get__prevMultiplierFromModifiers();

  constexpr ::GlobalNamespace::RecPlayBehaviour_State* const& __cordl_internal_get__recPlayState() const;

  constexpr ::GlobalNamespace::RecPlayBehaviour_State*& __cordl_internal_get__recPlayState();

  constexpr ::GlobalNamespace::ScoreMultiplierCounter* const& __cordl_internal_get__scoreMultiplierCounter() const;

  constexpr ::GlobalNamespace::ScoreMultiplierCounter*& __cordl_internal_get__scoreMultiplierCounter();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& __cordl_internal_get__scoringElementsToRemove() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __cordl_internal_get__scoringElementsToRemove();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& __cordl_internal_get__scoringElementsWithMultiplier() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __cordl_internal_get__scoringElementsWithMultiplier();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__sortedNoteTimesWithoutScoringElements() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__sortedNoteTimesWithoutScoringElements();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* const& __cordl_internal_get__sortedScoringElementsWithoutMultiplier() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __cordl_internal_get__sortedScoringElementsWithoutMultiplier();

  constexpr ::System::Action_2<int32_t, float_t>* const& __cordl_internal_get_multiplierDidChangeEvent() const;

  constexpr ::System::Action_2<int32_t, float_t>*& __cordl_internal_get_multiplierDidChangeEvent();

  constexpr ::System::Action_2<int32_t, int32_t>* const& __cordl_internal_get_scoreDidChangeEvent() const;

  constexpr ::System::Action_2<int32_t, int32_t>*& __cordl_internal_get_scoreDidChangeEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>* const& __cordl_internal_get_scoringForNoteFinishedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& __cordl_internal_get_scoringForNoteFinishedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>* const& __cordl_internal_get_scoringForNoteStartedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& __cordl_internal_get_scoringForNoteStartedEvent();

  constexpr void __cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value);

  constexpr void __cordl_internal_set__badCutScoringElementPool(::GlobalNamespace::BadCutScoringElement_Pool* value);

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter* value);

  constexpr void __cordl_internal_set__gameplayModifierParams(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__goodCutScoringElementPool(::GlobalNamespace::GoodCutScoringElement_Pool* value);

  constexpr void __cordl_internal_set__immediateMaxPossibleModifiedScore(int32_t value);

  constexpr void __cordl_internal_set__immediateMaxPossibleMultipliedScore(int32_t value);

  constexpr void __cordl_internal_set__invalidated(bool value);

  constexpr void __cordl_internal_set__maxScoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);

  constexpr void __cordl_internal_set__missScoringElementPool(::GlobalNamespace::MissScoringElement_Pool* value);

  constexpr void __cordl_internal_set__modifiedScore(int32_t value);

  constexpr void __cordl_internal_set__multipliedScore(int32_t value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  constexpr void __cordl_internal_set__prevMultiplierFromModifiers(float_t value);

  constexpr void __cordl_internal_set__recPlayState(::GlobalNamespace::RecPlayBehaviour_State* value);

  constexpr void __cordl_internal_set__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);

  constexpr void __cordl_internal_set__scoringElementsToRemove(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr void __cordl_internal_set__scoringElementsWithMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr void __cordl_internal_set__sortedNoteTimesWithoutScoringElements(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set__sortedScoringElementsWithoutMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr void __cordl_internal_set_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  constexpr void __cordl_internal_set_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr void __cordl_internal_set_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method .ctor, addr 0x3bef294, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_multiplierDidChangeEvent, addr 0x3bedbe4, size 0xb0, virtual true, abstract: false, final true
  inline void add_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_scoreDidChangeEvent, addr 0x3beda84, size 0xb0, virtual true, abstract: false, final true
  inline void add_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method add_scoringForNoteFinishedEvent, addr 0x3bedea4, size 0xb0, virtual true, abstract: false, final true
  inline void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method add_scoringForNoteStartedEvent, addr 0x3bedd44, size 0xb0, virtual true, abstract: false, final true
  inline void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method get_immediateMaxPossibleModifiedScore, addr 0x3bee024, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_immediateMaxPossibleModifiedScore();

  /// @brief Method get_immediateMaxPossibleMultipliedScore, addr 0x3bee014, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_immediateMaxPossibleMultipliedScore();

  /// @brief Method get_invalidated, addr 0x3bee004, size 0x8, virtual true, abstract: false, final true
  inline bool get_invalidated();

  /// @brief Method get_modifiedScore, addr 0x3bee01c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_modifiedScore();

  /// @brief Method get_multipliedScore, addr 0x3bee00c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_multipliedScore();

  /// @brief Convert to "::GlobalNamespace::IScoreController"
  constexpr ::GlobalNamespace::IScoreController* i___GlobalNamespace__IScoreController() noexcept;

  /// @brief Method remove_multiplierDidChangeEvent, addr 0x3bedc94, size 0xb0, virtual true, abstract: false, final true
  inline void remove_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_scoreDidChangeEvent, addr 0x3bedb34, size 0xb0, virtual true, abstract: false, final true
  inline void remove_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method remove_scoringForNoteFinishedEvent, addr 0x3bedf54, size 0xb0, virtual true, abstract: false, final true
  inline void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteStartedEvent, addr 0x3beddf4, size 0xb0, virtual true, abstract: false, final true
  inline void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreController(ScoreController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreController(ScoreController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4683 };

  /// @brief Field _gameplayModifiersModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _gameEnergyCounter, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IGameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _beatmapObjectManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _audioTimeSyncController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AudioTimeSyncController> ____audioTimeSyncController;

  /// @brief Field _recPlayState, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::RecPlayBehaviour_State* ____recPlayState;

  /// @brief Field _goodCutScoringElementPool, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GoodCutScoringElement_Pool* ____goodCutScoringElementPool;

  /// @brief Field _badCutScoringElementPool, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BadCutScoringElement_Pool* ____badCutScoringElementPool;

  /// @brief Field _missScoringElementPool, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MissScoringElement_Pool* ____missScoringElementPool;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field scoreDidChangeEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___scoreDidChangeEvent;

  /// @brief Field multiplierDidChangeEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_2<int32_t, float_t>* ___multiplierDidChangeEvent;

  /// @brief Field scoringForNoteStartedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ScoringElement*>* ___scoringForNoteStartedEvent;

  /// @brief Field scoringForNoteFinishedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ScoringElement*>* ___scoringForNoteFinishedEvent;

  /// @brief Field _gameplayModifierParams, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* ____gameplayModifierParams;

  /// @brief Field _modifiedScore, offset: 0x98, size: 0x4, def value: None
  int32_t ____modifiedScore;

  /// @brief Field _immediateMaxPossibleModifiedScore, offset: 0x9c, size: 0x4, def value: None
  int32_t ____immediateMaxPossibleModifiedScore;

  /// @brief Field _prevMultiplierFromModifiers, offset: 0xa0, size: 0x4, def value: None
  float_t ____prevMultiplierFromModifiers;

  /// @brief Field _multipliedScore, offset: 0xa4, size: 0x4, def value: None
  int32_t ____multipliedScore;

  /// @brief Field _immediateMaxPossibleMultipliedScore, offset: 0xa8, size: 0x4, def value: None
  int32_t ____immediateMaxPossibleMultipliedScore;

  /// @brief Field _invalidated, offset: 0xac, size: 0x1, def value: None
  bool ____invalidated;

  /// @brief Field _maxScoreMultiplierCounter, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter* ____maxScoreMultiplierCounter;

  /// @brief Field _scoreMultiplierCounter, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter* ____scoreMultiplierCounter;

  /// @brief Field _sortedNoteTimesWithoutScoringElements, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____sortedNoteTimesWithoutScoringElements;

  /// @brief Field _sortedScoringElementsWithoutMultiplier, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____sortedScoringElementsWithoutMultiplier;

  /// @brief Field _scoringElementsWithMultiplier, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____scoringElementsWithMultiplier;

  /// @brief Field _scoringElementsToRemove, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____scoringElementsToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScoreController, ____gameplayModifiersModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____gameEnergyCounter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____beatmapObjectManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____audioTimeSyncController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____recPlayState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____goodCutScoringElementPool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____badCutScoringElementPool) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____missScoringElementPool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____playerHeadAndObstacleInteraction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ___scoreDidChangeEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ___multiplierDidChangeEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ___scoringForNoteStartedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ___scoringForNoteFinishedEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____gameplayModifierParams) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____modifiedScore) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____immediateMaxPossibleModifiedScore) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____prevMultiplierFromModifiers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____multipliedScore) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____immediateMaxPossibleMultipliedScore) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____invalidated) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____maxScoreMultiplierCounter) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____scoreMultiplierCounter) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____sortedNoteTimesWithoutScoringElements) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____sortedScoringElementsWithoutMultiplier) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____scoringElementsWithMultiplier) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScoreController, ____scoringElementsToRemove) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreController, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreController*, "", "ScoreController");
