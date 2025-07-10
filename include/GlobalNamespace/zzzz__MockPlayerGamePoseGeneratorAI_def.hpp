#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerGamePoseGeneratorAI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlayerGamePoseGeneratorAI)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockObstacleData;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorAI;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlayerGamePoseGeneratorAI);
// Dependencies MockPlayerGamePoseGenerator, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlayerGamePoseGeneratorAI
class CORDL_TYPE MockPlayerGamePoseGeneratorAI : public ::GlobalNamespace::MockPlayerGamePoseGenerator {
public:
  // Declarations
  /// @brief Field _bombNoteIndex, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__bombNoteIndex, put = __cordl_internal_set__bombNoteIndex)) int32_t _bombNoteIndex;

  /// @brief Field _bombNotes, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotes, put = __cordl_internal_set__bombNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> _bombNotes;

  /// @brief Field _combo, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get__combo, put = __cordl_internal_set__combo)) int32_t _combo;

  /// @brief Field _fullCombo, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get__fullCombo, put = __cordl_internal_set__fullCombo)) bool _fullCombo;

  /// @brief Field _gameplayModifiers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _hasFinishedLevel, offset 0x115, size 0x1
  __declspec(property(get = __cordl_internal_get__hasFinishedLevel, put = __cordl_internal_set__hasFinishedLevel)) bool _hasFinishedLevel;

  /// @brief Field _isInited, offset 0x116, size 0x1
  __declspec(property(get = __cordl_internal_get__isInited, put = __cordl_internal_set__isInited)) bool _isInited;

  /// @brief Field _lastEventTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__lastEventTime, put = __cordl_internal_set__lastEventTime)) float_t _lastEventTime;

  /// @brief Field _lastHeadPose, offset 0x6c, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastHeadPose, put = __cordl_internal_set__lastHeadPose)) ::UnityEngine::Pose _lastHeadPose;

  /// @brief Field _lastKnowScore, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastKnowScore, put = __cordl_internal_set__lastKnowScore)) int32_t _lastKnowScore;

  /// @brief Field _lastLeftHandPose, offset 0x88, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastLeftHandPose, put = __cordl_internal_set__lastLeftHandPose)) ::UnityEngine::Pose _lastLeftHandPose;

  /// @brief Field _lastRightHandPose, offset 0xa4, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastRightHandPose, put = __cordl_internal_set__lastRightHandPose)) ::UnityEngine::Pose _lastRightHandPose;

  /// @brief Field _lastSongTime, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__lastSongTime, put = __cordl_internal_set__lastSongTime)) float_t _lastSongTime;

  /// @brief Field _leftNoteIndex, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get__leftNoteIndex, put = __cordl_internal_set__leftNoteIndex)) int32_t _leftNoteIndex;

  /// @brief Field _leftNotes, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__leftNotes, put = __cordl_internal_set__leftNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> _leftNotes;

  /// @brief Field _lineCount, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__lineCount, put = __cordl_internal_set__lineCount)) int32_t _lineCount;

  /// @brief Field _multiplier, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get__multiplier, put = __cordl_internal_set__multiplier)) int32_t _multiplier;

  /// @brief Field _nextLeftHitScore, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__nextLeftHitScore, put = __cordl_internal_set__nextLeftHitScore)) int32_t _nextLeftHitScore;

  /// @brief Field _nextRightHitScore, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get__nextRightHitScore, put = __cordl_internal_set__nextRightHitScore)) int32_t _nextRightHitScore;

  /// @brief Field _obstacleIndex, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleIndex, put = __cordl_internal_set__obstacleIndex)) int32_t _obstacleIndex;

  /// @brief Field _obstacles, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacles, put = __cordl_internal_set__obstacles)) ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>
      _obstacles;

  /// @brief Field _onSongFinished, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__onSongFinished, put = __cordl_internal_set__onSongFinished)) ::System::Action* _onSongFinished;

  /// @brief Field _prevLeftScore, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get__prevLeftScore, put = __cordl_internal_set__prevLeftScore)) int32_t _prevLeftScore;

  /// @brief Field _prevRightScore, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get__prevRightScore, put = __cordl_internal_set__prevRightScore)) int32_t _prevRightScore;

  /// @brief Field _rightNoteIndex, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get__rightNoteIndex, put = __cordl_internal_set__rightNoteIndex)) int32_t _rightNoteIndex;

  /// @brief Field _rightNotes, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightNotes, put = __cordl_internal_set__rightNotes)) ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>
      _rightNotes;

  /// @brief Field _score, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get__score, put = __cordl_internal_set__score)) int32_t _score;

  /// @brief Field _scoreCalculator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreCalculator, put = __cordl_internal_set__scoreCalculator)) ::GlobalNamespace::IMockPlayerScoreCalculator* _scoreCalculator;

  /// @brief Field _songStartTime, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songStartTime, put = __cordl_internal_set__songStartTime)) int64_t _songStartTime;

  /// @brief Field _timeScale, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__timeScale, put = __cordl_internal_set__timeScale)) float_t _timeScale;

  __declspec(property(get = get_songTime)) float_t songTime;

  /// @brief Method Blerp, addr 0x3c2dd08, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Blerp(::UnityEngine::Vector3 prevStart, ::UnityEngine::Vector3 prevEnd, ::UnityEngine::Vector3 currStart, ::UnityEngine::Vector3 currEnd, float_t t);

  /// @brief Method Dispose, addr 0x3c2b0b4, size 0x264, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetCutDirection, addr 0x3c2d9fc, size 0x2a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetCutDirection(::GlobalNamespace::NoteCutDirection cutDirection);

  /// @brief Method GetNotePosition, addr 0x3c2dca0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNotePosition(int32_t lineCount, ::GlobalNamespace::MockNoteData* noteData);

  /// @brief Method HandleNoteWasSpawned, addr 0x3c2e1ac, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable);

  /// @brief Method HandleObstacleWasSpawned, addr 0x3c2e384, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable);

  /// @brief Method HandleSliderWasSpawned, addr 0x3c2e55c, size 0x1d8, virtual false, abstract: false, final false
  inline void HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable);

  /// @brief Method Init, addr 0x3c2b318, size 0x404, virtual true, abstract: false, final false
  inline void Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::System::Action* onSongFinished);

  static inline ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                           ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator,
                                                                           bool leftHanded);

  /// @brief Method ProcessNotes, addr 0x3c2c0a4, size 0xfd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose ProcessNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> notes, ::UnityEngine::Vector3 handDirection,
                                          ::ByRef<int32_t> noteIndex, ::ByRef<int32_t> prevHitScore, ::ByRef<int32_t> nextHitScore,
                                          ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> bombs, ::ByRef<int32_t> bombIndex, int32_t lineCount, float_t songTime,
                                          ::ByRef<bool> wasHitOrMiss);

  /// @brief Method ProcessObstacles, addr 0x3c2d074, size 0x354, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose ProcessObstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> obstacles, ::ByRef<int32_t> obstacleIndex,
                                              int32_t lineCount, ::UnityEngine::Pose prevHeadPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose, float_t songTime);

  /// @brief Method SimulateFail, addr 0x3c2dff0, size 0x1bc, virtual true, abstract: false, final false
  inline void SimulateFail();

  /// @brief Method Tick, addr 0x3c2b71c, size 0x988, virtual true, abstract: false, final false
  inline void Tick();

  /// @brief Method UpdateScore, addr 0x3c2d3c8, size 0x634, virtual false, abstract: false, final false
  inline void UpdateScore(::ByRef<int32_t> currentScore, ::ByRef<int32_t> currentCombo, ::ByRef<int32_t> currentMultiplier, int32_t hitScore, int32_t lineCount, ::UnityEngine::Pose lastPose,
                          ::UnityEngine::Pose currentPose, float_t lastSongTime, float_t songTime, ::GlobalNamespace::MockNoteData* noteData, ::GlobalNamespace::MockNoteData* nextNoteData);

  constexpr int32_t const& __cordl_internal_get__bombNoteIndex() const;

  constexpr int32_t& __cordl_internal_get__bombNoteIndex();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__bombNotes() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__bombNotes();

  constexpr int32_t const& __cordl_internal_get__combo() const;

  constexpr int32_t& __cordl_internal_get__combo();

  constexpr bool const& __cordl_internal_get__fullCombo() const;

  constexpr bool& __cordl_internal_get__fullCombo();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr bool const& __cordl_internal_get__hasFinishedLevel() const;

  constexpr bool& __cordl_internal_get__hasFinishedLevel();

  constexpr bool const& __cordl_internal_get__isInited() const;

  constexpr bool& __cordl_internal_get__isInited();

  constexpr float_t const& __cordl_internal_get__lastEventTime() const;

  constexpr float_t& __cordl_internal_get__lastEventTime();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastHeadPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastHeadPose();

  constexpr int32_t const& __cordl_internal_get__lastKnowScore() const;

  constexpr int32_t& __cordl_internal_get__lastKnowScore();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastLeftHandPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastLeftHandPose();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastRightHandPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastRightHandPose();

  constexpr float_t const& __cordl_internal_get__lastSongTime() const;

  constexpr float_t& __cordl_internal_get__lastSongTime();

  constexpr int32_t const& __cordl_internal_get__leftNoteIndex() const;

  constexpr int32_t& __cordl_internal_get__leftNoteIndex();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__leftNotes() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__leftNotes();

  constexpr int32_t const& __cordl_internal_get__lineCount() const;

  constexpr int32_t& __cordl_internal_get__lineCount();

  constexpr int32_t const& __cordl_internal_get__multiplier() const;

  constexpr int32_t& __cordl_internal_get__multiplier();

  constexpr int32_t const& __cordl_internal_get__nextLeftHitScore() const;

  constexpr int32_t& __cordl_internal_get__nextLeftHitScore();

  constexpr int32_t const& __cordl_internal_get__nextRightHitScore() const;

  constexpr int32_t& __cordl_internal_get__nextRightHitScore();

  constexpr int32_t const& __cordl_internal_get__obstacleIndex() const;

  constexpr int32_t& __cordl_internal_get__obstacleIndex();

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> const& __cordl_internal_get__obstacles() const;

  constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>& __cordl_internal_get__obstacles();

  constexpr ::System::Action* const& __cordl_internal_get__onSongFinished() const;

  constexpr ::System::Action*& __cordl_internal_get__onSongFinished();

  constexpr int32_t const& __cordl_internal_get__prevLeftScore() const;

  constexpr int32_t& __cordl_internal_get__prevLeftScore();

  constexpr int32_t const& __cordl_internal_get__prevRightScore() const;

  constexpr int32_t& __cordl_internal_get__prevRightScore();

  constexpr int32_t const& __cordl_internal_get__rightNoteIndex() const;

  constexpr int32_t& __cordl_internal_get__rightNoteIndex();

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& __cordl_internal_get__rightNotes() const;

  constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& __cordl_internal_get__rightNotes();

  constexpr int32_t const& __cordl_internal_get__score() const;

  constexpr int32_t& __cordl_internal_get__score();

  constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* const& __cordl_internal_get__scoreCalculator() const;

  constexpr ::GlobalNamespace::IMockPlayerScoreCalculator*& __cordl_internal_get__scoreCalculator();

  constexpr int64_t const& __cordl_internal_get__songStartTime() const;

  constexpr int64_t& __cordl_internal_get__songStartTime();

  constexpr float_t const& __cordl_internal_get__timeScale() const;

  constexpr float_t& __cordl_internal_get__timeScale();

  constexpr void __cordl_internal_set__bombNoteIndex(int32_t value);

  constexpr void __cordl_internal_set__bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__combo(int32_t value);

  constexpr void __cordl_internal_set__fullCombo(bool value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__hasFinishedLevel(bool value);

  constexpr void __cordl_internal_set__isInited(bool value);

  constexpr void __cordl_internal_set__lastEventTime(float_t value);

  constexpr void __cordl_internal_set__lastHeadPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastKnowScore(int32_t value);

  constexpr void __cordl_internal_set__lastLeftHandPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastRightHandPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__lastSongTime(float_t value);

  constexpr void __cordl_internal_set__leftNoteIndex(int32_t value);

  constexpr void __cordl_internal_set__leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__lineCount(int32_t value);

  constexpr void __cordl_internal_set__multiplier(int32_t value);

  constexpr void __cordl_internal_set__nextLeftHitScore(int32_t value);

  constexpr void __cordl_internal_set__nextRightHitScore(int32_t value);

  constexpr void __cordl_internal_set__obstacleIndex(int32_t value);

  constexpr void __cordl_internal_set__obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> value);

  constexpr void __cordl_internal_set__onSongFinished(::System::Action* value);

  constexpr void __cordl_internal_set__prevLeftScore(int32_t value);

  constexpr void __cordl_internal_set__prevRightScore(int32_t value);

  constexpr void __cordl_internal_set__rightNoteIndex(int32_t value);

  constexpr void __cordl_internal_set__rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value);

  constexpr void __cordl_internal_set__score(int32_t value);

  constexpr void __cordl_internal_set__scoreCalculator(::GlobalNamespace::IMockPlayerScoreCalculator* value);

  constexpr void __cordl_internal_set__songStartTime(int64_t value);

  constexpr void __cordl_internal_set__timeScale(float_t value);

  /// @brief Method .ctor, addr 0x3c2ae40, size 0x274, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                    ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded);

  /// @brief Method get_songTime, addr 0x3c2ad78, size 0xc8, virtual false, abstract: false, final false
  inline float_t get_songTime();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlayerGamePoseGeneratorAI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorAI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlayerGamePoseGeneratorAI(MockPlayerGamePoseGeneratorAI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18115 };

  /// @brief Field _scoreCalculator, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IMockPlayerScoreCalculator* ____scoreCalculator;

  /// @brief Field _lastKnowScore, offset: 0x40, size: 0x4, def value: None
  int32_t ____lastKnowScore;

  /// @brief Field _songStartTime, offset: 0x48, size: 0x8, def value: None
  int64_t ____songStartTime;

  /// @brief Field _timeScale, offset: 0x50, size: 0x4, def value: None
  float_t ____timeScale;

  /// @brief Field _onSongFinished, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ____onSongFinished;

  /// @brief Field _gameplayModifiers, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _lastEventTime, offset: 0x68, size: 0x4, def value: None
  float_t ____lastEventTime;

  /// @brief Field _lastHeadPose, offset: 0x6c, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastHeadPose;

  /// @brief Field _lastLeftHandPose, offset: 0x88, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastLeftHandPose;

  /// @brief Field _lastRightHandPose, offset: 0xa4, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastRightHandPose;

  /// @brief Field _lastSongTime, offset: 0xc0, size: 0x4, def value: None
  float_t ____lastSongTime;

  /// @brief Field _lineCount, offset: 0xc4, size: 0x4, def value: None
  int32_t ____lineCount;

  /// @brief Field _leftNotes, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____leftNotes;

  /// @brief Field _rightNotes, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____rightNotes;

  /// @brief Field _bombNotes, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> ____bombNotes;

  /// @brief Field _obstacles, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> ____obstacles;

  /// @brief Field _leftNoteIndex, offset: 0xe8, size: 0x4, def value: None
  int32_t ____leftNoteIndex;

  /// @brief Field _rightNoteIndex, offset: 0xec, size: 0x4, def value: None
  int32_t ____rightNoteIndex;

  /// @brief Field _bombNoteIndex, offset: 0xf0, size: 0x4, def value: None
  int32_t ____bombNoteIndex;

  /// @brief Field _obstacleIndex, offset: 0xf4, size: 0x4, def value: None
  int32_t ____obstacleIndex;

  /// @brief Field _prevLeftScore, offset: 0xf8, size: 0x4, def value: None
  int32_t ____prevLeftScore;

  /// @brief Field _prevRightScore, offset: 0xfc, size: 0x4, def value: None
  int32_t ____prevRightScore;

  /// @brief Field _nextLeftHitScore, offset: 0x100, size: 0x4, def value: None
  int32_t ____nextLeftHitScore;

  /// @brief Field _nextRightHitScore, offset: 0x104, size: 0x4, def value: None
  int32_t ____nextRightHitScore;

  /// @brief Field _score, offset: 0x108, size: 0x4, def value: None
  int32_t ____score;

  /// @brief Field _combo, offset: 0x10c, size: 0x4, def value: None
  int32_t ____combo;

  /// @brief Field _multiplier, offset: 0x110, size: 0x4, def value: None
  int32_t ____multiplier;

  /// @brief Field _fullCombo, offset: 0x114, size: 0x1, def value: None
  bool ____fullCombo;

  /// @brief Field _hasFinishedLevel, offset: 0x115, size: 0x1, def value: None
  bool ____hasFinishedLevel;

  /// @brief Field _isInited, offset: 0x116, size: 0x1, def value: None
  bool ____isInited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____scoreCalculator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastKnowScore) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____songStartTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____timeScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____onSongFinished) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____gameplayModifiers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastEventTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastHeadPose) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastLeftHandPose) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastRightHandPose) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lastSongTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____lineCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____leftNotes) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____rightNotes) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____bombNotes) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____obstacles) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____leftNoteIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____rightNoteIndex) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____bombNoteIndex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____obstacleIndex) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____prevLeftScore) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____prevRightScore) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____nextLeftHitScore) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____nextRightHitScore) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____score) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____combo) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____multiplier) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____fullCombo) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____hasFinishedLevel) == 0x115, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlayerGamePoseGeneratorAI, ____isInited) == 0x116, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlayerGamePoseGeneratorAI, 0x118>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlayerGamePoseGeneratorAI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlayerGamePoseGeneratorAI*, "", "MockPlayerGamePoseGeneratorAI");
