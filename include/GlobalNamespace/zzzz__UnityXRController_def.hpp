#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
CORDL_MODULE_EXPORT(UnityXRController)
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace GlobalNamespace {
class UnityXRController_Configuration;
}
namespace GlobalNamespace {
struct UnityXRHelper_VRControllerManufacturerName;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
class UnityXRController_Configuration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityXRController);
MARK_REF_PTR_T(::GlobalNamespace::UnityXRController_Configuration);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRController/Configuration
class CORDL_TYPE UnityXRController_Configuration : public ::System::Object {
public:
  // Declarations
  /// @brief Field <orientationActionReference>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__orientationActionReference_k__BackingField,
                      put = __cordl_internal_set__orientationActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _orientationActionReference_k__BackingField;

  /// @brief Field <positionActionReference>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__positionActionReference_k__BackingField,
                      put = __cordl_internal_set__positionActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _positionActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickActionReference_k__BackingField,
                      put = __cordl_internal_set__thumbstickActionReference_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _thumbstickActionReference_k__BackingField;

  __declspec(property(get = get_orientationActionReference, put = set_orientationActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> orientationActionReference;

  __declspec(property(get = get_positionActionReference, put = set_positionActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> positionActionReference;

  __declspec(property(get = get_thumbstickActionReference, put = set_thumbstickActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference> thumbstickActionReference;

  /// @brief Method CreateController, addr 0x39da33c, size 0xbc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* CreateController(::UnityEngine::XR::XRNode node);

  static inline ::GlobalNamespace::UnityXRController_Configuration* New_ctor();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__orientationActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__orientationActionReference_k__BackingField();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__positionActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__positionActionReference_k__BackingField();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__thumbstickActionReference_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__thumbstickActionReference_k__BackingField();

  constexpr void __cordl_internal_set__orientationActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__positionActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__thumbstickActionReference_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  /// @brief Method .ctor, addr 0x39dd18c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_orientationActionReference, addr 0x39dd16c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_orientationActionReference();

  /// @brief Method get_positionActionReference, addr 0x39dd15c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_positionActionReference();

  /// @brief Method get_thumbstickActionReference, addr 0x39dd17c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_thumbstickActionReference();

  /// @brief Method set_orientationActionReference, addr 0x39dd174, size 0x8, virtual false, abstract: false, final false
  inline void set_orientationActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_positionActionReference, addr 0x39dd164, size 0x8, virtual false, abstract: false, final false
  inline void set_positionActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method set_thumbstickActionReference, addr 0x39dd184, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickActionReference(::UnityEngine::InputSystem::InputActionReference* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRController_Configuration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController_Configuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRController_Configuration(UnityXRController_Configuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController_Configuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRController_Configuration(UnityXRController_Configuration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16492 };

  /// @brief Field <positionActionReference>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____positionActionReference_k__BackingField;

  /// @brief Field <orientationActionReference>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____orientationActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____thumbstickActionReference_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRController_Configuration, ____positionActionReference_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController_Configuration, ____orientationActionReference_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController_Configuration, ____thumbstickActionReference_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRController_Configuration, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.XR.XRNode, UnityXRHelper::VRControllerManufacturerName
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRController
class CORDL_TYPE UnityXRController : public ::System::Object {
public:
  // Declarations
  using Configuration = ::GlobalNamespace::UnityXRController_Configuration;

  /// @brief Field _hapticsHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticsHandler, put = __cordl_internal_set__hapticsHandler)) ::GlobalNamespace::IUnityXRHapticsHandler* _hapticsHandler;

  /// @brief Field <manufacturerName>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__manufacturerName_k__BackingField,
                      put = __cordl_internal_set__manufacturerName_k__BackingField)) ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName _manufacturerName_k__BackingField;

  __declspec(property(get = get_hapticsHandler)) ::GlobalNamespace::IUnityXRHapticsHandler* hapticsHandler;

  __declspec(property(get = get_manufacturerName, put = set_manufacturerName)) ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName manufacturerName;

  /// @brief Field node, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::XR::XRNode node;

  /// @brief Field positionAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positionAction, put = __cordl_internal_set_positionAction)) ::UnityEngine::InputSystem::InputAction* positionAction;

  /// @brief Field rotationAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rotationAction, put = __cordl_internal_set_rotationAction)) ::UnityEngine::InputSystem::InputAction* rotationAction;

  /// @brief Field thumbstickAction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_thumbstickAction, put = __cordl_internal_set_thumbstickAction)) ::UnityEngine::InputSystem::InputAction* thumbstickAction;

  static inline ::GlobalNamespace::UnityXRController* New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction,
                                                               ::UnityEngine::InputSystem::InputAction* rotationAction, ::UnityEngine::InputSystem::InputAction* thumbstickAction);

  /// @brief Method ResetManufacturerName, addr 0x39dd154, size 0x8, virtual false, abstract: false, final false
  inline void ResetManufacturerName();

  /// @brief Method SetupController, addr 0x39dce4c, size 0x34, virtual false, abstract: false, final false
  inline bool SetupController(::UnityEngine::XR::InputDevice device, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method TryToUpdateManufacturerName, addr 0x39dce80, size 0x150, virtual false, abstract: false, final false
  inline bool TryToUpdateManufacturerName(::UnityEngine::XR::InputDevice device);

  /// @brief Method UpdateHapticsHandler, addr 0x39dcfd0, size 0x184, virtual false, abstract: false, final false
  inline void UpdateHapticsHandler(::UnityEngine::MonoBehaviour* coroutineRunner);

  constexpr ::GlobalNamespace::IUnityXRHapticsHandler* const& __cordl_internal_get__hapticsHandler() const;

  constexpr ::GlobalNamespace::IUnityXRHapticsHandler*& __cordl_internal_get__hapticsHandler();

  constexpr ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const& __cordl_internal_get__manufacturerName_k__BackingField() const;

  constexpr ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName& __cordl_internal_get__manufacturerName_k__BackingField();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_positionAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_positionAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_rotationAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_rotationAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_thumbstickAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_thumbstickAction();

  constexpr void __cordl_internal_set__hapticsHandler(::GlobalNamespace::IUnityXRHapticsHandler* value);

  constexpr void __cordl_internal_set__manufacturerName_k__BackingField(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName value);

  constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_thumbstickAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method .ctor, addr 0x39dcd80, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction, ::UnityEngine::InputSystem::InputAction* rotationAction,
                    ::UnityEngine::InputSystem::InputAction* thumbstickAction);

  /// @brief Method get_hapticsHandler, addr 0x39dcd68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IUnityXRHapticsHandler* get_hapticsHandler();

  /// @brief Method get_manufacturerName, addr 0x39dcd70, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName get_manufacturerName();

  /// @brief Method set_manufacturerName, addr 0x39dcd78, size 0x8, virtual false, abstract: false, final false
  inline void set_manufacturerName(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRController(UnityXRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRController(UnityXRController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16493 };

  /// @brief Field positionAction, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___positionAction;

  /// @brief Field rotationAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___rotationAction;

  /// @brief Field thumbstickAction, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___thumbstickAction;

  /// @brief Field node, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field <manufacturerName>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName ____manufacturerName_k__BackingField;

  /// @brief Field _hapticsHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IUnityXRHapticsHandler* ____hapticsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRController, ___positionAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___rotationAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___thumbstickAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___node) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ____manufacturerName_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ____hapticsHandler) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityXRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRController*, "", "UnityXRController");
NEED_NO_BOX(::GlobalNamespace::UnityXRController_Configuration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRController_Configuration*, "", "UnityXRController/Configuration");
