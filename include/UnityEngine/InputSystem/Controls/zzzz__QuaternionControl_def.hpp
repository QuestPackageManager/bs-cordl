#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(QuaternionControl)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::QuaternionControl);
// Type: UnityEngine.InputSystem.Controls::QuaternionControl
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3342 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10252))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6639)) CS Name: ::UnityEngine.InputSystem.Controls::QuaternionControl*
class CORDL_TYPE QuaternionControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  /// @brief Field <x>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__x_k__BackingField, put = __set__x_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__y_k__BackingField, put = __set__y_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__z_k__BackingField, put = __set__z_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField;

  /// @brief Field <w>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __get__w_k__BackingField, put = __set__w_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _w_k__BackingField;

  __declspec(property(get = get_x, put = set_x))::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y))::UnityEngine::InputSystem::Controls::AxisControl* y;

  __declspec(property(get = get_z, put = set_z))::UnityEngine::InputSystem::Controls::AxisControl* z;

  __declspec(property(get = get_w, put = set_w))::UnityEngine::InputSystem::Controls::AxisControl* w;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__x_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__x_k__BackingField() const;

  constexpr void __set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__y_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__y_k__BackingField() const;

  constexpr void __set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__z_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__z_k__BackingField() const;

  constexpr void __set__z_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__w_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__w_k__BackingField() const;

  constexpr void __set__w_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_x addr 0x2b0b254 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method set_x addr 0x2b0b25c size 0x8 virtual false final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_y addr 0x2b0b264 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method set_y addr 0x2b0b26c size 0x8 virtual false final false
  inline void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_z addr 0x2b0b274 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_z();

  /// @brief Method set_z addr 0x2b0b27c size 0x8 virtual false final false
  inline void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_w addr 0x2b0b284 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_w();

  /// @brief Method set_w addr 0x2b0b28c size 0x8 virtual false final false
  inline void set_w(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline ::UnityEngine::InputSystem::Controls::QuaternionControl* New_ctor();

  /// @brief Method .ctor addr 0x2b0b294 size 0x90 virtual false final false
  inline void _ctor();

  /// @brief Method FinishSetup addr 0x2b0b324 size 0xf8 virtual true final false
  inline void FinishSetup();

  /// @brief Method ReadUnprocessedValueFromState addr 0x2b0b41c size 0xcc virtual true final false
  inline ::UnityEngine::Quaternion ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState addr 0x2b0b4e8 size 0xb0 virtual true final false
  inline void WriteValueIntoState(::UnityEngine::Quaternion value, ::cordl_internals::Ptr<void> statePtr);

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionControl(QuaternionControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionControl(QuaternionControl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionControl();

public:
  /// @brief Field <x>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____z_k__BackingField;

  /// @brief Field <w>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____w_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::QuaternionControl, 0x110>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::QuaternionControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::QuaternionControl*, "UnityEngine.InputSystem.Controls", "QuaternionControl");
