#pragma once
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
// Type: UnityEngine.InputSystem.UI::ExtendedPointerEventData
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 408, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(13168)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(6372))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6371)) CS Name: ::UnityEngine.InputSystem.UI::ExtendedPointerEventData*
class CORDL_TYPE ExtendedPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
  // Declarations
  /// @brief Field <control>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __get__control_k__BackingField, put = __set__control_k__BackingField))::UnityEngine::InputSystem::InputControl* _control_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __get__device_k__BackingField, put = __set__device_k__BackingField))::UnityEngine::InputSystem::InputDevice* _device_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset 0x170, size 0x4
  __declspec(property(get = __get__touchId_k__BackingField, put = __set__touchId_k__BackingField)) int32_t _touchId_k__BackingField;

  /// @brief Field <pointerType>k__BackingField, offset 0x174, size 0x4
  __declspec(property(get = __get__pointerType_k__BackingField, put = __set__pointerType_k__BackingField))::UnityEngine::InputSystem::UI::UIPointerType _pointerType_k__BackingField;

  /// @brief Field <uiToolkitPointerId>k__BackingField, offset 0x178, size 0x4
  __declspec(property(get = __get__uiToolkitPointerId_k__BackingField, put = __set__uiToolkitPointerId_k__BackingField)) int32_t _uiToolkitPointerId_k__BackingField;

  /// @brief Field <trackedDevicePosition>k__BackingField, offset 0x17c, size 0xc
  __declspec(property(get = __get__trackedDevicePosition_k__BackingField, put = __set__trackedDevicePosition_k__BackingField))::UnityEngine::Vector3 _trackedDevicePosition_k__BackingField;

  /// @brief Field <trackedDeviceOrientation>k__BackingField, offset 0x188, size 0x10
  __declspec(property(get = __get__trackedDeviceOrientation_k__BackingField, put = __set__trackedDeviceOrientation_k__BackingField))::UnityEngine::Quaternion _trackedDeviceOrientation_k__BackingField;

  __declspec(property(get = get_control, put = set_control))::UnityEngine::InputSystem::InputControl* control;

  __declspec(property(get = get_device, put = set_device))::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_touchId, put = set_touchId)) int32_t touchId;

  __declspec(property(get = get_pointerType, put = set_pointerType))::UnityEngine::InputSystem::UI::UIPointerType pointerType;

  __declspec(property(get = get_uiToolkitPointerId, put = set_uiToolkitPointerId)) int32_t uiToolkitPointerId;

  __declspec(property(get = get_trackedDevicePosition, put = set_trackedDevicePosition))::UnityEngine::Vector3 trackedDevicePosition;

  __declspec(property(get = get_trackedDeviceOrientation, put = set_trackedDeviceOrientation))::UnityEngine::Quaternion trackedDeviceOrientation;

  constexpr ::UnityEngine::InputSystem::InputControl*& __get__control_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& __get__control_k__BackingField() const;

  constexpr void __set__control_k__BackingField(::UnityEngine::InputSystem::InputControl* value);

  constexpr ::UnityEngine::InputSystem::InputDevice*& __get__device_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& __get__device_k__BackingField() const;

  constexpr void __set__device_k__BackingField(::UnityEngine::InputSystem::InputDevice* value);

  constexpr int32_t& __get__touchId_k__BackingField();

  constexpr int32_t const& __get__touchId_k__BackingField() const;

  constexpr void __set__touchId_k__BackingField(int32_t value);

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType& __get__pointerType_k__BackingField();

  constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& __get__pointerType_k__BackingField() const;

  constexpr void __set__pointerType_k__BackingField(::UnityEngine::InputSystem::UI::UIPointerType value);

  constexpr int32_t& __get__uiToolkitPointerId_k__BackingField();

  constexpr int32_t const& __get__uiToolkitPointerId_k__BackingField() const;

  constexpr void __set__uiToolkitPointerId_k__BackingField(int32_t value);

  constexpr ::UnityEngine::Vector3& __get__trackedDevicePosition_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__trackedDevicePosition_k__BackingField() const;

  constexpr void __set__trackedDevicePosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__trackedDeviceOrientation_k__BackingField();

  constexpr ::UnityEngine::Quaternion const& __get__trackedDeviceOrientation_k__BackingField() const;

  constexpr void __set__trackedDeviceOrientation_k__BackingField(::UnityEngine::Quaternion value);

  static inline ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method .ctor, addr 0x2acf7fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_control, addr 0x2acf804, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_control();

  /// @brief Method set_control, addr 0x2acf80c, size 0x8, virtual false, abstract: false, final false
  inline void set_control(::UnityEngine::InputSystem::InputControl* value);

  /// @brief Method get_device, addr 0x2acf814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method set_device, addr 0x2acf81c, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::InputSystem::InputDevice* value);

  /// @brief Method get_touchId, addr 0x2acf824, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_touchId();

  /// @brief Method set_touchId, addr 0x2acf82c, size 0x8, virtual false, abstract: false, final false
  inline void set_touchId(int32_t value);

  /// @brief Method get_pointerType, addr 0x2acf834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();

  /// @brief Method set_pointerType, addr 0x2acf83c, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerType(::UnityEngine::InputSystem::UI::UIPointerType value);

  /// @brief Method get_uiToolkitPointerId, addr 0x2acf844, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_uiToolkitPointerId();

  /// @brief Method set_uiToolkitPointerId, addr 0x2acf84c, size 0x8, virtual false, abstract: false, final false
  inline void set_uiToolkitPointerId(int32_t value);

  /// @brief Method get_trackedDevicePosition, addr 0x2acf854, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_trackedDevicePosition();

  /// @brief Method set_trackedDevicePosition, addr 0x2acf864, size 0x10, virtual false, abstract: false, final false
  inline void set_trackedDevicePosition(::UnityEngine::Vector3 value);

  /// @brief Method get_trackedDeviceOrientation, addr 0x2acf874, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_trackedDeviceOrientation();

  /// @brief Method set_trackedDeviceOrientation, addr 0x2acf888, size 0x14, virtual false, abstract: false, final false
  inline void set_trackedDeviceOrientation(::UnityEngine::Quaternion value);

  /// @brief Method ToString, addr 0x2acf89c, size 0x3bc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method MakePointerIdForTouch, addr 0x2acfc58, size 0x8, virtual false, abstract: false, final false
  static inline int32_t MakePointerIdForTouch(int32_t deviceId, int32_t touchId);

  /// @brief Method TouchIdFromPointerId, addr 0x2acfc60, size 0x8, virtual false, abstract: false, final false
  static inline int32_t TouchIdFromPointerId(int32_t pointerId);

  /// @brief Method ReadDeviceState, addr 0x2acfc68, size 0x254, virtual false, abstract: false, final false
  inline void ReadDeviceState();

  /// @brief Method GetPenPointerId, addr 0x2acfebc, size 0x254, virtual false, abstract: false, final false
  static inline int32_t GetPenPointerId(::UnityEngine::InputSystem::Pen* pen);

  /// @brief Method GetTouchPointerId, addr 0x2ad0110, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t GetTouchPointerId(::UnityEngine::InputSystem::Controls::TouchControl* touchControl);

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedPointerEventData(ExtendedPointerEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedPointerEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedPointerEventData(ExtendedPointerEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedPointerEventData();

public:
  /// @brief Field <control>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ____control_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ____device_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset: 0x170, size: 0x4, def value: None
  int32_t ____touchId_k__BackingField;

  /// @brief Field <pointerType>k__BackingField, offset: 0x174, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::UIPointerType ____pointerType_k__BackingField;

  /// @brief Field <uiToolkitPointerId>k__BackingField, offset: 0x178, size: 0x4, def value: None
  int32_t ____uiToolkitPointerId_k__BackingField;

  /// @brief Field <trackedDevicePosition>k__BackingField, offset: 0x17c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____trackedDevicePosition_k__BackingField;

  /// @brief Field <trackedDeviceOrientation>k__BackingField, offset: 0x188, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____trackedDeviceOrientation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::ExtendedPointerEventData, 0x198>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____control_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____device_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____touchId_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____pointerType_k__BackingField) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____uiToolkitPointerId_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____trackedDevicePosition_k__BackingField) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::ExtendedPointerEventData, ____trackedDeviceOrientation_k__BackingField) == 0x188, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::ExtendedPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, "UnityEngine.InputSystem.UI", "ExtendedPointerEventData");
