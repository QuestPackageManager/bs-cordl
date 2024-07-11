#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DeltaControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
CORDL_MODULE_EXPORT(DeltaControl)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DeltaControl);
// Type: UnityEngine.InputSystem.Controls::DeltaControl
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::DeltaControl*
class CORDL_TYPE DeltaControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
  // Declarations
  /// @brief Field <down>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__down_k__BackingField, put = __cordl_internal_set__down_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__left_k__BackingField, put = __cordl_internal_set__left_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__right_k__BackingField, put = __cordl_internal_set__right_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _right_k__BackingField;

  /// @brief Field <up>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__up_k__BackingField, put = __cordl_internal_set__up_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _up_k__BackingField;

  __declspec(property(get = get_down, put = set_down))::UnityEngine::InputSystem::Controls::AxisControl* down;

  __declspec(property(get = get_left, put = set_left))::UnityEngine::InputSystem::Controls::AxisControl* left;

  __declspec(property(get = get_right, put = set_right))::UnityEngine::InputSystem::Controls::AxisControl* right;

  __declspec(property(get = get_up, put = set_up))::UnityEngine::InputSystem::Controls::AxisControl* up;

  /// @brief Method FinishSetup, addr 0x31af3b8, size 0xf8, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::DeltaControl* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__down_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__down_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__left_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__left_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__right_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__right_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__up_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__up_k__BackingField() const;

  constexpr void __cordl_internal_set__down_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__left_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__right_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__up_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x31af56c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_down, addr 0x31af388, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_down();

  /// @brief Method get_left, addr 0x31af398, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_left();

  /// @brief Method get_right, addr 0x31af3a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_right();

  /// @brief Method get_up, addr 0x31af378, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_up();

  /// @brief Method set_down, addr 0x31af390, size 0x8, virtual false, abstract: false, final false
  inline void set_down(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_left, addr 0x31af3a0, size 0x8, virtual false, abstract: false, final false
  inline void set_left(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_right, addr 0x31af3b0, size 0x8, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_up, addr 0x31af380, size 0x8, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeltaControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeltaControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeltaControl(DeltaControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeltaControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeltaControl(DeltaControl const&) = delete;

  /// @brief Field <up>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____up_k__BackingField;

  /// @brief Field <down>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____right_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DeltaControl, 0x140>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DeltaControl, ____up_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DeltaControl, ____down_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DeltaControl, ____left_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DeltaControl, ____right_k__BackingField) == 0x138, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DeltaControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DeltaControl*, "UnityEngine.InputSystem.Controls", "DeltaControl");
