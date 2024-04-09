#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
CORDL_MODULE_EXPORT(StickControl)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::StickControl);
// Type: UnityEngine.InputSystem.Controls::StickControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::StickControl*
class CORDL_TYPE StickControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
  // Declarations
  /// @brief Field <down>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__down_k__BackingField, put = __cordl_internal_set__down_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__left_k__BackingField, put = __cordl_internal_set__left_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__right_k__BackingField, put = __cordl_internal_set__right_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField;

  /// @brief Field <up>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__up_k__BackingField, put = __cordl_internal_set__up_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField;

  __declspec(property(get = get_down, put = set_down))::UnityEngine::InputSystem::Controls::ButtonControl* down;

  __declspec(property(get = get_left, put = set_left))::UnityEngine::InputSystem::Controls::ButtonControl* left;

  __declspec(property(get = get_right, put = set_right))::UnityEngine::InputSystem::Controls::ButtonControl* right;

  __declspec(property(get = get_up, put = set_up))::UnityEngine::InputSystem::Controls::ButtonControl* up;

  /// @brief Method FinishSetup, addr 0x3038f00, size 0xf8, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::StickControl* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__down_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__down_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__left_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__left_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__right_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__right_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__up_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__up_k__BackingField() const;

  constexpr void __cordl_internal_set__down_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__left_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__right_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__up_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x3038ff8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_down, addr 0x3038ed0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_down();

  /// @brief Method get_left, addr 0x3038ee0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_left();

  /// @brief Method get_right, addr 0x3038ef0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_right();

  /// @brief Method get_up, addr 0x3038ec0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_up();

  /// @brief Method set_down, addr 0x3038ed8, size 0x8, virtual false, abstract: false, final false
  inline void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_left, addr 0x3038ee8, size 0x8, virtual false, abstract: false, final false
  inline void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_right, addr 0x3038ef8, size 0x8, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_up, addr 0x3038ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StickControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StickControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StickControl(StickControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StickControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StickControl(StickControl const&) = delete;

  /// @brief Field <up>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____up_k__BackingField;

  /// @brief Field <down>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____right_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::StickControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____up_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____down_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____left_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____right_k__BackingField) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::StickControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::StickControl*, "UnityEngine.InputSystem.Controls", "StickControl");
