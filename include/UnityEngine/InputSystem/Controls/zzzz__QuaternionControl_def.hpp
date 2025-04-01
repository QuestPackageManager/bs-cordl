#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/QuaternionControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(QuaternionControl)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
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
// Dependencies UnityEngine.InputSystem.InputControl`1<TValue>, UnityEngine.Quaternion
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.QuaternionControl
class CORDL_TYPE QuaternionControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion> {
public:
  // Declarations
  /// @brief Field <w>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__w_k__BackingField, put = __cordl_internal_set__w_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _w_k__BackingField;

  /// @brief Field <x>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__x_k__BackingField, put = __cordl_internal_set__x_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__y_k__BackingField, put = __cordl_internal_set__y_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__z_k__BackingField, put = __cordl_internal_set__z_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _z_k__BackingField;

  __declspec(property(get = get_w, put = set_w)) ::UnityEngine::InputSystem::Controls::AxisControl* w;

  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::InputSystem::Controls::AxisControl* x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::InputSystem::Controls::AxisControl* y;

  __declspec(property(get = get_z, put = set_z)) ::UnityEngine::InputSystem::Controls::AxisControl* z;

  /// @brief Method CalculateOptimizedControlDataType, addr 0x455e9a8, size 0x230, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();

  /// @brief Method FinishSetup, addr 0x455e644, size 0x114, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::QuaternionControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x455e758, size 0x124, virtual true, abstract: false, final false
  inline ::UnityEngine::Quaternion ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x455e87c, size 0x12c, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Quaternion value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__w_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__w_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__x_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__x_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__y_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__y_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__z_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__z_k__BackingField();

  constexpr void __cordl_internal_set__w_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__z_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x455e5b4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_w, addr 0x455e5a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_w();

  /// @brief Method get_x, addr 0x455e574, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_x();

  /// @brief Method get_y, addr 0x455e584, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_y();

  /// @brief Method get_z, addr 0x455e594, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_z();

  /// @brief Method set_w, addr 0x455e5ac, size 0x8, virtual false, abstract: false, final false
  inline void set_w(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_x, addr 0x455e57c, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_y, addr 0x455e58c, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_z, addr 0x455e59c, size 0x8, virtual false, abstract: false, final false
  inline void set_z(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaternionControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaternionControl(QuaternionControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaternionControl(QuaternionControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7049 };

  /// @brief Field <x>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____x_k__BackingField;

  /// @brief Field <y>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____y_k__BackingField;

  /// @brief Field <z>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____z_k__BackingField;

  /// @brief Field <w>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____w_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::QuaternionControl, ____x_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::QuaternionControl, ____y_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::QuaternionControl, ____z_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::QuaternionControl, ____w_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::QuaternionControl, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::QuaternionControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::QuaternionControl*, "UnityEngine.InputSystem.Controls", "QuaternionControl");
