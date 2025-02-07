#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/Vector3Control.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Control)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::Vector3Control);
// Dependencies UnityEngine.InputSystem.InputControl`1<TValue>, UnityEngine.Vector3
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.Vector3Control
class CORDL_TYPE Vector3Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field <x>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__x_k__BackingField, put = __cordl_internal_set__x_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__y_k__BackingField, put = __cordl_internal_set__y_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__z_k__BackingField, put = __cordl_internal_set__z_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::InputSystem::Controls::AxisControl* y;

  __declspec(property(get = get_z, put = set_z)) ::UnityEngine::InputSystem::Controls::AxisControl* z;

  /// @brief Method CalculateOptimizedControlDataType, addr 0x4569464, size 0x1a8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();

  /// @brief Method EvaluateMagnitude, addr 0x456939c, size 0xc8, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method FinishSetup, addr 0x45690c4, size 0xe4, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::Vector3Control* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x45691a8, size 0xec, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x4569294, size 0x108, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector3 value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__x_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__x_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__y_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__y_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__z_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__z_k__BackingField();

  constexpr void __cordl_internal_set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__z_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x456903c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_x, addr 0x456900c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method get_y, addr 0x456901c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method get_z, addr 0x456902c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_z();

  /// @brief Method set_x, addr 0x4569014, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_y, addr 0x4569024, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_z, addr 0x4569034, size 0x8, virtual false, abstract: false, final false
  inline void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Control();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Control(Vector3Control&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Control(Vector3Control const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7054 };

  /// @brief Field <x>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____z_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____x_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____y_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____z_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::Vector3Control, 0x130>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::Vector3Control);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::Vector3Control*, "UnityEngine.InputSystem.Controls", "Vector3Control");
