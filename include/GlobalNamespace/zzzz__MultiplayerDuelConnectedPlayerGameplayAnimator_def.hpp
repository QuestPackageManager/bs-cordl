#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerDuelConnectedPlayerGameplayAnimator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerDuelConnectedPlayerGameplayAnimator)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerLevelFailController;
}
namespace GlobalNamespace {
class ScaleAnimator;
}
namespace GlobalNamespace {
struct __MultiplayerController__State;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelConnectedPlayerGameplayAnimator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator);
// Type: ::MultiplayerDuelConnectedPlayerGameplayAnimator
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerDuelConnectedPlayerGameplayAnimator*
class CORDL_TYPE MultiplayerDuelConnectedPlayerGameplayAnimator : public ::GlobalNamespace::MultiplayerGameplayAnimator {
public:
  // Declarations
  /// @brief Field _avatarScaleAnimator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarScaleAnimator, put = __cordl_internal_set__avatarScaleAnimator)) ::UnityW<::GlobalNamespace::ScaleAnimator> _avatarScaleAnimator;

  /// @brief Field _failController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__failController, put = __cordl_internal_set__failController)) ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>
      _failController;

  /// @brief Method AnimateNewLeaderSelected, addr 0x3b3f42c, size 0xdc, virtual true, abstract: false, final false
  inline void AnimateNewLeaderSelected(bool isLeading);

  /// @brief Method HandlePlayerDidFail, addr 0x3b3f610, size 0x4, virtual false, abstract: false, final false
  inline void HandlePlayerDidFail();

  /// @brief Method HandleStateChanged, addr 0x3b3f508, size 0x108, virtual true, abstract: false, final false
  inline void HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state);

  static inline ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b3f280, size 0xd8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TransitionIntoFailedState, addr 0x3b3f358, size 0xd4, virtual false, abstract: false, final false
  inline void TransitionIntoFailedState();

  constexpr ::UnityW<::GlobalNamespace::ScaleAnimator> const& __cordl_internal_get__avatarScaleAnimator() const;

  constexpr ::UnityW<::GlobalNamespace::ScaleAnimator>& __cordl_internal_get__avatarScaleAnimator();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> const& __cordl_internal_get__failController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>& __cordl_internal_get__failController();

  constexpr void __cordl_internal_set__avatarScaleAnimator(::UnityW<::GlobalNamespace::ScaleAnimator> value);

  constexpr void __cordl_internal_set__failController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> value);

  /// @brief Method .ctor, addr 0x3b3f614, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerDuelConnectedPlayerGameplayAnimator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelConnectedPlayerGameplayAnimator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerDuelConnectedPlayerGameplayAnimator(MultiplayerDuelConnectedPlayerGameplayAnimator const&) = delete;

  /// @brief Field _avatarScaleAnimator, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScaleAnimator> ____avatarScaleAnimator;

  /// @brief Field _failController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> ____failController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4472 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator, ____avatarScaleAnimator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator, ____failController) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*, "", "MultiplayerDuelConnectedPlayerGameplayAnimator");
