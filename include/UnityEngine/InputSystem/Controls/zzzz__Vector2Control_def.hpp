#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Control)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::Vector2Control);
// Type: UnityEngine.InputSystem.Controls::Vector2Control
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::Vector2Control*
class CORDL_TYPE Vector2Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field <x>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__x_k__BackingField, put = __cordl_internal_set__x_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__y_k__BackingField, put = __cordl_internal_set__y_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  __declspec(property(get = get_x, put = set_x))::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y))::UnityEngine::InputSystem::Controls::AxisControl* y;

  /// @brief Method EvaluateMagnitude, addr 0x3179704, size 0xb4, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method FinishSetup, addr 0x3177b0c, size 0xa0, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::Vector2Control* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x317963c, size 0x68, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x31796a4, size 0x60, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector2 value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__x_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__x_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__y_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__y_k__BackingField() const;

  constexpr void __cordl_internal_set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x3177bb0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_x, addr 0x317961c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method get_y, addr 0x317962c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method set_x, addr 0x3179624, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_y, addr 0x3179634, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Control();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Control", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Control(Vector2Control&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Control", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Control(Vector2Control const&) = delete;

  /// @brief Field <x>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::Vector2Control, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector2Control, ____x_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector2Control, ____y_k__BackingField) == 0xf8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::Vector2Control);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::Vector2Control*, "UnityEngine.InputSystem.Controls", "Vector2Control");
