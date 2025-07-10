#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/StickControl.hpp"
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
// Dependencies UnityEngine.InputSystem.Controls.Vector2Control
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.StickControl
class CORDL_TYPE StickControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
  // Declarations
  /// @brief Field <down>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__down_k__BackingField, put = __cordl_internal_set__down_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__left_k__BackingField, put = __cordl_internal_set__left_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__right_k__BackingField,
                      put = __cordl_internal_set__right_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _right_k__BackingField;

  /// @brief Field <up>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__up_k__BackingField, put = __cordl_internal_set__up_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _up_k__BackingField;

  __declspec(property(get = get_down, put = set_down)) ::UnityEngine::InputSystem::Controls::ButtonControl* down;

  __declspec(property(get = get_left, put = set_left)) ::UnityEngine::InputSystem::Controls::ButtonControl* left;

  __declspec(property(get = get_right, put = set_right)) ::UnityEngine::InputSystem::Controls::ButtonControl* right;

  __declspec(property(get = get_up, put = set_up)) ::UnityEngine::InputSystem::Controls::ButtonControl* up;

  /// @brief Method FinishSetup, addr 0x45637ac, size 0xf8, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::StickControl* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__down_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__down_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__left_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__left_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__right_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__right_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__up_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__up_k__BackingField();

  constexpr void __cordl_internal_set__down_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__left_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__right_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__up_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x45638a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_down, addr 0x456377c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_down();

  /// @brief Method get_left, addr 0x456378c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_left();

  /// @brief Method get_right, addr 0x456379c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_right();

  /// @brief Method get_up, addr 0x456376c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_up();

  /// @brief Method set_down, addr 0x4563784, size 0x8, virtual false, abstract: false, final false
  inline void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_left, addr 0x4563794, size 0x8, virtual false, abstract: false, final false
  inline void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_right, addr 0x45637a4, size 0x8, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_up, addr 0x4563774, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7050 };

  /// @brief Field <up>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____up_k__BackingField;

  /// @brief Field <down>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____down_k__BackingField;

  /// @brief Field <left>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____left_k__BackingField;

  /// @brief Field <right>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____right_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____up_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____down_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____left_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::StickControl, ____right_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::StickControl, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::StickControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::StickControl*, "UnityEngine.InputSystem.Controls", "StickControl");
