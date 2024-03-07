#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MenuPlayerController)
namespace GlobalNamespace {
class VRController;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuPlayerController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuPlayerController);
// Type: ::MenuPlayerController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuPlayerController*
class CORDL_TYPE MenuPlayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _headTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__headTransform, put = __cordl_internal_set__headTransform))::UnityW<::UnityEngine::Transform> _headTransform;

  /// @brief Field _leftController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController))::UnityW<::GlobalNamespace::VRController> _leftController;

  /// @brief Field _rightController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController))::UnityW<::GlobalNamespace::VRController> _rightController;

  __declspec(property(get = get_headPos))::UnityEngine::Vector3 headPos;

  __declspec(property(get = get_headRot))::UnityEngine::Quaternion headRot;

  __declspec(property(get = get_leftController))::UnityW<::GlobalNamespace::VRController> leftController;

  __declspec(property(get = get_rightController))::UnityW<::GlobalNamespace::VRController> rightController;

  static inline ::GlobalNamespace::MenuPlayerController* New_ctor();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headTransform();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__leftController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__leftController();

  constexpr ::UnityW<::GlobalNamespace::VRController> const& __cordl_internal_get__rightController() const;

  constexpr ::UnityW<::GlobalNamespace::VRController>& __cordl_internal_get__rightController();

  constexpr void __cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__leftController(::UnityW<::GlobalNamespace::VRController> value);

  constexpr void __cordl_internal_set__rightController(::UnityW<::GlobalNamespace::VRController> value);

  /// @brief Method .ctor, addr 0x2532320, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_headPos, addr 0x25322e8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_headPos();

  /// @brief Method get_headRot, addr 0x2532304, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_headRot();

  /// @brief Method get_leftController, addr 0x25322d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_leftController();

  /// @brief Method get_rightController, addr 0x25322e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::VRController> get_rightController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuPlayerController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuPlayerController(MenuPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuPlayerController(MenuPlayerController const&) = delete;

  /// @brief Field _leftController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____leftController;

  /// @brief Field _rightController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRController> ____rightController;

  /// @brief Field _headTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____headTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuPlayerController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuPlayerController, ____leftController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuPlayerController, ____rightController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuPlayerController, ____headTransform) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuPlayerController*, "", "MenuPlayerController");
