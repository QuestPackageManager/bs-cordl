#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterSpawnController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BTSCharacterSpawnController)
namespace GlobalNamespace {
class BTSCharacterSpawnAnimationController;
}
namespace GlobalNamespace {
class BTSCharacterSpawnEventEffect;
}
namespace GlobalNamespace {
class BTSCharacter;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterSpawnController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSCharacterSpawnController);
// Type: ::BTSCharacterSpawnController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSCharacterSpawnController*
class CORDL_TYPE BTSCharacterSpawnController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animatorNormalizedTimeBeforePause, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__animatorNormalizedTimeBeforePause, put = __cordl_internal_set__animatorNormalizedTimeBeforePause)) float_t _animatorNormalizedTimeBeforePause;

  /// @brief Field _btsCharacterSpawnEventEffect, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__btsCharacterSpawnEventEffect,
                      put = __cordl_internal_set__btsCharacterSpawnEventEffect))::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> _btsCharacterSpawnEventEffect;

  /// @brief Field _characterSpawnAnimationController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__characterSpawnAnimationController,
                      put = __cordl_internal_set__characterSpawnAnimationController))::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> _characterSpawnAnimationController;

  /// @brief Field _characterSpawned, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__characterSpawned, put = __cordl_internal_set__characterSpawned)) bool _characterSpawned;

  /// @brief Field _gamePause, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gamePause, put = __cordl_internal_set__gamePause))::GlobalNamespace::IGamePause* _gamePause;

  /// @brief Field _levelEndActions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__levelEndActions, put = __cordl_internal_set__levelEndActions))::GlobalNamespace::ILevelEndActions* _levelEndActions;

  /// @brief Field _playableDirectorTimeBeforePause, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playableDirectorTimeBeforePause, put = __cordl_internal_set__playableDirectorTimeBeforePause)) double_t _playableDirectorTimeBeforePause;

  __declspec(property(get = get_isCharacterVisible)) bool isCharacterVisible;

  __declspec(property(get = get_isSpawned)) bool isSpawned;

  /// @brief Method HandleAnimationFinished, addr 0x105c244, size 0x8, virtual false, abstract: false, final false
  inline void HandleAnimationFinished();

  /// @brief Method HandleGamePauseDidPause, addr 0x105c170, size 0x40, virtual false, abstract: false, final false
  inline void HandleGamePauseDidPause();

  /// @brief Method HandleGamePauseDidResume, addr 0x105c1f4, size 0x28, virtual false, abstract: false, final false
  inline void HandleGamePauseDidResume();

  /// @brief Method HandleGamePauseWillResume, addr 0x105c1b0, size 0x44, virtual false, abstract: false, final false
  inline void HandleGamePauseWillResume();

  /// @brief Method HandleLevelEndActionsLevelFailed, addr 0x105c21c, size 0x28, virtual false, abstract: false, final false
  inline void HandleLevelEndActionsLevelFailed();

  /// @brief Method HandleStartCharacterAnimation, addr 0x105c0c8, size 0xa8, virtual false, abstract: false, final false
  inline void HandleStartCharacterAnimation(::GlobalNamespace::BTSCharacter* btsCharacter);

  static inline ::GlobalNamespace::BTSCharacterSpawnController* New_ctor();

  /// @brief Method OnDestroy, addr 0x105bc20, size 0x3f8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x105b7f0, size 0x380, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__animatorNormalizedTimeBeforePause() const;

  constexpr float_t& __cordl_internal_get__animatorNormalizedTimeBeforePause();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> const& __cordl_internal_get__btsCharacterSpawnEventEffect() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect>& __cordl_internal_get__btsCharacterSpawnEventEffect();

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> const& __cordl_internal_get__characterSpawnAnimationController() const;

  constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController>& __cordl_internal_get__characterSpawnAnimationController();

  constexpr bool const& __cordl_internal_get__characterSpawned() const;

  constexpr bool& __cordl_internal_get__characterSpawned();

  constexpr ::GlobalNamespace::IGamePause*& __cordl_internal_get__gamePause();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> const& __cordl_internal_get__gamePause() const;

  constexpr ::GlobalNamespace::ILevelEndActions*& __cordl_internal_get__levelEndActions();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& __cordl_internal_get__levelEndActions() const;

  constexpr double_t const& __cordl_internal_get__playableDirectorTimeBeforePause() const;

  constexpr double_t& __cordl_internal_get__playableDirectorTimeBeforePause();

  constexpr void __cordl_internal_set__animatorNormalizedTimeBeforePause(float_t value);

  constexpr void __cordl_internal_set__btsCharacterSpawnEventEffect(::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> value);

  constexpr void __cordl_internal_set__characterSpawnAnimationController(::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> value);

  constexpr void __cordl_internal_set__characterSpawned(bool value);

  constexpr void __cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value);

  constexpr void __cordl_internal_set__levelEndActions(::GlobalNamespace::ILevelEndActions* value);

  constexpr void __cordl_internal_set__playableDirectorTimeBeforePause(double_t value);

  /// @brief Method .ctor, addr 0x105c24c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isCharacterVisible, addr 0x105b7d0, size 0x18, virtual false, abstract: false, final false
  inline bool get_isCharacterVisible();

  /// @brief Method get_isSpawned, addr 0x105b7e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isSpawned();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSCharacterSpawnController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSCharacterSpawnController(BTSCharacterSpawnController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSCharacterSpawnController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSCharacterSpawnController(BTSCharacterSpawnController const&) = delete;

  /// @brief Field _characterSpawnAnimationController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> ____characterSpawnAnimationController;

  /// @brief Field _btsCharacterSpawnEventEffect, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> ____btsCharacterSpawnEventEffect;

  /// @brief Field _gamePause, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IGamePause* ____gamePause;

  /// @brief Field _levelEndActions, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ILevelEndActions* ____levelEndActions;

  /// @brief Field _characterSpawned, offset: 0x38, size: 0x1, def value: None
  bool ____characterSpawned;

  /// @brief Field _playableDirectorTimeBeforePause, offset: 0x40, size: 0x8, def value: None
  double_t ____playableDirectorTimeBeforePause;

  /// @brief Field _animatorNormalizedTimeBeforePause, offset: 0x48, size: 0x4, def value: None
  float_t ____animatorNormalizedTimeBeforePause;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSCharacterSpawnController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____characterSpawnAnimationController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____btsCharacterSpawnEventEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____gamePause) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____levelEndActions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____characterSpawned) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____playableDirectorTimeBeforePause) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSCharacterSpawnController, ____animatorNormalizedTimeBeforePause) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSCharacterSpawnController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSCharacterSpawnController*, "", "BTSCharacterSpawnController");
