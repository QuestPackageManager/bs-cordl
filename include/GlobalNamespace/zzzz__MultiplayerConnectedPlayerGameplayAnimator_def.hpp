#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerGameplayAnimator)
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSpectatingSpot;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator);
// Type: ::MultiplayerConnectedPlayerGameplayAnimator
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5207))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5123))
// CS Name: ::MultiplayerConnectedPlayerGameplayAnimator*
class CORDL_TYPE MultiplayerConnectedPlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
  // Declarations
  /// @brief Field _bigAvatarAnimator, offset 0x68, size 0x8
  __declspec(property(get = __get__bigAvatarAnimator, put = __set__bigAvatarAnimator))::GlobalNamespace::MultiplayerBigAvatarAnimator* _bigAvatarAnimator;

  /// @brief Field _avatarScaleAnimator, offset 0x70, size 0x8
  __declspec(property(get = __get__avatarScaleAnimator, put = __set__avatarScaleAnimator))::GlobalNamespace::ScaleAnimator* _avatarScaleAnimator;

  /// @brief Field _defaultLightsWidth, offset 0x78, size 0x4
  __declspec(property(get = __get__defaultLightsWidth, put = __set__defaultLightsWidth)) float_t _defaultLightsWidth;

  /// @brief Field _observedLightsWidth, offset 0x7c, size 0x4
  __declspec(property(get = __get__observedLightsWidth, put = __set__observedLightsWidth)) float_t _observedLightsWidth;

  /// @brief Field _failController, offset 0x80, size 0x8
  __declspec(property(get = __get__failController, put = __set__failController))::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* _failController;

  /// @brief Field _multiplayerLayoutProvider, offset 0x88, size 0x8
  __declspec(property(get = __get__multiplayerLayoutProvider, put = __set__multiplayerLayoutProvider))::GlobalNamespace::MultiplayerLayoutProvider* _multiplayerLayoutProvider;

  /// @brief Field _playerSpectatingSpot, offset 0x90, size 0x8
  __declspec(property(get = __get__playerSpectatingSpot, put = __set__playerSpectatingSpot))::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* _playerSpectatingSpot;

  constexpr ::GlobalNamespace::MultiplayerBigAvatarAnimator*& __get__bigAvatarAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerBigAvatarAnimator*> const& __get__bigAvatarAnimator() const;

  constexpr void __set__bigAvatarAnimator(::GlobalNamespace::MultiplayerBigAvatarAnimator* value);

  constexpr ::GlobalNamespace::ScaleAnimator*& __get__avatarScaleAnimator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScaleAnimator*> const& __get__avatarScaleAnimator() const;

  constexpr void __set__avatarScaleAnimator(::GlobalNamespace::ScaleAnimator* value);

  constexpr float_t& __get__defaultLightsWidth();

  constexpr float_t const& __get__defaultLightsWidth() const;

  constexpr void __set__defaultLightsWidth(float_t value);

  constexpr float_t& __get__observedLightsWidth();

  constexpr float_t const& __get__observedLightsWidth() const;

  constexpr void __set__observedLightsWidth(float_t value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*& __get__failController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*> const& __get__failController() const;

  constexpr void __set__failController(::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* value);

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __get__multiplayerLayoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __get__multiplayerLayoutProvider() const;

  constexpr void __set__multiplayerLayoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*& __get__playerSpectatingSpot();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot*> const& __get__playerSpectatingSpot() const;

  constexpr void __set__playerSpectatingSpot(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* value);

  /// @brief Method Start, addr 0x23d4f84, size 0xa8, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23d502c, size 0x170, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TransitionIntoFailedState, addr 0x23d5238, size 0xf4, virtual false, abstract: false, final false
  inline void TransitionIntoFailedState();

  /// @brief Method AnimateNewLeaderSelected, addr 0x23d5428, size 0x148, virtual true, abstract: false, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandleStateChanged, addr 0x23d5570, size 0x110, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  /// @brief Method HandlePlayerDidFail, addr 0x23d571c, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDidFail();

  /// @brief Method HandleIsObservedChanged, addr 0x23d5720, size 0x7c, virtual false, abstract: false, final false
  inline void HandleIsObservedChanged(bool isObserved);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator* New_ctor();

  /// @brief Method .ctor, addr 0x23d580c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerGameplayAnimator();

public:
  /// @brief Field _bigAvatarAnimator, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerBigAvatarAnimator* ____bigAvatarAnimator;

  /// @brief Field _avatarScaleAnimator, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::ScaleAnimator* ____avatarScaleAnimator;

  /// @brief Field _defaultLightsWidth, offset: 0x78, size: 0x4, def value: None
  float_t ____defaultLightsWidth;

  /// @brief Field _observedLightsWidth, offset: 0x7c, size: 0x4, def value: None
  float_t ____observedLightsWidth;

  /// @brief Field _failController, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* ____failController;

  /// @brief Field _multiplayerLayoutProvider, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____multiplayerLayoutProvider;

  /// @brief Field _playerSpectatingSpot, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* ____playerSpectatingSpot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____bigAvatarAnimator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____avatarScaleAnimator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____defaultLightsWidth) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____observedLightsWidth) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____failController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____multiplayerLayoutProvider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____playerSpectatingSpot) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*, "", "MultiplayerConnectedPlayerGameplayAnimator");
