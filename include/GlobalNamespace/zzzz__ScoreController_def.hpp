#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreController)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class __GoodCutScoringElement__Pool;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class ScoringElement;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class __BadCutScoringElement__Pool;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace GlobalNamespace {
class __MissScoringElement__Pool;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ScoreController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreController);
// Type: ::ScoreController
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5319))
// CS Name: ::ScoreController*
class CORDL_TYPE ScoreController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gameplayModifiersModel, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _gameplayModifiers, offset 0x20, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _beatmapObjectManager, offset 0x28, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _gameEnergyCounter, offset 0x30, size 0x8
  __declspec(property(get = __get__gameEnergyCounter, put = __set__gameEnergyCounter))::GlobalNamespace::IGameEnergyCounter* _gameEnergyCounter;

  /// @brief Field _audioTimeSyncController, offset 0x38, size 0x8
  __declspec(property(get = __get__audioTimeSyncController, put = __set__audioTimeSyncController))::GlobalNamespace::AudioTimeSyncController* _audioTimeSyncController;

  /// @brief Field _goodCutScoringElementPool, offset 0x40, size 0x8
  __declspec(property(get = __get__goodCutScoringElementPool, put = __set__goodCutScoringElementPool))::GlobalNamespace::__GoodCutScoringElement__Pool* _goodCutScoringElementPool;

  /// @brief Field _badCutScoringElementPool, offset 0x48, size 0x8
  __declspec(property(get = __get__badCutScoringElementPool, put = __set__badCutScoringElementPool))::GlobalNamespace::__BadCutScoringElement__Pool* _badCutScoringElementPool;

  /// @brief Field _missScoringElementPool, offset 0x50, size 0x8
  __declspec(property(get = __get__missScoringElementPool, put = __set__missScoringElementPool))::GlobalNamespace::__MissScoringElement__Pool* _missScoringElementPool;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x58, size 0x8
  __declspec(property(get = __get__playerHeadAndObstacleInteraction,
                      put = __set__playerHeadAndObstacleInteraction))::GlobalNamespace::PlayerHeadAndObstacleInteraction* _playerHeadAndObstacleInteraction;

  /// @brief Field scoreDidChangeEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_scoreDidChangeEvent, put = __set_scoreDidChangeEvent))::System::Action_2<int32_t, int32_t>* scoreDidChangeEvent;

  /// @brief Field multiplierDidChangeEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_multiplierDidChangeEvent, put = __set_multiplierDidChangeEvent))::System::Action_2<int32_t, float_t>* multiplierDidChangeEvent;

  /// @brief Field scoringForNoteStartedEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_scoringForNoteStartedEvent, put = __set_scoringForNoteStartedEvent))::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteStartedEvent;

  /// @brief Field scoringForNoteFinishedEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_scoringForNoteFinishedEvent, put = __set_scoringForNoteFinishedEvent))::System::Action_1<::GlobalNamespace::ScoringElement*>* scoringForNoteFinishedEvent;

  /// @brief Field _gameplayModifierParams, offset 0x80, size 0x8
  __declspec(property(get = __get__gameplayModifierParams,
                      put = __set__gameplayModifierParams))::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* _gameplayModifierParams;

  /// @brief Field _modifiedScore, offset 0x88, size 0x4
  __declspec(property(get = __get__modifiedScore, put = __set__modifiedScore)) int32_t _modifiedScore;

  /// @brief Field _multipliedScore, offset 0x8c, size 0x4
  __declspec(property(get = __get__multipliedScore, put = __set__multipliedScore)) int32_t _multipliedScore;

  /// @brief Field _immediateMaxPossibleMultipliedScore, offset 0x90, size 0x4
  __declspec(property(get = __get__immediateMaxPossibleMultipliedScore, put = __set__immediateMaxPossibleMultipliedScore)) int32_t _immediateMaxPossibleMultipliedScore;

  /// @brief Field _immediateMaxPossibleModifiedScore, offset 0x94, size 0x4
  __declspec(property(get = __get__immediateMaxPossibleModifiedScore, put = __set__immediateMaxPossibleModifiedScore)) int32_t _immediateMaxPossibleModifiedScore;

  /// @brief Field _prevMultiplierFromModifiers, offset 0x98, size 0x4
  __declspec(property(get = __get__prevMultiplierFromModifiers, put = __set__prevMultiplierFromModifiers)) float_t _prevMultiplierFromModifiers;

  /// @brief Field _maxScoreMultiplierCounter, offset 0xa0, size 0x8
  __declspec(property(get = __get__maxScoreMultiplierCounter, put = __set__maxScoreMultiplierCounter))::GlobalNamespace::ScoreMultiplierCounter* _maxScoreMultiplierCounter;

  /// @brief Field _scoreMultiplierCounter, offset 0xa8, size 0x8
  __declspec(property(get = __get__scoreMultiplierCounter, put = __set__scoreMultiplierCounter))::GlobalNamespace::ScoreMultiplierCounter* _scoreMultiplierCounter;

  /// @brief Field _sortedNoteTimesWithoutScoringElements, offset 0xb0, size 0x8
  __declspec(property(get = __get__sortedNoteTimesWithoutScoringElements,
                      put = __set__sortedNoteTimesWithoutScoringElements))::System::Collections::Generic::List_1<float_t>* _sortedNoteTimesWithoutScoringElements;

  /// @brief Field _sortedScoringElementsWithoutMultiplier, offset 0xb8, size 0x8
  __declspec(property(get = __get__sortedScoringElementsWithoutMultiplier,
                      put = __set__sortedScoringElementsWithoutMultiplier))::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _sortedScoringElementsWithoutMultiplier;

  /// @brief Field _scoringElementsWithMultiplier, offset 0xc0, size 0x8
  __declspec(property(get = __get__scoringElementsWithMultiplier,
                      put = __set__scoringElementsWithMultiplier))::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _scoringElementsWithMultiplier;

  /// @brief Field _scoringElementsToRemove, offset 0xc8, size 0x8
  __declspec(property(get = __get__scoringElementsToRemove, put = __set__scoringElementsToRemove))::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* _scoringElementsToRemove;

  __declspec(property(get = get_multipliedScore)) int32_t multipliedScore;

  __declspec(property(get = get_modifiedScore)) int32_t modifiedScore;

  __declspec(property(get = get_immediateMaxPossibleMultipliedScore)) int32_t immediateMaxPossibleMultipliedScore;

  __declspec(property(get = get_immediateMaxPossibleModifiedScore)) int32_t immediateMaxPossibleModifiedScore;

  /// @brief Convert operator to "::GlobalNamespace::IScoreController"
  constexpr operator ::GlobalNamespace::IScoreController*() noexcept;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::IGameEnergyCounter*& __get__gameEnergyCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameEnergyCounter*> const& __get__gameEnergyCounter() const;

  constexpr void __set__gameEnergyCounter(::GlobalNamespace::IGameEnergyCounter* value);

  constexpr ::GlobalNamespace::AudioTimeSyncController*& __get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& __get__audioTimeSyncController() const;

  constexpr void __set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value);

  constexpr ::GlobalNamespace::__GoodCutScoringElement__Pool*& __get__goodCutScoringElementPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GoodCutScoringElement__Pool*> const& __get__goodCutScoringElementPool() const;

  constexpr void __set__goodCutScoringElementPool(::GlobalNamespace::__GoodCutScoringElement__Pool* value);

  constexpr ::GlobalNamespace::__BadCutScoringElement__Pool*& __get__badCutScoringElementPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BadCutScoringElement__Pool*> const& __get__badCutScoringElementPool() const;

  constexpr void __set__badCutScoringElementPool(::GlobalNamespace::__BadCutScoringElement__Pool* value);

  constexpr ::GlobalNamespace::__MissScoringElement__Pool*& __get__missScoringElementPool();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissScoringElement__Pool*> const& __get__missScoringElementPool() const;

  constexpr void __set__missScoringElementPool(::GlobalNamespace::__MissScoringElement__Pool* value);

  constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& __get__playerHeadAndObstacleInteraction();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const& __get__playerHeadAndObstacleInteraction() const;

  constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value);

  constexpr ::System::Action_2<int32_t, int32_t>*& __get_scoreDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, int32_t>*> const& __get_scoreDidChangeEvent() const;

  constexpr void __set_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  constexpr ::System::Action_2<int32_t, float_t>*& __get_multiplierDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<int32_t, float_t>*> const& __get_multiplierDidChangeEvent() const;

  constexpr void __set_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& __get_scoringForNoteStartedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ScoringElement*>*> const& __get_scoringForNoteStartedEvent() const;

  constexpr void __set_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::ScoringElement*>*& __get_scoringForNoteFinishedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ScoringElement*>*> const& __get_scoringForNoteFinishedEvent() const;

  constexpr void __set_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& __get__gameplayModifierParams();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get__gameplayModifierParams() const;

  constexpr void __set__gameplayModifierParams(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value);

  constexpr int32_t& __get__modifiedScore();

  constexpr int32_t const& __get__modifiedScore() const;

  constexpr void __set__modifiedScore(int32_t value);

  constexpr int32_t& __get__multipliedScore();

  constexpr int32_t const& __get__multipliedScore() const;

  constexpr void __set__multipliedScore(int32_t value);

  constexpr int32_t& __get__immediateMaxPossibleMultipliedScore();

  constexpr int32_t const& __get__immediateMaxPossibleMultipliedScore() const;

  constexpr void __set__immediateMaxPossibleMultipliedScore(int32_t value);

  constexpr int32_t& __get__immediateMaxPossibleModifiedScore();

  constexpr int32_t const& __get__immediateMaxPossibleModifiedScore() const;

  constexpr void __set__immediateMaxPossibleModifiedScore(int32_t value);

  constexpr float_t& __get__prevMultiplierFromModifiers();

  constexpr float_t const& __get__prevMultiplierFromModifiers() const;

  constexpr void __set__prevMultiplierFromModifiers(float_t value);

  constexpr ::GlobalNamespace::ScoreMultiplierCounter*& __get__maxScoreMultiplierCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScoreMultiplierCounter*> const& __get__maxScoreMultiplierCounter() const;

  constexpr void __set__maxScoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);

  constexpr ::GlobalNamespace::ScoreMultiplierCounter*& __get__scoreMultiplierCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScoreMultiplierCounter*> const& __get__scoreMultiplierCounter() const;

  constexpr void __set__scoreMultiplierCounter(::GlobalNamespace::ScoreMultiplierCounter* value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get__sortedNoteTimesWithoutScoringElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get__sortedNoteTimesWithoutScoringElements() const;

  constexpr void __set__sortedNoteTimesWithoutScoringElements(::System::Collections::Generic::List_1<float_t>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __get__sortedScoringElementsWithoutMultiplier();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*> const& __get__sortedScoringElementsWithoutMultiplier() const;

  constexpr void __set__sortedScoringElementsWithoutMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __get__scoringElementsWithMultiplier();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*> const& __get__scoringElementsWithMultiplier() const;

  constexpr void __set__scoringElementsWithMultiplier(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*& __get__scoringElementsToRemove();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>*> const& __get__scoringElementsToRemove() const;

  constexpr void __set__scoringElementsToRemove(::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method add_scoreDidChangeEvent addr 0x2266324 size 0xb0 virtual true final true
  inline void add_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method remove_scoreDidChangeEvent addr 0x22663d4 size 0xb0 virtual true final true
  inline void remove_scoreDidChangeEvent(::System::Action_2<int32_t, int32_t>* value);

  /// @brief Method add_multiplierDidChangeEvent addr 0x2266484 size 0xb0 virtual true final true
  inline void add_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method remove_multiplierDidChangeEvent addr 0x2266534 size 0xb0 virtual true final true
  inline void remove_multiplierDidChangeEvent(::System::Action_2<int32_t, float_t>* value);

  /// @brief Method add_scoringForNoteStartedEvent addr 0x22665e4 size 0xb0 virtual true final true
  inline void add_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteStartedEvent addr 0x2266694 size 0xb0 virtual true final true
  inline void remove_scoringForNoteStartedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method add_scoringForNoteFinishedEvent addr 0x2266744 size 0xb0 virtual true final true
  inline void add_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method remove_scoringForNoteFinishedEvent addr 0x22667f4 size 0xb0 virtual true final true
  inline void remove_scoringForNoteFinishedEvent(::System::Action_1<::GlobalNamespace::ScoringElement*>* value);

  /// @brief Method get_multipliedScore addr 0x22668a4 size 0x8 virtual true final true
  inline int32_t get_multipliedScore();

  /// @brief Method get_modifiedScore addr 0x22668ac size 0x8 virtual true final true
  inline int32_t get_modifiedScore();

  /// @brief Method get_immediateMaxPossibleMultipliedScore addr 0x22668b4 size 0x8 virtual true final true
  inline int32_t get_immediateMaxPossibleMultipliedScore();

  /// @brief Method get_immediateMaxPossibleModifiedScore addr 0x22668bc size 0x8 virtual true final true
  inline int32_t get_immediateMaxPossibleModifiedScore();

  /// @brief Method SetEnabled addr 0x22668c4 size 0xc virtual true final true
  inline void SetEnabled(bool enabled);

  /// @brief Method Start addr 0x22668d0 size 0x24c virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2266b1c size 0x1e8 virtual false final false
  inline void OnDestroy();

  /// @brief Method LateUpdate addr 0x2266d04 size 0x7ac virtual false final false
  inline void LateUpdate();

  /// @brief Method HandleNoteWasSpawned addr 0x2267780 size 0x9c virtual false final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasCut addr 0x226781c size 0x178 virtual false final false
  inline void HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  /// @brief Method HandleNoteWasMissed addr 0x2267a50 size 0x10c virtual false final false
  inline void HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandlePlayerHeadDidEnterObstacles addr 0x2267ba8 size 0x88 virtual false final false
  inline void HandlePlayerHeadDidEnterObstacles();

  /// @brief Method DespawnScoringElement addr 0x22675f8 size 0x188 virtual false final false
  inline void DespawnScoringElement(::GlobalNamespace::ScoringElement* scoringElement);

  static inline ::GlobalNamespace::ScoreController* New_ctor();

  /// @brief Method .ctor addr 0x2267c30 size 0x174 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreController(ScoreController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreController(ScoreController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreController();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _gameplayModifiers, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _beatmapObjectManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _gameEnergyCounter, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IGameEnergyCounter* ____gameEnergyCounter;

  /// @brief Field _audioTimeSyncController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AudioTimeSyncController* ____audioTimeSyncController;

  /// @brief Field _goodCutScoringElementPool, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__GoodCutScoringElement__Pool* ____goodCutScoringElementPool;

  /// @brief Field _badCutScoringElementPool, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__BadCutScoringElement__Pool* ____badCutScoringElementPool;

  /// @brief Field _missScoringElementPool, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__MissScoringElement__Pool* ____missScoringElementPool;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeadAndObstacleInteraction* ____playerHeadAndObstacleInteraction;

  /// @brief Field scoreDidChangeEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<int32_t, int32_t>* ___scoreDidChangeEvent;

  /// @brief Field multiplierDidChangeEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_2<int32_t, float_t>* ___multiplierDidChangeEvent;

  /// @brief Field scoringForNoteStartedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ScoringElement*>* ___scoringForNoteStartedEvent;

  /// @brief Field scoringForNoteFinishedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ScoringElement*>* ___scoringForNoteFinishedEvent;

  /// @brief Field _gameplayModifierParams, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* ____gameplayModifierParams;

  /// @brief Field _modifiedScore, offset: 0x88, size: 0x4, def value: None
  int32_t ____modifiedScore;

  /// @brief Field _multipliedScore, offset: 0x8c, size: 0x4, def value: None
  int32_t ____multipliedScore;

  /// @brief Field _immediateMaxPossibleMultipliedScore, offset: 0x90, size: 0x4, def value: None
  int32_t ____immediateMaxPossibleMultipliedScore;

  /// @brief Field _immediateMaxPossibleModifiedScore, offset: 0x94, size: 0x4, def value: None
  int32_t ____immediateMaxPossibleModifiedScore;

  /// @brief Field _prevMultiplierFromModifiers, offset: 0x98, size: 0x4, def value: None
  float_t ____prevMultiplierFromModifiers;

  /// @brief Field _maxScoreMultiplierCounter, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter* ____maxScoreMultiplierCounter;

  /// @brief Field _scoreMultiplierCounter, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::ScoreMultiplierCounter* ____scoreMultiplierCounter;

  /// @brief Field _sortedNoteTimesWithoutScoringElements, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____sortedNoteTimesWithoutScoringElements;

  /// @brief Field _sortedScoringElementsWithoutMultiplier, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____sortedScoringElementsWithoutMultiplier;

  /// @brief Field _scoringElementsWithMultiplier, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____scoringElementsWithMultiplier;

  /// @brief Field _scoringElementsToRemove, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ScoringElement*>* ____scoringElementsToRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreController, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreController*, "", "ScoreController");
