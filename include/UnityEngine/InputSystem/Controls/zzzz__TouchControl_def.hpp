#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
CORDL_MODULE_EXPORT(TouchControl)
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::TouchControl);
// Type: UnityEngine.InputSystem.Controls::TouchControl
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6514)), TypeDefinitionIndex(TypeDefinitionIndex(6216)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3896
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6641)) CS Name: ::UnityEngine.InputSystem.Controls::TouchControl*
class CORDL_TYPE TouchControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState> {
public:
  // Declarations
  /// @brief Field <press>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__press_k__BackingField, put = __set__press_k__BackingField))::UnityEngine::InputSystem::Controls::TouchPressControl* _press_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__touchId_k__BackingField, put = __set__touchId_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _touchId_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __get__delta_k__BackingField, put = __set__delta_k__BackingField))::UnityEngine::InputSystem::Controls::DeltaControl* _delta_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __get__pressure_k__BackingField, put = __set__pressure_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _pressure_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __get__radius_k__BackingField, put = __set__radius_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _radius_k__BackingField;

  /// @brief Field <phase>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __get__phase_k__BackingField, put = __set__phase_k__BackingField))::UnityEngine::InputSystem::Controls::TouchPhaseControl* _phase_k__BackingField;

  /// @brief Field <indirectTouch>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __get__indirectTouch_k__BackingField, put = __set__indirectTouch_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _indirectTouch_k__BackingField;

  /// @brief Field <tap>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __get__tap_k__BackingField, put = __set__tap_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _tap_k__BackingField;

  /// @brief Field <tapCount>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __get__tapCount_k__BackingField, put = __set__tapCount_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _tapCount_k__BackingField;

  /// @brief Field <startTime>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __get__startTime_k__BackingField, put = __set__startTime_k__BackingField))::UnityEngine::InputSystem::Controls::DoubleControl* _startTime_k__BackingField;

  /// @brief Field <startPosition>k__BackingField, offset 0x148, size 0x8
  __declspec(property(get = __get__startPosition_k__BackingField, put = __set__startPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _startPosition_k__BackingField;

  __declspec(property(get = get_press, put = set_press))::UnityEngine::InputSystem::Controls::TouchPressControl* press;

  __declspec(property(get = get_touchId, put = set_touchId))::UnityEngine::InputSystem::Controls::IntegerControl* touchId;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::InputSystem::Controls::Vector2Control* position;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::InputSystem::Controls::DeltaControl* delta;

  __declspec(property(get = get_pressure, put = set_pressure))::UnityEngine::InputSystem::Controls::AxisControl* pressure;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::InputSystem::Controls::Vector2Control* radius;

  __declspec(property(get = get_phase, put = set_phase))::UnityEngine::InputSystem::Controls::TouchPhaseControl* phase;

  __declspec(property(get = get_indirectTouch, put = set_indirectTouch))::UnityEngine::InputSystem::Controls::ButtonControl* indirectTouch;

  __declspec(property(get = get_tap, put = set_tap))::UnityEngine::InputSystem::Controls::ButtonControl* tap;

  __declspec(property(get = get_tapCount, put = set_tapCount))::UnityEngine::InputSystem::Controls::IntegerControl* tapCount;

  __declspec(property(get = get_startTime, put = set_startTime))::UnityEngine::InputSystem::Controls::DoubleControl* startTime;

  __declspec(property(get = get_startPosition, put = set_startPosition))::UnityEngine::InputSystem::Controls::Vector2Control* startPosition;

  __declspec(property(get = get_isInProgress)) bool isInProgress;

  constexpr ::UnityEngine::InputSystem::Controls::TouchPressControl*& __get__press_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::TouchPressControl*> const& __get__press_k__BackingField() const;

  constexpr void __set__press_k__BackingField(::UnityEngine::InputSystem::Controls::TouchPressControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__touchId_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__touchId_k__BackingField() const;

  constexpr void __set__touchId_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__position_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::DeltaControl*& __get__delta_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DeltaControl*> const& __get__delta_k__BackingField() const;

  constexpr void __set__delta_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__pressure_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__pressure_k__BackingField() const;

  constexpr void __set__pressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__radius_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__radius_k__BackingField() const;

  constexpr void __set__radius_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::TouchPhaseControl*& __get__phase_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::TouchPhaseControl*> const& __get__phase_k__BackingField() const;

  constexpr void __set__phase_k__BackingField(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__indirectTouch_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__indirectTouch_k__BackingField() const;

  constexpr void __set__indirectTouch_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__tap_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__tap_k__BackingField() const;

  constexpr void __set__tap_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__tapCount_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__tapCount_k__BackingField() const;

  constexpr void __set__tapCount_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::DoubleControl*& __get__startTime_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::DoubleControl*> const& __get__startTime_k__BackingField() const;

  constexpr void __set__startTime_k__BackingField(::UnityEngine::InputSystem::Controls::DoubleControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__startPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__startPosition_k__BackingField() const;

  constexpr void __set__startPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_press, addr 0x2b0b6d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPressControl* get_press();

  /// @brief Method set_press, addr 0x2b0b6dc, size 0x8, virtual false, abstract: false, final false
  inline void set_press(::UnityEngine::InputSystem::Controls::TouchPressControl* value);

  /// @brief Method get_touchId, addr 0x2b0b6e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_touchId();

  /// @brief Method set_touchId, addr 0x2b0b6ec, size 0x8, virtual false, abstract: false, final false
  inline void set_touchId(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_position, addr 0x2b0b6f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_position();

  /// @brief Method set_position, addr 0x2b0b6fc, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_delta, addr 0x2b0b704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DeltaControl* get_delta();

  /// @brief Method set_delta, addr 0x2b0b70c, size 0x8, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl* value);

  /// @brief Method get_pressure, addr 0x2b0b714, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_pressure();

  /// @brief Method set_pressure, addr 0x2b0b71c, size 0x8, virtual false, abstract: false, final false
  inline void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_radius, addr 0x2b0b724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_radius();

  /// @brief Method set_radius, addr 0x2b0b72c, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_phase, addr 0x2b0b734, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* get_phase();

  /// @brief Method set_phase, addr 0x2b0b73c, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::Controls::TouchPhaseControl* value);

  /// @brief Method get_indirectTouch, addr 0x2b0b744, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_indirectTouch();

  /// @brief Method set_indirectTouch, addr 0x2b0b74c, size 0x8, virtual false, abstract: false, final false
  inline void set_indirectTouch(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_tap, addr 0x2b0b754, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_tap();

  /// @brief Method set_tap, addr 0x2b0b75c, size 0x8, virtual false, abstract: false, final false
  inline void set_tap(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_tapCount, addr 0x2b0b764, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_tapCount();

  /// @brief Method set_tapCount, addr 0x2b0b76c, size 0x8, virtual false, abstract: false, final false
  inline void set_tapCount(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_startTime, addr 0x2b0b774, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::DoubleControl* get_startTime();

  /// @brief Method set_startTime, addr 0x2b0b77c, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(::UnityEngine::InputSystem::Controls::DoubleControl* value);

  /// @brief Method get_startPosition, addr 0x2b0b784, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_startPosition();

  /// @brief Method set_startPosition, addr 0x2b0b78c, size 0x8, virtual false, abstract: false, final false
  inline void set_startPosition(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_isInProgress, addr 0x2b0b794, size 0x70, virtual false, abstract: false, final false
  inline bool get_isInProgress();

  static inline ::UnityEngine::InputSystem::Controls::TouchControl* New_ctor();

  /// @brief Method .ctor, addr 0x2b0b804, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method FinishSetup, addr 0x2b0b87c, size 0x2d4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2b0bb50, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2b0bb74, size 0x70, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState value, ::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchControl(TouchControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchControl(TouchControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchControl();

public:
  /// @brief Field <press>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::TouchPressControl* ____press_k__BackingField;

  /// @brief Field <touchId>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____touchId_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DeltaControl* ____delta_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____pressure_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____radius_k__BackingField;

  /// @brief Field <phase>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::TouchPhaseControl* ____phase_k__BackingField;

  /// @brief Field <indirectTouch>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____indirectTouch_k__BackingField;

  /// @brief Field <tap>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____tap_k__BackingField;

  /// @brief Field <tapCount>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____tapCount_k__BackingField;

  /// @brief Field <startTime>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::DoubleControl* ____startTime_k__BackingField;

  /// @brief Field <startPosition>k__BackingField, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____startPosition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::TouchControl, 0x150>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____press_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____touchId_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____position_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____delta_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____pressure_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____radius_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____phase_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____indirectTouch_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____tap_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____tapCount_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____startTime_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::TouchControl, ____startPosition_k__BackingField) == 0x148, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::TouchControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::TouchControl*, "UnityEngine.InputSystem.Controls", "TouchControl");
