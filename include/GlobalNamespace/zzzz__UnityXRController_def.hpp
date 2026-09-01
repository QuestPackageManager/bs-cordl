#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityXRController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllerManufacturer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
CORDL_MODULE_EXPORT(UnityXRController)
namespace BeatSaber::Haptics {
class IHapticImpulseTransmitter;
}
namespace GlobalNamespace {
struct VRControllerManufacturer;
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
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityXRController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityXRController*, "", "UnityXRController");
// Dependencies System.Object, UnityEngine.XR.XRNode, VRControllerManufacturer
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRController
class CORDL_TYPE UnityXRController : public ::System::Object {
public:
  // Declarations
  /// @brief Field <hapticsHandler>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hapticsHandler_k__BackingField,
                      put = __cordl_internal_set__hapticsHandler_k__BackingField)) ::BeatSaber::Haptics::IHapticImpulseTransmitter* _hapticsHandler_k__BackingField;

  /// @brief Field <manufacturer>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__manufacturer_k__BackingField,
                      put = __cordl_internal_set__manufacturer_k__BackingField)) ::GlobalNamespace::VRControllerManufacturer _manufacturer_k__BackingField;

  __declspec(property(get = get_hapticsHandler, put = set_hapticsHandler)) ::BeatSaber::Haptics::IHapticImpulseTransmitter* hapticsHandler;

  __declspec(property(get = get_manufacturer, put = set_manufacturer)) ::GlobalNamespace::VRControllerManufacturer manufacturer;

  /// @brief Field node, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::XR::XRNode node;

  /// @brief Field positionAction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_positionAction, put = __cordl_internal_set_positionAction)) ::UnityEngine::InputSystem::InputAction* positionAction;

  /// @brief Field rotationAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rotationAction, put = __cordl_internal_set_rotationAction)) ::UnityEngine::InputSystem::InputAction* rotationAction;

  /// @brief Field thumbstickAction, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_thumbstickAction, put = __cordl_internal_set_thumbstickAction)) ::UnityEngine::InputSystem::InputAction* thumbstickAction;

  /// @brief Field triggerAction, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_triggerAction, put = __cordl_internal_set_triggerAction)) ::UnityEngine::InputSystem::InputAction* triggerAction;

  static inline ::GlobalNamespace::UnityXRController* New_ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction,
                                                               ::UnityEngine::InputSystem::InputAction* rotationAction, ::UnityEngine::InputSystem::InputAction* thumbstickAction,
                                                               ::UnityEngine::InputSystem::InputAction* triggerAction);

  /// @brief Method ResetManufacturerName, addr 0x591d488, size 0x8, virtual false, abstract: false, final false
  inline void ResetManufacturerName();

  /// @brief Method SetupController, addr 0x591d14c, size 0x34, virtual false, abstract: false, final false
  inline bool SetupController(::UnityEngine::XR::InputDevice device, ::UnityEngine::MonoBehaviour* coroutineRunner);

  /// @brief Method TryToUpdateManufacturerName, addr 0x591d180, size 0x188, virtual false, abstract: false, final false
  inline bool TryToUpdateManufacturerName(::UnityEngine::XR::InputDevice device);

  /// @brief Method UpdateHapticsHandler, addr 0x591d308, size 0x180, virtual false, abstract: false, final false
  inline void UpdateHapticsHandler(::UnityEngine::MonoBehaviour* coroutineRunner);

  constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter* const& __cordl_internal_get__hapticsHandler_k__BackingField() const;

  constexpr ::BeatSaber::Haptics::IHapticImpulseTransmitter*& __cordl_internal_get__hapticsHandler_k__BackingField();

  constexpr ::GlobalNamespace::VRControllerManufacturer const& __cordl_internal_get__manufacturer_k__BackingField() const;

  constexpr ::GlobalNamespace::VRControllerManufacturer& __cordl_internal_get__manufacturer_k__BackingField();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_positionAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_positionAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_rotationAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_rotationAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_thumbstickAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_thumbstickAction();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_triggerAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_triggerAction();

  constexpr void __cordl_internal_set__hapticsHandler_k__BackingField(::BeatSaber::Haptics::IHapticImpulseTransmitter* value);

  constexpr void __cordl_internal_set__manufacturer_k__BackingField(::GlobalNamespace::VRControllerManufacturer value);

  constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set_positionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_rotationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_thumbstickAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_triggerAction(::UnityEngine::InputSystem::InputAction* value);

  /// @brief Method .ctor, addr 0x591c454, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::XRNode node, ::UnityEngine::InputSystem::InputAction* positionAction, ::UnityEngine::InputSystem::InputAction* rotationAction,
                    ::UnityEngine::InputSystem::InputAction* thumbstickAction, ::UnityEngine::InputSystem::InputAction* triggerAction);

  /// @brief Method get_hapticsHandler, addr 0x591d12c, size 0x8, virtual false, abstract: false, final false
  inline ::BeatSaber::Haptics::IHapticImpulseTransmitter* get_hapticsHandler();

  /// @brief Method get_manufacturer, addr 0x591d13c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::VRControllerManufacturer get_manufacturer();

  /// @brief Method set_hapticsHandler, addr 0x591d134, size 0x8, virtual false, abstract: false, final false
  inline void set_hapticsHandler(::BeatSaber::Haptics::IHapticImpulseTransmitter* value);

  /// @brief Method set_manufacturer, addr 0x591d144, size 0x8, virtual false, abstract: false, final false
  inline void set_manufacturer(::GlobalNamespace::VRControllerManufacturer value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6805 };

  /// @brief Field positionAction, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___positionAction;

  /// @brief Field rotationAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___rotationAction;

  /// @brief Field thumbstickAction, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___thumbstickAction;

  /// @brief Field triggerAction, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___triggerAction;

  /// @brief Field node, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  /// @brief Field <hapticsHandler>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::BeatSaber::Haptics::IHapticImpulseTransmitter* ____hapticsHandler_k__BackingField;

  /// @brief Field <manufacturer>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::VRControllerManufacturer ____manufacturer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRController, ___positionAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___rotationAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___thumbstickAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___triggerAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ___node) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ____hapticsHandler_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRController, ____manufacturer_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityXRController) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
