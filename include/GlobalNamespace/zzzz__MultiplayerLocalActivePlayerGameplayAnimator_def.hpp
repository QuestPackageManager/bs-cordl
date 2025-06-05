#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerGameplayAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerGameplayAnimator)
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
struct MultiplayerController_State;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
namespace Tweening {
class FloatTween;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
// Dependencies MultiplayerGameplayAnimator
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLocalActivePlayerGameplayAnimator
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
  // Declarations
  /// @brief Field _coreGameHUDController, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__coreGameHUDController, put = __cordl_internal_set__coreGameHUDController)) ::UnityW<::GlobalNamespace::CoreGameHUDController> _coreGameHUDController;

  /// @brief Field _fadeOutHUDTween, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeOutHUDTween, put = __cordl_internal_set__fadeOutHUDTween)) ::Tweening::FloatTween* _fadeOutHUDTween;

  /// @brief Field _initialized, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _levelEndActionsPublisher, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelEndActionsPublisher,
                      put = __cordl_internal_set__levelEndActionsPublisher)) ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _levelEndActionsPublisher;

  /// @brief Field _multiplayerPositionHUDController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerPositionHUDController,
                      put = __cordl_internal_set__multiplayerPositionHUDController)) ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController>
      _multiplayerPositionHUDController;

  /// @brief Method AnimateNewLeaderSelected, addr 0x3bc3b60, size 0xe4, virtual true, abstract: false, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandlePlayerDidFinish, addr 0x3bc3c44, size 0x34, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleStateChanged, addr 0x3bc3900, size 0x1ac, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::MultiplayerController_State state);

  /// @brief Method InitializeIfNeeded, addr 0x3bc383c, size 0xc4, virtual false, abstract: false, final false
  inline void InitializeIfNeeded();

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bc3730, size 0x10c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TransitionIntoFailedState, addr 0x3bc3aac, size 0xb4, virtual false, abstract: false, final false
  inline void TransitionIntoFailedState();

  /// @brief Method <InitializeIfNeeded>b__6_0, addr 0x3bc3c80, size 0x40, virtual false, abstract: false, final false
  inline void _InitializeIfNeeded_b__6_0(float_t f);

  constexpr ::UnityW<::GlobalNamespace::CoreGameHUDController> const& __cordl_internal_get__coreGameHUDController() const;

  constexpr ::UnityW<::GlobalNamespace::CoreGameHUDController>& __cordl_internal_get__coreGameHUDController();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__fadeOutHUDTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__fadeOutHUDTween();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* const& __cordl_internal_get__levelEndActionsPublisher() const;

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __cordl_internal_get__levelEndActionsPublisher();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController> const& __cordl_internal_get__multiplayerPositionHUDController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController>& __cordl_internal_get__multiplayerPositionHUDController();

  constexpr void __cordl_internal_set__coreGameHUDController(::UnityW<::GlobalNamespace::CoreGameHUDController> value);

  constexpr void __cordl_internal_set__fadeOutHUDTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr void __cordl_internal_set__multiplayerPositionHUDController(::UnityW<::GlobalNamespace::MultiplayerPositionHUDController> value);

  /// @brief Method .ctor, addr 0x3bc3c78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerGameplayAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4518 };

  /// @brief Field _coreGameHUDController, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CoreGameHUDController> ____coreGameHUDController;

  /// @brief Field _multiplayerPositionHUDController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController> ____multiplayerPositionHUDController;

  /// @brief Field _levelEndActionsPublisher, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____levelEndActionsPublisher;

  /// @brief Field _fadeOutHUDTween, offset: 0x88, size: 0x8, def value: None
  ::Tweening::FloatTween* ____fadeOutHUDTween;

  /// @brief Field _initialized, offset: 0x90, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____coreGameHUDController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____multiplayerPositionHUDController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____levelEndActionsPublisher) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____fadeOutHUDTween) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____initialized) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*, "", "MultiplayerLocalActivePlayerGameplayAnimator");
