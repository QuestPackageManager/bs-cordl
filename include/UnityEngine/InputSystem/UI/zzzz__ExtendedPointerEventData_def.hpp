#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/ExtendedPointerEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedPointerEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class Pen;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
// Dependencies UnityEngine.EventSystems.PointerEventData, UnityEngine.InputSystem.UI.UIPointerType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.ExtendedPointerEventData
class CORDL_TYPE ExtendedPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
  // Declarations
  /// @brief Field <control>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__control_k__BackingField, put = __cordl_internal_set__control_k__BackingField)) ::UnityEngine::InputSystem::InputControl* _control_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::InputSystem::InputDevice* _device_k__BackingField;

  /// @brief Field <pointerType>k__BackingField, offset 0x194, size 0x4
  __declspec(property(get = __cordl_internal_get__pointerType_k__BackingField,
                      put = __cordl_internal_set__pointerType_k__BackingField)) ::UnityEngine::InputSystem::UI::UIPointerType _pointerType_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get__touchId_k__BackingField, put = __cordl_internal_set__touchId_k__BackingField)) int32_t _touchId_k__BackingField;

  /// @brief Field <trackedDeviceOrientation>k__BackingField, offset 0x1a8, size 0x10
  __declspec(property(get = __cordl_internal_get__trackedDeviceOrientation_k__BackingField,
                      put = __cordl_internal_set__trackedDeviceOrientation_k__BackingField)) ::UnityEngine::Quaternion _trackedDeviceOrientation_k__BackingField;

  /// @brief Field <trackedDevicePosition>k__BackingField, offset 0x19c, size 0xc
  __declspec(property(get = __cordl_internal_get__trackedDevicePosition_k__BackingField,
                      put = __cordl_internal_set__trackedDevicePosition_k__BackingField)) ::UnityEngine::Vector3 _trackedDevicePosition_k__BackingField;

  /// @brief Field <uiToolkitPointerId>k__BackingField, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get__uiToolkitPointerId_k__BackingField, put = __cordl_internal_set__uiToolkitPointerId_k__BackingField)) int32_t _uiToolkitPointerId_k__BackingField;

  __declspec(property(get = get_control, put = set_control)) ::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_pointerType, put = set_pointerType)) ::UnityEngine::InputSystem::UI::UIPointerType pointerType;

  __declspec(property(get = get_touchId, put = set_touchId)) int32_t touchId;

  __declspec(property(get = get_trackedDeviceOrientation, put = set_trackedDeviceOrientation)) ::UnityEngine::Quaternion trackedDeviceOrientation;

  __declspec(property(get = get_trackedDevicePosition, put = set_trackedDevicePosition)) ::UnityEngine::Vector3 trackedDevicePosition;

  __declspec(property(get = get_uiToolkitPointerId, put = set_uiToolkitPointerId)) int32_t uiToolkitPointerId;

  /// @brief Method GetPenPointerId, addr 0x45f006c, size 0x250, virtual false, abstract: false, final false
  static inline int32_t GetPenPointerId(::UnityEngine::InputSystem::Pen* pen);

  /// @brief Method GetTouchPointerId, addr 0x45f02bc, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* touchControl);

  /// @brief Method MakePointerIdForTouch, addr 0x45efda4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t MakePointerIdForTouch(int32_t deviceId, int32_t touchId);

  static inline ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ReadDeviceState, addr 0x45efdb4, size 0x2b8, virtual false, abstract: false, final false
  inline void ReadDeviceState();

  /// @brief Method ToString, addr 0x45ef800, size 0x5a4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TouchIdFromPointerId, addr 0x45efdac, size 0x8, virtual false, abstract: false, final false
  static inline int32_t TouchIdFromPointerId(int32_t pointerId);

  constexpr ::UnityEngine::InputSystem::InputControl* const& __cordl_internal_get__control_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get__control_k__BackingField();

  constexpr ::UnityEngine::InputSystem::InputDevice* const& __cordl_internal_get__device_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& __cordl_internal_get__pointerType_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType& __cordl_internal_get__pointerType_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__touchId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__touchId_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__trackedDeviceOrientation_k__BackingField() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__trackedDeviceOrientation_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__trackedDevicePosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__trackedDevicePosition_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__uiToolkitPointerId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__uiToolkitPointerId_k__BackingField();

  constexpr void __cordl_internal_set__control_k__BackingField(::UnityEngine::InputSystem::InputControl* value);

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value);

  constexpr void __cordl_internal_set__pointerType_k__BackingField(::UnityEngine::InputSystem::UI::UIPointerType value);

  constexpr void __cordl_internal_set__touchId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__trackedDeviceOrientation_k__BackingField(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__trackedDevicePosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__uiToolkitPointerId_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x45ef760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_control, addr 0x45ef768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method get_device, addr 0x45ef778, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method get_pointerType, addr 0x45ef798, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();

  /// @brief Method get_touchId, addr 0x45ef788, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_touchId();

  /// @brief Method get_trackedDeviceOrientation, addr 0x45ef7d8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_trackedDeviceOrientation();

  /// @brief Method get_trackedDevicePosition, addr 0x45ef7b8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_trackedDevicePosition();

  /// @brief Method get_uiToolkitPointerId, addr 0x45ef7a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_uiToolkitPointerId();

  /// @brief Method set_control, addr 0x45ef770, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::InputSystem::InputControl* value);

  /// @brief Method set_device, addr 0x45ef780, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::InputSystem::InputDevice* value);

  /// @brief Method set_pointerType, addr 0x45ef7a0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value);

  /// @brief Method set_touchId, addr 0x45ef790, size 0x8, virtual false, abstract: false, final false
  inline void set_touchId(int32_t value);

  /// @brief Method set_trackedDeviceOrientation, addr 0x45ef7ec, size 0x14, virtual false, abstract: false, final false
  inline void set_trackedDeviceOrientation(::UnityEngine::Quaternion value);

  /// @brief Method set_trackedDevicePosition, addr 0x45ef7c8, size 0x10, virtual false, abstract: false, final false
  inline void set_trackedDevicePosition(::UnityEngine::Vector3 value);

  /// @brief Method set_uiToolkitPointerId, addr 0x45ef7b0, size 0x8, virtual false, abstract: false, final false
  inline void set_uiToolkitPointerId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedPointerEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedPointerEventData(ExtendedPointerEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedPointerEventData(ExtendedPointerEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6778 };

  /// @brief Field <control>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ____control_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ____device_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset: 0x190, size: 0x4, def value: None
  int32_t ____touchId_k__BackingField;

  /// @brief Field <pointerType>k__BackingField, offset: 0x194, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::UIPointerType ____pointerType_k__BackingField;

  /// @brief Field <uiToolkitPointerId>k__BackingField, offset: 0x198, size: 0x4, def value: None
  int32_t ____uiToolkitPointerId_k__BackingField;

  /// @brief Field <trackedDevicePosition>k__BackingField, offset: 0x19c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____trackedDevicePosition_k__BackingField;

  /// @brief Field <trackedDeviceOrientation>k__BackingField, offset: 0x1a8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____trackedDeviceOrientation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____control_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____device_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____touchId_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____pointerType_k__BackingField) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____uiToolkitPointerId_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____trackedDevicePosition_k__BackingField) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____trackedDeviceOrientation_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedPointerEventData, 0x1b8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, "UnityEngine.InputSystem.UI", "ExtendedPointerEventData");
