#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadInObstacleHapticEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadInObstacleHapticEffect)
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadInObstacleHapticEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HeadInObstacleHapticEffect);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeadInObstacleHapticEffect
class CORDL_TYPE HeadInObstacleHapticEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _gamePause, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause)) ::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayLevelSceneTransitionEvents,
                      put = __cordl_internal_set__gameplayLevelSceneTransitionEvents)) ::GlobalNamespace::GameplayLevelSceneTransitionEvents* _gameplayLevelSceneTransitionEvents;

  /// @brief Field _hapticFeedbackManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticFeedbackManager, put = __cordl_internal_set__hapticFeedbackManager)) ::UnityW<::GlobalNamespace::HapticFeedbackManager> _hapticFeedbackManager;

  /// @brief Field _headHapticPreset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__headHapticPreset, put = __cordl_internal_set__headHapticPreset)) ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> _headHapticPreset;

  /// @brief Field _isGamePaused, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isGamePaused, put = __cordl_internal_set__isGamePaused)) bool _isGamePaused;

  /// @brief Field _isLevelFinished, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__isLevelFinished, put = __cordl_internal_set__isLevelFinished)) bool _isLevelFinished;

  /// @brief Field _minimalHapticDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__minimalHapticDuration, put = __cordl_internal_set__minimalHapticDuration)) float_t _minimalHapticDuration;

  /// @brief Field _minimumTimeUntilHapticEnd, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumTimeUntilHapticEnd, put = __cordl_internal_set__minimumTimeUntilHapticEnd)) float_t _minimumTimeUntilHapticEnd;

  /// @brief Field _playerDataModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerHeadAndObstacleInteraction,
                      put = __cordl_internal_set__playerHeadAndObstacleInteraction)) ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>
      _playerHeadAndObstacleInteraction;

  /// @brief Field _wasHeadInWallLastFrame, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__wasHeadInWallLastFrame, put = __cordl_internal_set__wasHeadInWallLastFrame)) bool _wasHeadInWallLastFrame;

  /// @brief Method HandleAnyGameplayLevelDidFinish, addr 0x3b83e5c, size 0x14, virtual false, abstract: false, final false
  inline void HandleAnyGameplayLevelDidFinish();

  /// @brief Method HandleDidPauseEvent, addr 0x3b83e88, size 0x14, virtual false, abstract: false, final false
  inline void HandleDidPauseEvent();

  /// @brief Method HandleDidResumeEvent, addr 0x3b83e70, size 0x18, virtual false, abstract: false, final false
  inline void HandleDidResumeEvent();

  static inline ::GlobalNamespace::HeadInObstacleHapticEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b83be4, size 0x1f0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b839dc, size 0x208, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b83dd4, size 0x88, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IGamePause* const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* const& __cordl_internal_get__gameplayLevelSceneTransitionEvents() const;

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& __cordl_internal_get__gameplayLevelSceneTransitionEvents();

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& __cordl_internal_get__hapticFeedbackManager() const;

  constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& __cordl_internal_get__hapticFeedbackManager();

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& __cordl_internal_get__headHapticPreset() const;

  constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& __cordl_internal_get__headHapticPreset();

  constexpr bool const& __cordl_internal_get__isGamePaused() const;

  constexpr bool& __cordl_internal_get__isGamePaused();

  constexpr bool const& __cordl_internal_get__isLevelFinished() const;

  constexpr bool& __cordl_internal_get__isLevelFinished();

  constexpr float_t const& __cordl_internal_get__minimalHapticDuration() const;

  constexpr float_t& __cordl_internal_get__minimalHapticDuration();

  constexpr float_t const& __cordl_internal_get__minimumTimeUntilHapticEnd() const;

  constexpr float_t& __cordl_internal_get__minimumTimeUntilHapticEnd();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& __cordl_internal_get__playerHeadAndObstacleInteraction() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& __cordl_internal_get__playerHeadAndObstacleInteraction();

  constexpr bool const& __cordl_internal_get__wasHeadInWallLastFrame() const;

  constexpr bool& __cordl_internal_get__wasHeadInWallLastFrame();

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value);

  constexpr void __cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value);

  constexpr void __cordl_internal_set__headHapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value);

  constexpr void __cordl_internal_set__isGamePaused(bool value);

  constexpr void __cordl_internal_set__isLevelFinished(bool value);

  constexpr void __cordl_internal_set__minimalHapticDuration(float_t value);

  constexpr void __cordl_internal_set__minimumTimeUntilHapticEnd(float_t value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value);

  constexpr void __cordl_internal_set__wasHeadInWallLastFrame(bool value);

  /// @brief Method .ctor, addr 0x3b83e9c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadInObstacleHapticEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadInObstacleHapticEffect(HeadInObstacleHapticEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadInObstacleHapticEffect(HeadInObstacleHapticEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4225 };

  /// @brief Field kInvalidTime offset 0xffffffff size 0x4
  static constexpr float_t kInvalidTime{ static_cast<float_t>(-1.0f) };

  /// @brief Field _headHapticPreset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> ____headHapticPreset;

  /// @brief Field _minimalHapticDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____minimalHapticDuration;

  /// @brief Field _hapticFeedbackManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HapticFeedbackManager> ____hapticFeedbackManager;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> ____playerHeadAndObstacleInteraction;

  /// @brief Field _gamePause, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::GameplayLevelSceneTransitionEvents* ____gameplayLevelSceneTransitionEvents;

  /// @brief Field _playerDataModel, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _isGamePaused, offset: 0x58, size: 0x1, def value: None
  bool ____isGamePaused;

  /// @brief Field _isLevelFinished, offset: 0x59, size: 0x1, def value: None
  bool ____isLevelFinished;

  /// @brief Field _minimumTimeUntilHapticEnd, offset: 0x5c, size: 0x4, def value: None
  float_t ____minimumTimeUntilHapticEnd;

  /// @brief Field _wasHeadInWallLastFrame, offset: 0x60, size: 0x1, def value: None
  bool ____wasHeadInWallLastFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____headHapticPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____minimalHapticDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____hapticFeedbackManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____playerHeadAndObstacleInteraction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____gamePause) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____gameplayLevelSceneTransitionEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____playerDataModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____isGamePaused) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____isLevelFinished) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____minimumTimeUntilHapticEnd) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____wasHeadInWallLastFrame) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadInObstacleHapticEffect, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadInObstacleHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadInObstacleHapticEffect*, "", "HeadInObstacleHapticEffect");
