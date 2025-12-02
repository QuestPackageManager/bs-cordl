#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/Vector2Control.hpp"
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
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
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
// Dependencies UnityEngine.InputSystem.InputControl`1<TValue>, UnityEngine.Vector2
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.Vector2Control
class CORDL_TYPE Vector2Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field <x>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__x_k__BackingField, put = __cordl_internal_set__x_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__y_k__BackingField, put = __cordl_internal_set__y_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::InputSystem::Controls::AxisControl* y;

  /// @brief Method CalculateOptimizedControlDataType, addr 0x62df5c0, size 0x150, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();

  /// @brief Method EvaluateMagnitude, addr 0x62df504, size 0xbc, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(void* statePtr);

  /// @brief Method FinishSetup, addr 0x62dccd4, size 0xc0, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::Vector2Control* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x62df344, size 0xdc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadUnprocessedValueFromState(void* statePtr);

  /// @brief Method WriteValueIntoState, addr 0x62df420, size 0xe4, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector2 value, void* statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__x_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__x_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__y_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__y_k__BackingField();

  constexpr void __cordl_internal_set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x62dcd98, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_x, addr 0x62df324, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method get_y, addr 0x62df334, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method set_x, addr 0x62df32c, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_y, addr 0x62df33c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9112 };

  /// @brief Field <x>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector2Control, ____x_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector2Control, ____y_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::Vector2Control, 0x120>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::Vector2Control);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::Vector2Control*, "UnityEngine.InputSystem.Controls", "Vector2Control");
