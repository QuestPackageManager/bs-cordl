#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGeneratorAI)
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Pose;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MockObstacleData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorAI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGeneratorAI);
// Type: ::MockPlayerGamePoseGeneratorAI
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 271, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15499)), TypeDefinitionIndex(TypeDefinitionIndex(9985))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15500))
// CS Name: ::MockPlayerGamePoseGeneratorAI*
class CORDL_TYPE MockPlayerGamePoseGeneratorAI : public ::GlobalNamespace::MockPlayerGamePoseGenerator {
public:
  // Declarations
  /// @brief Field _scoreCalculator, offset 0x38, size 0x8
  __declspec(property(get = __get__scoreCalculator, put = __set__scoreCalculator))::GlobalNamespace::IMockPlayerScoreCalculator* _scoreCalculator;

  /// @brief Field _lastKnowScore, offset 0x40, size 0x4
  __declspec(property(get = __get__lastKnowScore, put = __set__lastKnowScore)) int32_t _lastKnowScore;

  /// @brief Field _songStartTime, offset 0x44, size 0x4
  __declspec(property(get = __get__songStartTime, put = __set__songStartTime)) float_t _songStartTime;

  /// @brief Field _timeScale, offset 0x48, size 0x4
  __declspec(property(get = __get__timeScale, put = __set__timeScale)) float_t _timeScale;

  /// @brief Field _onSongFinished, offset 0x50, size 0x8
  __declspec(property(get = __get__onSongFinished, put = __set__onSongFinished))::System::Action* _onSongFinished;

  /// @brief Field _gameplayModifiers, offset 0x58, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _lastEventTime, offset 0x60, size 0x4
  __declspec(property(get = __get__lastEventTime, put = __set__lastEventTime)) float_t _lastEventTime;

  /// @brief Field _lastHeadPose, offset 0x64, size 0x1c
  __declspec(property(get = __get__lastHeadPose, put = __set__lastHeadPose))::UnityEngine::Pose _lastHeadPose;

  /// @brief Field _lastLeftHandPose, offset 0x80, size 0x1c
  __declspec(property(get = __get__lastLeftHandPose, put = __set__lastLeftHandPose))::UnityEngine::Pose _lastLeftHandPose;

  /// @brief Field _lastRightHandPose, offset 0x9c, size 0x1c
  __declspec(property(get = __get__lastRightHandPose, put = __set__lastRightHandPose))::UnityEngine::Pose _lastRightHandPose;

  /// @brief Field _lastSongTime, offset 0xb8, size 0x4
  __declspec(property(get = __get__lastSongTime, put = __set__lastSongTime)) float_t _lastSongTime;

  /// @brief Field _lineCount, offset 0xbc, size 0x4
  __declspec(property(get = __get__lineCount, put = __set__lineCount)) int32_t _lineCount;

  /// @brief Field _leftNotes, offset 0xc0, size 0x8
  __declspec(property(get = __get__leftNotes, put = __set__leftNotes))::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> _leftNotes;

  /// @brief Field _rightNotes, offset 0xc8, size 0x8
  __declspec(property(get = __get__rightNotes, put = __set__rightNotes))::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> _rightNotes;

  /// @brief Field _bombNotes, offset 0xd0, size 0x8
  __declspec(property(get = __get__bombNotes, put = __set__bombNotes))::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> _bombNotes;

  /// @brief Field _obstacles, offset 0xd8, size 0x8
  __declspec(property(get = __get__obstacles, put = __set__obstacles))::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> _obstacles;

  /// @brief Field _leftNoteIndex, offset 0xe0, size 0x4
  __declspec(property(get = __get__leftNoteIndex, put = __set__leftNoteIndex)) int32_t _leftNoteIndex;

  /// @brief Field _rightNoteIndex, offset 0xe4, size 0x4
  __declspec(property(get = __get__rightNoteIndex, put = __set__rightNoteIndex)) int32_t _rightNoteIndex;

  /// @brief Field _bombNoteIndex, offset 0xe8, size 0x4
  __declspec(property(get = __get__bombNoteIndex, put = __set__bombNoteIndex)) int32_t _bombNoteIndex;

  /// @brief Field _obstacleIndex, offset 0xec, size 0x4
  __declspec(property(get = __get__obstacleIndex, put = __set__obstacleIndex)) int32_t _obstacleIndex;

  /// @brief Field _prevLeftScore, offset 0xf0, size 0x4
  __declspec(property(get = __get__prevLeftScore, put = __set__prevLeftScore)) int32_t _prevLeftScore;

  /// @brief Field _prevRightScore, offset 0xf4, size 0x4
  __declspec(property(get = __get__prevRightScore, put = __set__prevRightScore)) int32_t _prevRightScore;

  /// @brief Field _nextLeftHitScore, offset 0xf8, size 0x4
  __declspec(property(get = __get__nextLeftHitScore, put = __set__nextLeftHitScore)) int32_t _nextLeftHitScore;

  /// @brief Field _nextRightHitScore, offset 0xfc, size 0x4
  __declspec(property(get = __get__nextRightHitScore, put = __set__nextRightHitScore)) int32_t _nextRightHitScore;

  /// @brief Field _score, offset 0x100, size 0x4
  __declspec(property(get = __get__score, put = __set__score)) int32_t _score;

  /// @brief Field _combo, offset 0x104, size 0x4
  __declspec(property(get = __get__combo, put = __set__combo)) int32_t _combo;

  /// @brief Field _multiplier, offset 0x108, size 0x4
  __declspec(property(get = __get__multiplier, put = __set__multiplier)) int32_t _multiplier;

  /// @brief Field _fullCombo, offset 0x10c, size 0x1
  __declspec(property(get = __get__fullCombo, put = __set__fullCombo)) bool _fullCombo;

  /// @brief Field _hasFinishedLevel, offset 0x10d, size 0x1
  __declspec(property(get = __get__hasFinishedLevel, put = __set__hasFinishedLevel)) bool _hasFinishedLevel;

  /// @brief Field _isInited, offset 0x10e, size 0x1
  __declspec(property(get = __get__isInited, put = __set__isInited)) bool _isInited;

  constexpr ::GlobalNamespace::IMockPlayerScoreCalculator*& __get__scoreCalculator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMockPlayerScoreCalculator*> const& __get__scoreCalculator() const;

  constexpr void __set__scoreCalculator(::GlobalNamespace::IMockPlayerScoreCalculator* value);

  constexpr int32_t& __get__lastKnowScore();

  constexpr int32_t const& __get__lastKnowScore() const;

  constexpr void __set__lastKnowScore(int32_t value);

  constexpr float_t& __get__songStartTime();

  constexpr float_t const& __get__songStartTime() const;

  constexpr void __set__songStartTime(float_t value);

  constexpr float_t& __get__timeScale();

  constexpr float_t const& __get__timeScale() const;

  constexpr void __set__timeScale(float_t value);

  constexpr ::System::Action*& __get__onSongFinished();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get__onSongFinished() const;

  constexpr void __set__onSongFinished(::System::Action* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr float_t& __get__lastEventTime();

  constexpr float_t const& __get__lastEventTime() const;

  constexpr void __set__lastEventTime(float_t value);

  constexpr ::UnityEngine::Pose& __get__lastHeadPose();

  constexpr ::UnityEngine::Pose const& __get__lastHeadPose() const;

  constexpr void __set__lastHeadPose(::UnityEngine::Pose value);

  constexpr ::UnityEngine::Pose& __get__lastLeftHandPose();

  constexpr ::UnityEngine::Pose const& __get__lastLeftHandPose() const;

  constexpr void __set__lastLeftHandPose(::UnityEngine::Pose value);

  constexpr ::UnityEngine::Pose& __get__lastRightHandPose();

  constexpr ::UnityEngine::Pose const& __get__lastRightHandPose() const;

  constexpr void __set__lastRightHandPose(::UnityEngine::Pose value);

  constexpr float_t& __get__lastSongTime();

  constexpr float_t const& __get__lastSongTime() const;

  constexpr void __set__lastSongTime(float_t value);

  constexpr int32_t& __get__lineCount();

  constexpr int32_t const& __get__lineCount() const;

  constexpr void __set__lineCount(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __get__leftNotes();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __get__leftNotes() const;

  constexpr void __set__leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __get__rightNotes();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __get__rightNotes() const;

  constexpr void __set__rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __get__bombNotes();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __get__bombNotes() const;

  constexpr void __set__bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>& __get__obstacles();

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> const& __get__obstacles() const;

  constexpr void __set__obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> value);

  constexpr int32_t& __get__leftNoteIndex();

  constexpr int32_t const& __get__leftNoteIndex() const;

  constexpr void __set__leftNoteIndex(int32_t value);

  constexpr int32_t& __get__rightNoteIndex();

  constexpr int32_t const& __get__rightNoteIndex() const;

  constexpr void __set__rightNoteIndex(int32_t value);

  constexpr int32_t& __get__bombNoteIndex();

  constexpr int32_t const& __get__bombNoteIndex() const;

  constexpr void __set__bombNoteIndex(int32_t value);

  constexpr int32_t& __get__obstacleIndex();

  constexpr int32_t const& __get__obstacleIndex() const;

  constexpr void __set__obstacleIndex(int32_t value);

  constexpr int32_t& __get__prevLeftScore();

  constexpr int32_t const& __get__prevLeftScore() const;

  constexpr void __set__prevLeftScore(int32_t value);

  constexpr int32_t& __get__prevRightScore();

  constexpr int32_t const& __get__prevRightScore() const;

  constexpr void __set__prevRightScore(int32_t value);

  constexpr int32_t& __get__nextLeftHitScore();

  constexpr int32_t const& __get__nextLeftHitScore() const;

  constexpr void __set__nextLeftHitScore(int32_t value);

  constexpr int32_t& __get__nextRightHitScore();

  constexpr int32_t const& __get__nextRightHitScore() const;

  constexpr void __set__nextRightHitScore(int32_t value);

  constexpr int32_t& __get__score();

  constexpr int32_t const& __get__score() const;

  constexpr void __set__score(int32_t value);

  constexpr int32_t& __get__combo();

  constexpr int32_t const& __get__combo() const;

  constexpr void __set__combo(int32_t value);

  constexpr int32_t& __get__multiplier();

  constexpr int32_t const& __get__multiplier() const;

  constexpr void __set__multiplier(int32_t value);

  constexpr bool& __get__fullCombo();

  constexpr bool const& __get__fullCombo() const;

  constexpr void __set__fullCombo(bool value);

  constexpr bool& __get__hasFinishedLevel();

  constexpr bool const& __get__hasFinishedLevel() const;

  constexpr void __set__hasFinishedLevel(bool value);

  constexpr bool& __get__isInited();

  constexpr bool const& __get__isInited() const;

  constexpr void __set__isInited(bool value);

  static inline ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                           ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator,
                                                                           bool leftHanded);

  /// @brief Method .ctor addr 0x228c148 size 0x278 virtual false final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                    ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded);

  /// @brief Method Dispose addr 0x228c3c0 size 0x268 virtual true final false
  inline void Dispose();

  /// @brief Method Init addr 0x228c628 size 0x46c virtual true final false
  inline void Init(float_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Action* onSongFinished);

  /// @brief Method Tick addr 0x228ca94 size 0x9c0 virtual true final false
  inline void Tick();

  /// @brief Method GetCutDirection addr 0x228ed34 size 0x2a4 virtual false final false
  static inline ::UnityEngine::Vector3 GetCutDirection(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method GetNotePosition addr 0x228efd8 size 0x68 virtual false final false
  static inline ::UnityEngine::Vector3 GetNotePosition(int32_t lineCount, ::GlobalNamespace::MockNoteData* noteData);

  /// @brief Method Blerp addr 0x228f040 size 0xc4 virtual false final false
  static inline ::UnityEngine::Vector3 Blerp(::UnityEngine::Vector3 prevStart, ::UnityEngine::Vector3 prevEnd, ::UnityEngine::Vector3 currStart, ::UnityEngine::Vector3 currEnd, float_t t);

  /// @brief Method ProcessNotes addr 0x228d454 size 0xfe4 virtual false final false
  inline ::UnityEngine::Pose ProcessNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> notes, ::UnityEngine::Vector3 handDirection, ByRef<int32_t> noteIndex,
                                          ByRef<int32_t> prevHitScore, ByRef<int32_t> nextHitScore, ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> bombs,
                                          ByRef<int32_t> bombIndex, int32_t lineCount, float_t songTime, ByRef<bool> wasHitOrMiss);

  /// @brief Method ProcessObstacles addr 0x228e438 size 0x2d4 virtual false final false
  inline ::UnityEngine::Pose ProcessObstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> obstacles, ByRef<int32_t> obstacleIndex, int32_t lineCount,
                                              ::UnityEngine::Pose prevHeadPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose, float_t songTime);

  /// @brief Method UpdateScore addr 0x228e70c size 0x628 virtual false final false
  inline void UpdateScore(ByRef<int32_t> currentScore, ByRef<int32_t> currentCombo, ByRef<int32_t> currentMultiplier, int32_t hitScore, int32_t lineCount, ::UnityEngine::Pose lastPose,
                          ::UnityEngine::Pose currentPose, float_t lastSongTime, float_t songTime, ::GlobalNamespace::MockNoteData* noteData, ::GlobalNamespace::MockNoteData* nextNoteData);

  /// @brief Method SimulateFail addr 0x228f328 size 0x1c0 virtual true final false
  inline void SimulateFail();

  /// @brief Method HandleNoteWasSpawned addr 0x228f4e8 size 0x23c virtual false final false
  inline void HandleNoteWasSpawned(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method HandleObstacleWasSpawned addr 0x228f724 size 0x23c virtual false final false
  inline void HandleObstacleWasSpawned(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method HandleSliderWasSpawned addr 0x228f960 size 0x23c virtual false final false
  inline void HandleSliderWasSpawned(::StringW userId, float_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerGamePoseGeneratorAI();

public:
  /// @brief Field _scoreCalculator, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMockPlayerScoreCalculator* ____scoreCalculator;

  /// @brief Field _lastKnowScore, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastKnowScore;

  /// @brief Field _songStartTime, offset: 0x44, size: 0x4, def value: None
  float_t ____songStartTime;

  /// @brief Field _timeScale, offset: 0x48, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _onSongFinished, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ____onSongFinished;

  /// @brief Field _gameplayModifiers, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _lastEventTime, offset: 0x60, size: 0x4, def value: None
  float_t ____lastEventTime;

  /// @brief Field _lastHeadPose, offset: 0x64, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastHeadPose;

  /// @brief Field _lastLeftHandPose, offset: 0x80, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastLeftHandPose;

  /// @brief Field _lastRightHandPose, offset: 0x9c, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastRightHandPose;

  /// @brief Field _lastSongTime, offset: 0xb8, size: 0x4, def value: None
  float_t ____lastSongTime;

  /// @brief Field _lineCount, offset: 0xbc, size: 0x4, def value: None
  int32_t ____lineCount;

  /// @brief Field _leftNotes, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____leftNotes;

  /// @brief Field _rightNotes, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____rightNotes;

  /// @brief Field _bombNotes, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____bombNotes;

  /// @brief Field _obstacles, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> ____obstacles;

  /// @brief Field _leftNoteIndex, offset: 0xe0, size: 0x4, def value: None
  int32_t ____leftNoteIndex;

  /// @brief Field _rightNoteIndex, offset: 0xe4, size: 0x4, def value: None
  int32_t ____rightNoteIndex;

  /// @brief Field _bombNoteIndex, offset: 0xe8, size: 0x4, def value: None
  int32_t ____bombNoteIndex;

  /// @brief Field _obstacleIndex, offset: 0xec, size: 0x4, def value: None
  int32_t ____obstacleIndex;

  /// @brief Field _prevLeftScore, offset: 0xf0, size: 0x4, def value: None
  int32_t ____prevLeftScore;

  /// @brief Field _prevRightScore, offset: 0xf4, size: 0x4, def value: None
  int32_t ____prevRightScore;

  /// @brief Field _nextLeftHitScore, offset: 0xf8, size: 0x4, def value: None
  int32_t ____nextLeftHitScore;

  /// @brief Field _nextRightHitScore, offset: 0xfc, size: 0x4, def value: None
  int32_t ____nextRightHitScore;

  /// @brief Field _score, offset: 0x100, size: 0x4, def value: None
  int32_t ____score;

  /// @brief Field _combo, offset: 0x104, size: 0x4, def value: None
  int32_t ____combo;

  /// @brief Field _multiplier, offset: 0x108, size: 0x4, def value: None
  int32_t ____multiplier;

  /// @brief Field _fullCombo, offset: 0x10c, size: 0x1, def value: None
  bool ____fullCombo;

  /// @brief Field _hasFinishedLevel, offset: 0x10d, size: 0x1, def value: None
  bool ____hasFinishedLevel;

  /// @brief Field _isInited, offset: 0x10e, size: 0x1, def value: None
  bool ____isInited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGeneratorAI, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____scoreCalculator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastKnowScore) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____songStartTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____timeScale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____onSongFinished) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____gameplayModifiers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastEventTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastHeadPose) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastLeftHandPose) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastRightHandPose) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastSongTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lineCount) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____leftNotes) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____rightNotes) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____bombNotes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____obstacles) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____leftNoteIndex) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____rightNoteIndex) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____bombNoteIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____obstacleIndex) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____prevLeftScore) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____prevRightScore) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____nextLeftHitScore) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____nextRightHitScore) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____score) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____combo) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____multiplier) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____fullCombo) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____hasFinishedLevel) == 0x10d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____isInited) == 0x10e, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGeneratorAI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGeneratorAI*, "", "MockPlayerGamePoseGeneratorAI");
