#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DpadControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DpadControl)
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
struct DpadControl_ButtonBits;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl_DpadAxisControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct DpadControl_ButtonBits;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl_DpadAxisControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DpadControl);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl);
// Dependencies UnityEngine.InputSystem.Controls.AxisControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.DpadControl/DpadAxisControl
class CORDL_TYPE DpadControl_DpadAxisControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
  // Declarations
  /// @brief Field <component>k__BackingField, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get__component_k__BackingField, put = __cordl_internal_set__component_k__BackingField)) int32_t _component_k__BackingField;

  __declspec(property(get = get_component, put = set_component)) int32_t component;

  /// @brief Method FinishSetup, addr 0x4562f48, size 0x84, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x4562fcc, size 0xec, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  constexpr int32_t const& __cordl_internal_get__component_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__component_k__BackingField();

  constexpr void __cordl_internal_set__component_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x45630b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_component, addr 0x4562f38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_component();

  /// @brief Method set_component, addr 0x4562f40, size 0x8, virtual false, abstract: false, final false
  inline void set_component(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DpadControl_DpadAxisControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DpadControl_DpadAxisControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DpadControl_DpadAxisControl(DpadControl_DpadAxisControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DpadControl_DpadAxisControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DpadControl_DpadAxisControl(DpadControl_DpadAxisControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7044 };

  /// @brief Field <component>k__BackingField, offset: 0x12c, size: 0x4, def value: None
  int32_t ____component_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl, ____component_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl, 0x130>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Dependencies
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Controls.DpadControl/ButtonBits
struct CORDL_TYPE DpadControl_ButtonBits {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DpadControl_ButtonBits_Unwrapped
  enum struct __DpadControl_ButtonBits_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DpadControl_ButtonBits_Unwrapped() const noexcept {
    return static_cast<__DpadControl_ButtonBits_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DpadControl_ButtonBits();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DpadControl_ButtonBits(int32_t value__) noexcept;

  /// @brief Field Down value: I32(1)
  static ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits const Down;

  /// @brief Field Left value: I32(2)
  static ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits const Left;

  /// @brief Field Right value: I32(3)
  static ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits const Right;

  /// @brief Field Up value: I32(0)
  static ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Dependencies UnityEngine.InputSystem.Controls.Vector2Control
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.DpadControl
class CORDL_TYPE DpadControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
  // Declarations
  using ButtonBits = ::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits;

  using DpadAxisControl = ::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl;

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

  /// @brief Method FinishSetup, addr 0x45629f4, size 0xf4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeDpadVector, addr 0x4562d20, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MakeDpadVector(bool up, bool down, bool left, bool right, bool normalize);

  /// @brief Method MakeDpadVector, addr 0x4562f28, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MakeDpadVector(float_t up, float_t down, float_t left, float_t right);

  static inline ::UnityEngine::InputSystem::Controls::DpadControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x4562ae8, size 0x238, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x4562d7c, size 0x1ac, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector2 value, ::cordl_internals::Ptr<void> statePtr);

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

  /// @brief Method .ctor, addr 0x4562984, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_down, addr 0x4562954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_down();

  /// @brief Method get_left, addr 0x4562964, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_left();

  /// @brief Method get_right, addr 0x4562974, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_right();

  /// @brief Method get_up, addr 0x4562944, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_up();

  /// @brief Method set_down, addr 0x456295c, size 0x8, virtual false, abstract: false, final false
  inline void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_left, addr 0x456296c, size 0x8, virtual false, abstract: false, final false
  inline void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_right, addr 0x456297c, size 0x8, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_up, addr 0x456294c, size 0x8, virtual false, abstract: false, final false
  inline void set_up(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DpadControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DpadControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DpadControl(DpadControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DpadControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DpadControl(DpadControl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7046 };

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
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____up_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____down_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____left_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____right_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DpadControl, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DpadControl_ButtonBits, "UnityEngine.InputSystem.Controls", "DpadControl/ButtonBits");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DpadControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DpadControl*, "UnityEngine.InputSystem.Controls", "DpadControl");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DpadControl_DpadAxisControl*, "UnityEngine.InputSystem.Controls", "DpadControl/DpadAxisControl");
