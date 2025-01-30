#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerVRControllersManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerVRControllersManager)
namespace GlobalNamespace {
class VRController;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerVRControllersManager);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerVRControllersManager
class CORDL_TYPE PlayerVRControllersManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftHandVRController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftHandVRController, put = __cordl_internal_set__leftHandVRController)) ::UnityW<::GlobalNamespace::VRController> _leftHandVRController;

  /// @brief Field _rightHandVRController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightHandVRController, put = __cordl_internal_set__rightHandVRController)) ::UnityW<::GlobalNamespace::VRController> _rightHandVRController;

  __declspec(property(get = get_leftHandVRController)) ::UnityW<::GlobalNamespace::VRController> leftHandVRController;

  __declspec(property(get = get_rightHandVRController)) ::UnityW<::GlobalNamespace::VRController> rightHandVRController;

  /// @brief Method DisableAllVRControllers, addr 0x3bea3fc, size 0x38, virtual false, abstract: false, final false
  inline void DisableAllVRControllers();

  /// @brief Method EnableAllVRControllers, addr 0x3bea434, size 0x38, virtual false, abstract: false, final false
  inline void EnableAllVRControllers();

  static inline ::GlobalNamespace::PlayerVRControllersManager* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__leftHandVRController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__leftHandVRController();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__rightHandVRController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__rightHandVRController();

  constexpr void __cordl_internal_set__leftHandVRController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__rightHandVRController(::UnityW<::GlobalNamespace::VRController> value);

  /// @brief Method .ctor, addr 0x3bea46c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_leftHandVRController, addr 0x3bea3ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_leftHandVRController();

  /// @brief Method get_rightHandVRController, addr 0x3bea3f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_rightHandVRController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerVRControllersManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerVRControllersManager(PlayerVRControllersManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerVRControllersManager(PlayerVRControllersManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4641 };

  /// @brief Field _leftHandVRController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____leftHandVRController;

  /// @brief Field _rightHandVRController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____rightHandVRController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerVRControllersManager, ____leftHandVRController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerVRControllersManager, ____rightHandVRController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerVRControllersManager, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerVRControllersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerVRControllersManager*, "", "PlayerVRControllersManager");
