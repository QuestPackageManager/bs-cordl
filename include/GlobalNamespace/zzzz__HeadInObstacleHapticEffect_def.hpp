#pragma once
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
// Type: ::HeadInObstacleHapticEffect
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4863))
// CS Name: ::HeadInObstacleHapticEffect*
class CORDL_TYPE HeadInObstacleHapticEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _headHapticPreset, offset 0x18, size 0x8
  __declspec(property(get = __get__headHapticPreset, put = __set__headHapticPreset))::Libraries::HM::HMLib::VR::HapticPresetSO* _headHapticPreset;

  /// @brief Field _minimalHapticDuration, offset 0x20, size 0x4
  __declspec(property(get = __get__minimalHapticDuration, put = __set__minimalHapticDuration)) float_t _minimalHapticDuration;

  /// @brief Field _hapticFeedbackManager, offset 0x28, size 0x8
  __declspec(property(get = __get__hapticFeedbackManager, put = __set__hapticFeedbackManager))::GlobalNamespace::HapticFeedbackManager* _hapticFeedbackManager;

  /// @brief Field _playerHeadAndObstacleInteraction, offset 0x30, size 0x8
  __declspec(property(get = __get__playerHeadAndObstacleInteraction,
                      put = __set__playerHeadAndObstacleInteraction))::GlobalNamespace::PlayerHeadAndObstacleInteraction* _playerHeadAndObstacleInteraction;

  /// @brief Field _gamePause, offset 0x38, size 0x8
  __declspec(property(get = __get__gamePause, put = __set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset 0x40, size 0x8
  __declspec(property(get = __get__gameplayLevelSceneTransitionEvents,
                      put = __set__gameplayLevelSceneTransitionEvents))::GlobalNamespace::GameplayLevelSceneTransitionEvents* _gameplayLevelSceneTransitionEvents;

  /// @brief Field _playerDataModel, offset 0x48, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _isGamePaused, offset 0x50, size 0x1
  __declspec(property(get = __get__isGamePaused, put = __set__isGamePaused)) bool _isGamePaused;

  /// @brief Field _isLevelFinished, offset 0x51, size 0x1
  __declspec(property(get = __get__isLevelFinished, put = __set__isLevelFinished)) bool _isLevelFinished;

  /// @brief Field _minimumTimeUntilHapticEnd, offset 0x54, size 0x4
  __declspec(property(get = __get__minimumTimeUntilHapticEnd, put = __set__minimumTimeUntilHapticEnd)) float_t _minimumTimeUntilHapticEnd;

  /// @brief Field _wasHeadInWallLastFrame, offset 0x58, size 0x1
  __declspec(property(get = __get__wasHeadInWallLastFrame, put = __set__wasHeadInWallLastFrame)) bool _wasHeadInWallLastFrame;

  constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& __get__headHapticPreset();

  constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& __get__headHapticPreset() const;

  constexpr void __set__headHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value);

  constexpr float_t& __get__minimalHapticDuration();

  constexpr float_t const& __get__minimalHapticDuration() const;

  constexpr void __set__minimalHapticDuration(float_t value);

  constexpr ::GlobalNamespace::HapticFeedbackManager*& __get__hapticFeedbackManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& __get__hapticFeedbackManager() const;

  constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value);

  constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& __get__playerHeadAndObstacleInteraction();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const& __get__playerHeadAndObstacleInteraction() const;

  constexpr void __set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value);

  constexpr ::GlobalNamespace::IGamePause*& __get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __get__gamePause() const;

  constexpr void __set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& __get__gameplayLevelSceneTransitionEvents();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const& __get__gameplayLevelSceneTransitionEvents() const;

  constexpr void __set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr bool& __get__isGamePaused();

  constexpr bool const& __get__isGamePaused() const;

  constexpr void __set__isGamePaused(bool value);

  constexpr bool& __get__isLevelFinished();

  constexpr bool const& __get__isLevelFinished() const;

  constexpr void __set__isLevelFinished(bool value);

  constexpr float_t& __get__minimumTimeUntilHapticEnd();

  constexpr float_t const& __get__minimumTimeUntilHapticEnd() const;

  constexpr void __set__minimumTimeUntilHapticEnd(float_t value);

  constexpr bool& __get__wasHeadInWallLastFrame();

  constexpr bool const& __get__wasHeadInWallLastFrame() const;

  constexpr void __set__wasHeadInWallLastFrame(bool value);

  /// @brief Method Start, addr 0x2399d04, size 0x20c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2399f10, size 0x1f0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x239a100, size 0x88, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleAnyGameplayLevelDidFinish, addr 0x239a188, size 0x14, virtual false, abstract: false, final false
  inline void HandleAnyGameplayLevelDidFinish();

  /// @brief Method HandleDidResumeEvent, addr 0x239a19c, size 0x28, virtual false, abstract: false, final false
  inline void HandleDidResumeEvent();

  /// @brief Method HandleDidPauseEvent, addr 0x239a1c4, size 0x14, virtual false, abstract: false, final false
  inline void HandleDidPauseEvent();

  static inline ::GlobalNamespace::HeadInObstacleHapticEffect* New_ctor();

  /// @brief Method .ctor, addr 0x239a1d8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeadInObstacleHapticEffect(HeadInObstacleHapticEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeadInObstacleHapticEffect(HeadInObstacleHapticEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeadInObstacleHapticEffect();

public:
  /// @brief Field _headHapticPreset, offset: 0x18, size: 0x8, def value: None
  ::Libraries::HM::HMLib::VR::HapticPresetSO* ____headHapticPreset;

  /// @brief Field _minimalHapticDuration, offset: 0x20, size: 0x4, def value: None
  float_t ____minimalHapticDuration;

  /// @brief Field _hapticFeedbackManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HapticFeedbackManager* ____hapticFeedbackManager;

  /// @brief Field _playerHeadAndObstacleInteraction, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerHeadAndObstacleInteraction* ____playerHeadAndObstacleInteraction;

  /// @brief Field _gamePause, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _gameplayLevelSceneTransitionEvents, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayLevelSceneTransitionEvents* ____gameplayLevelSceneTransitionEvents;

  /// @brief Field _playerDataModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _isGamePaused, offset: 0x50, size: 0x1, def value: None
  bool ____isGamePaused;

  /// @brief Field _isLevelFinished, offset: 0x51, size: 0x1, def value: None
  bool ____isLevelFinished;

  /// @brief Field _minimumTimeUntilHapticEnd, offset: 0x54, size: 0x4, def value: None
  float_t ____minimumTimeUntilHapticEnd;

  /// @brief Field _wasHeadInWallLastFrame, offset: 0x58, size: 0x1, def value: None
  bool ____wasHeadInWallLastFrame;

  /// @brief Field kInvalidTime offset 0xffffffff size 0x4
  static constexpr float_t kInvalidTime{ -1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HeadInObstacleHapticEffect, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____headHapticPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____minimalHapticDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____hapticFeedbackManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____playerHeadAndObstacleInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____gamePause) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____gameplayLevelSceneTransitionEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____playerDataModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____isGamePaused) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____isLevelFinished) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____minimumTimeUntilHapticEnd) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadInObstacleHapticEffect, ____wasHeadInWallLastFrame) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HeadInObstacleHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HeadInObstacleHapticEffect*, "", "HeadInObstacleHapticEffect");
