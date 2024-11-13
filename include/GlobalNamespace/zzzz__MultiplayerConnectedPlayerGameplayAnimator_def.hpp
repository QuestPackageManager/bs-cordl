#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerGameplayAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerGameplayAnimator)
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSpectatingSpot;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator);
// Type: ::MultiplayerConnectedPlayerGameplayAnimator
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerConnectedPlayerGameplayAnimator*
class CORDL_TYPE MultiplayerConnectedPlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
  // Declarations
  /// @brief Field _avatarScaleAnimator, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarScaleAnimator, put = __cordl_internal_set__avatarScaleAnimator)) ::UnityW<::GlobalNamespace::ScaleAnimator> _avatarScaleAnimator;

  /// @brief Field _bigAvatarAnimator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__bigAvatarAnimator, put = __cordl_internal_set__bigAvatarAnimator)) ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> _bigAvatarAnimator;

  /// @brief Field _defaultLightsWidth, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultLightsWidth, put = __cordl_internal_set__defaultLightsWidth)) float_t _defaultLightsWidth;

  /// @brief Field _failController, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__failController, put = __cordl_internal_set__failController)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>
      _failController;

  /// @brief Field _multiplayerLayoutProvider, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLayoutProvider,
                      put = __cordl_internal_set__multiplayerLayoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider* _multiplayerLayoutProvider;

  /// @brief Field _observedLightsWidth, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__observedLightsWidth, put = __cordl_internal_set__observedLightsWidth)) float_t _observedLightsWidth;

  /// @brief Field _playerSpectatingSpot, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpectatingSpot, put = __cordl_internal_set__playerSpectatingSpot)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot>
      _playerSpectatingSpot;

  /// @brief Method AnimateNewLeaderSelected, addr 0x3b539d8, size 0x144, virtual true, abstract: false, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandleIsObservedChanged, addr 0x3b53cc4, size 0x7c, virtual false, abstract: false, final false
  inline void HandleIsObservedChanged(bool isObserved);

  /// @brief Method HandlePlayerDidFail, addr 0x3b53cc0, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDidFail();

  /// @brief Method HandleStateChanged, addr 0x3b53b1c, size 0x108, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b535d0, size 0x168, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b53480, size 0xa8, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method TransitionIntoFailedState, addr 0x3b537d4, size 0xf0, virtual false, abstract: false, final false
  inline void TransitionIntoFailedState();

  constexpr ::UnityW<::GlobalNamespace::ScaleAnimator> const& __cordl_internal_get__avatarScaleAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::ScaleAnimator>& __cordl_internal_get__avatarScaleAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> const& __cordl_internal_get__bigAvatarAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator>& __cordl_internal_get__bigAvatarAnimator();

  constexpr float_t const& __cordl_internal_get__defaultLightsWidth() const;

  constexpr float_t& __cordl_internal_get__defaultLightsWidth();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> const& __cordl_internal_get__failController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>& __cordl_internal_get__failController();

  constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& __cordl_internal_get__multiplayerLayoutProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& __cordl_internal_get__multiplayerLayoutProvider() const;

  constexpr float_t const& __cordl_internal_get__observedLightsWidth() const;

  constexpr float_t& __cordl_internal_get__observedLightsWidth();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot> const& __cordl_internal_get__playerSpectatingSpot() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot>& __cordl_internal_get__playerSpectatingSpot();

  constexpr void __cordl_internal_set__avatarScaleAnimator(::UnityW<::GlobalNamespace::ScaleAnimator> value);

  constexpr void __cordl_internal_set__bigAvatarAnimator(::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> value);

  constexpr void __cordl_internal_set__defaultLightsWidth(float_t value);

  constexpr void __cordl_internal_set__failController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> value);

  constexpr void __cordl_internal_set__multiplayerLayoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value);

  constexpr void __cordl_internal_set__observedLightsWidth(float_t value);

  constexpr void __cordl_internal_set__playerSpectatingSpot(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot> value);

  /// @brief Method .ctor, addr 0x3b53db0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerGameplayAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerGameplayAnimator(MultiplayerConnectedPlayerGameplayAnimator const&) = delete;

  /// @brief Field _bigAvatarAnimator, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> ____bigAvatarAnimator;

  /// @brief Field _avatarScaleAnimator, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScaleAnimator> ____avatarScaleAnimator;

  /// @brief Field _defaultLightsWidth, offset: 0x80, size: 0x4, def value: None
  float_t ____defaultLightsWidth;

  /// @brief Field _observedLightsWidth, offset: 0x84, size: 0x4, def value: None
  float_t ____observedLightsWidth;

  /// @brief Field _failController, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> ____failController;

  /// @brief Field _multiplayerLayoutProvider, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLayoutProvider* ____multiplayerLayoutProvider;

  /// @brief Field _playerSpectatingSpot, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot> ____playerSpectatingSpot;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____bigAvatarAnimator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____avatarScaleAnimator) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____defaultLightsWidth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____observedLightsWidth) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____failController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____multiplayerLayoutProvider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator, ____playerSpectatingSpot) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*, "", "MultiplayerConnectedPlayerGameplayAnimator");
