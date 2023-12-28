#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UnityXRHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
CORDL_MODULE_EXPORT(UnityXRController)
namespace GlobalNamespace {
struct __UnityXRHelper__VRControllerManufacturerName;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
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
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityXRController);
MARK_REF_PTR_T(::GlobalNamespace::__UnityXRController__Configuration);
// Type: ::Configuration
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14433))
// CS Name: ::UnityXRController::Configuration*
class CORDL_TYPE __UnityXRController__Configuration : public ::System::Object {
public:
  // Declarations
  /// @brief Field <positionActionReference>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__positionActionReference_k__BackingField,
                      put = __set__positionActionReference_k__BackingField))::UnityEngine::InputSystem::InputActionReference* _positionActionReference_k__BackingField;

  /// @brief Field <orientationActionReference>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__orientationActionReference_k__BackingField,
                      put = __set__orientationActionReference_k__BackingField))::UnityEngine::InputSystem::InputActionReference* _orientationActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__thumbstickActionReference_k__BackingField,
                      put = __set__thumbstickActionReference_k__BackingField))::UnityEngine::InputSystem::InputActionReference* _thumbstickActionReference_k__BackingField;

  __declspec(property(get = get_positionActionReference, put = set_positionActionReference))::UnityEngine::InputSystem::InputActionReference* positionActionReference;

  __declspec(property(get = get_orientationActionReference, put = set_orientationActionReference))::UnityEngine::InputSystem::InputActionReference* orientationActionReference;

  __declspec(property(get = get_thumbstickActionReference, put = set_thumbstickActionReference))::UnityEngine::InputSystem::InputActionReference* thumbstickActionReference;

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__positionActionReference_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__positionActionReference_k__BackingField() const;

  constexpr void __set__positionActionReference_k__BackingField(::UnityEngine::InputSystem::InputActionReference* value);

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__orientationActionReference_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__orientationActionReference_k__BackingField() const;

  constexpr void __set__orientationActionReference_k__BackingField(::UnityEngine::InputSystem::InputActionReference* value);

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__thumbstickActionReference_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__thumbstickActionReference_k__BackingField() const;

  constexpr void __set__thumbstickActionReference_k__BackingField(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method get_positionActionReference addr 0x20fd6e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionReference* get_positionActionReference();

  /// @brief Method set_positionActionReference addr 0x20fd6ec size 0x8 virtual false final false
  inline void set_positionActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method get_orientationActionReference addr 0x20fd6f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionReference* get_orientationActionReference();

  /// @brief Method set_orientationActionReference addr 0x20fd6fc size 0x8 virtual false final false
  inline void set_orientationActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method get_thumbstickActionReference addr 0x20fd704 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionReference* get_thumbstickActionReference();

  /// @brief Method set_thumbstickActionReference addr 0x20fd70c size 0x8 virtual false final false
  inline void set_thumbstickActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  /// @brief Method CreateController addr 0x20fad40 size 0xc0 virtual false final false
  inline ::GlobalNamespace::UnityXRController* CreateController(::UnityEngine::XR::XRNode node);

  static inline ::GlobalNamespace::__UnityXRController__Configuration* New_ctor();

  /// @brief Method .ctor addr 0x20fd714 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__UnityXRController__Configuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnityXRController__Configuration(__UnityXRController__Configuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnityXRController__Configuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnityXRController__Configuration(__UnityXRController__Configuration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityXRController__Configuration();

public:
  /// @brief Field <positionActionReference>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____positionActionReference_k__BackingField;

  /// @brief Field <orientationActionReference>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____orientationActionReference_k__BackingField;

  /// @brief Field <thumbstickActionReference>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____thumbstickActionReference_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityXRController__Configuration, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UnityXRController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14435)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14434))
// CS Name: ::UnityXRController*
class CORDL_TYPE UnityXRController : public ::System::Object {
public:
  // Declarations
  using Configuration = ::GlobalNamespace::__UnityXRController__Configuration;

  /// @brief Field positionAction, offset 0x10, size 0x8
  __declspec(property(get = __get_positionAction, put = __set_positionAction))::UnityEngine::InputSystem::InputAction* positionAction;

  /// @brief Field rotationAction, offset 0x18, size 0x8
  __declspec(property(get = __get_rotationAction, put = __set_rotationAction))::UnityEngine::InputSystem::InputAction* rotationAction;

  /// @brief Field thumbstickAction, offset 0x20, size 0x8
  __declspec(property(get = __get_thumbstickAction, put = __set_thumbstickAction))::UnityEngine::InputSystem::InputAction* thumbstickAction;

  /// @brief Field node, offset 0x28, size 0x4
  __declspec(property(get = __get_node, put = __set_node))::UnityEngine::XR::XRNode node;

  /// @brief Field <manufacturerName>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__manufacturerName_k__BackingField,
                      put = __set__manufacturerName_k__BackingField))::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName _manufacturerName_k__BackingField;

  /// @brief Field _hapticsHandler, offset 0x30, size 0x8
  __declspec(property(get = __get__hapticsHandler, put = __set__hapticsHandler))::GlobalNamespace::IUnityXRHapticsHandler* _hapticsHandler;

  __declspec(property(get = get_hapticsHandler))::GlobalNamespace::IUnityXRHapticsHandler* hapticsHandler;

  __declspec(property(get = get_manufacturerName, put = set_manufacturerName))::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName manufacturerName;

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_positionAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_positionAction() const;

  constexpr void __set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_rotationAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_rotationAction() const;

  constexpr void __set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_thumbstickAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_thumbstickAction() const;

  constexpr void __set_thumbstickAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::XR::XRNode& __get_node();

  constexpr ::UnityEngine::XR::XRNode const& __get_node() const;

  constexpr void __set_node(::UnityEngine::XR::XRNode value);

  constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName& __get__manufacturerName_k__BackingField();

  constexpr ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const& __get__manufacturerName_k__BackingField() const;

  constexpr void __set__manufacturerName_k__BackingField(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName value);

  constexpr ::GlobalNamespace::IUnityXRHapticsHandler*& __get__hapticsHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnityXRHapticsHandler*> const& __get__hapticsHandler() const;

  constexpr void __set__hapticsHandler(::GlobalNamespace::IUnityXRHapticsHandler* value);

  /// @brief Method get_hapticsHandler addr 0x20fd2e4 size 0x8 virtual false final false
  inline ::GlobalNamespace::IUnityXRHapticsHandler* get_hapticsHandler();

  /// @brief Method get_manufacturerName addr 0x20fd2ec size 0x8 virtual false final false
  inline ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName get_manufacturerName();

  /// @brief Method set_manufacturerName addr 0x20fd2f4 size 0x8 virtual false final false
  inline void set_manufacturerName(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName value);

  static inline ::GlobalNamespace::UnityXRController* New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction,
                                                               ::UnityEngine::InputSystem::InputAction* rotationAction, ::UnityEngine::InputSystem::InputAction* thumbstickAction);

  /// @brief Method .ctor addr 0x20fd2fc size 0xd0 virtual false final false
  inline void _ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction, ::UnityEngine::InputSystem::InputAction* rotationAction,
                    ::UnityEngine::InputSystem::InputAction* thumbstickAction);

  /// @brief Method SetupController addr 0x20fd3cc size 0x34 virtual false final false
  inline bool SetupController(::UnityEngine::XR::InputDevice device, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method UpdateHapticsHandler addr 0x20fd550 size 0x18c virtual false final false
  inline void UpdateHapticsHandler(::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method TryToUpdateManufacturerName addr 0x20fd400 size 0x150 virtual false final false
  inline bool TryToUpdateManufacturerName(::UnityEngine::XR::InputDevice device);

  /// @brief Method ResetManufacturerName addr 0x20fd6dc size 0x8 virtual false final false
  inline void ResetManufacturerName();

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRController(UnityXRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRController(UnityXRController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRController();

public:
  /// @brief Field positionAction, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___positionAction;

  /// @brief Field rotationAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___rotationAction;

  /// @brief Field thumbstickAction, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___thumbstickAction;

  /// @brief Field node, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field <manufacturerName>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName ____manufacturerName_k__BackingField;

  /// @brief Field _hapticsHandler, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IUnityXRHapticsHandler* ____hapticsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityXRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRController*, "", "UnityXRController");
NEED_NO_BOX(::GlobalNamespace::__UnityXRController__Configuration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityXRController__Configuration*, "", "UnityXRController/Configuration");
