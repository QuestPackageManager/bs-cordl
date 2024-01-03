#pragma once
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
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::Vector3Control);
// Type: UnityEngine.InputSystem.Controls::Vector3Control
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 412 }), TypeDefinitionIndex(TypeDefinitionIndex(6216)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6645)) CS Name: ::UnityEngine.InputSystem.Controls::Vector3Control*
class CORDL_TYPE Vector3Control : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field <x>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__x_k__BackingField, put = __set__x_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__y_k__BackingField, put = __set__y_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__z_k__BackingField, put = __set__z_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField;

  __declspec(property(get = get_x, put = set_x))::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y))::UnityEngine::InputSystem::Controls::AxisControl* y;

  __declspec(property(get = get_z, put = set_z))::UnityEngine::InputSystem::Controls::AxisControl* z;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__x_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__x_k__BackingField() const;

  constexpr void __set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__y_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__y_k__BackingField() const;

  constexpr void __set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__z_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__z_k__BackingField() const;

  constexpr void __set__z_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_x, addr 0x2b0c108, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method set_x, addr 0x2b0c110, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_y, addr 0x2b0c118, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method set_y, addr 0x2b0c120, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_z, addr 0x2b0c128, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_z();

  /// @brief Method set_z, addr 0x2b0c130, size 0x8, virtual false, abstract: false, final false
  inline void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline ::UnityEngine::InputSystem::Controls::Vector3Control* New_ctor();

  /// @brief Method .ctor, addr 0x2b0c138, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method FinishSetup, addr 0x2b0c1c0, size 0xd0, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2b0c290, size 0x8c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2b0c31c, size 0x84, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector3 value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method EvaluateMagnitude, addr 0x2b0c3a0, size 0xc8, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Control(Vector3Control&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Control(Vector3Control const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Control();

public:
  /// @brief Field <x>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____z_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::Vector3Control, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____x_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____y_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::Vector3Control, ____z_k__BackingField) == 0x100, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::Vector3Control);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::Vector3Control*, "UnityEngine.InputSystem.Controls", "Vector3Control");
