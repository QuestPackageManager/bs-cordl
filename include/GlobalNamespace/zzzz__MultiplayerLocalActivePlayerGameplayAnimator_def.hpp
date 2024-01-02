#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerLocalActivePlayerGameplayAnimator)
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class CoreGameHUDController;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
// Type: ::MultiplayerLocalActivePlayerGameplayAnimator
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5152))
// CS Name: ::MultiplayerLocalActivePlayerGameplayAnimator*
class CORDL_TYPE MultiplayerLocalActivePlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
  // Declarations
  /// @brief Field _coreGameHUDController, offset 0x68, size 0x8
  __declspec(property(get = __get__coreGameHUDController, put = __set__coreGameHUDController))::GlobalNamespace::CoreGameHUDController* _coreGameHUDController;

  /// @brief Field _multiplayerPositionHUDController, offset 0x70, size 0x8
  __declspec(property(get = __get__multiplayerPositionHUDController,
                      put = __set__multiplayerPositionHUDController))::GlobalNamespace::MultiplayerPositionHUDController* _multiplayerPositionHUDController;

  /// @brief Field _levelEndActionsPublisher, offset 0x78, size 0x8
  __declspec(property(get = __get__levelEndActionsPublisher, put = __set__levelEndActionsPublisher))::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* _levelEndActionsPublisher;

  /// @brief Field _fadeOutHUDTween, offset 0x80, size 0x8
  __declspec(property(get = __get__fadeOutHUDTween, put = __set__fadeOutHUDTween))::Tweening::FloatTween* _fadeOutHUDTween;

  /// @brief Field _initialized, offset 0x88, size 0x1
  __declspec(property(get = __get__initialized, put = __set__initialized)) bool _initialized;

  constexpr ::GlobalNamespace::CoreGameHUDController*& __get__coreGameHUDController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CoreGameHUDController*> const& __get__coreGameHUDController() const;

  constexpr void __set__coreGameHUDController(::GlobalNamespace::CoreGameHUDController* value);

  constexpr ::GlobalNamespace::MultiplayerPositionHUDController*& __get__multiplayerPositionHUDController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPositionHUDController*> const& __get__multiplayerPositionHUDController() const;

  constexpr void __set__multiplayerPositionHUDController(::GlobalNamespace::MultiplayerPositionHUDController* value);

  constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& __get__levelEndActionsPublisher();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*> const& __get__levelEndActionsPublisher() const;

  constexpr void __set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value);

  constexpr ::Tweening::FloatTween*& __get__fadeOutHUDTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__fadeOutHUDTween() const;

  constexpr void __set__fadeOutHUDTween(::Tweening::FloatTween* value);

  constexpr bool& __get__initialized();

  constexpr bool const& __get__initialized() const;

  constexpr void __set__initialized(bool value);

  /// @brief Method OnDestroy, addr 0x23dab3c, size 0x114, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method InitializeIfNeeded, addr 0x23dac50, size 0xd0, virtual false, abstract: false, final false
  inline void InitializeIfNeeded();

  /// @brief Method HandleStateChanged, addr 0x23dad20, size 0x1a8, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method AnimateNewLeaderSelected, addr 0x23daf78, size 0xe4, virtual true, abstract: false, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method TransitionIntoFailedState, addr 0x23daec8, size 0xb0, virtual false, abstract: false, final false
  inline void TransitionIntoFailedState();

  /// @brief Method HandlePlayerDidFinish, addr 0x23db05c, size 0x34, virtual false, abstract: false, final false
  inline void HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x23db090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeIfNeeded>b__6_0, addr 0x23db098, size 0x40, virtual false, abstract: false, final false
  inline void _InitializeIfNeeded_b__6_0(float_t f);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLocalActivePlayerGameplayAnimator(MultiplayerLocalActivePlayerGameplayAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLocalActivePlayerGameplayAnimator();

public:
  /// @brief Field _coreGameHUDController, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::CoreGameHUDController* ____coreGameHUDController;

  /// @brief Field _multiplayerPositionHUDController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPositionHUDController* ____multiplayerPositionHUDController;

  /// @brief Field _levelEndActionsPublisher, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* ____levelEndActionsPublisher;

  /// @brief Field _fadeOutHUDTween, offset: 0x80, size: 0x8, def value: None
  ::Tweening::FloatTween* ____fadeOutHUDTween;

  /// @brief Field _initialized, offset: 0x88, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____coreGameHUDController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____multiplayerPositionHUDController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____levelEndActionsPublisher) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____fadeOutHUDTween) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator, ____initialized) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*, "", "MultiplayerLocalActivePlayerGameplayAnimator");
