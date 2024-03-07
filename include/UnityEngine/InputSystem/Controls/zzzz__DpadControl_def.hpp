#pragma once
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
struct __DpadControl__ButtonBits;
}
namespace UnityEngine::InputSystem::Controls {
class __DpadControl__DpadAxisControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct __DpadControl__ButtonBits;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Controls {
class __DpadControl__DpadAxisControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::DpadControl);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl);
// Type: ::DpadAxisControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::DpadControl::DpadAxisControl*
class CORDL_TYPE __DpadControl__DpadAxisControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
  // Declarations
  /// @brief Field <component>k__BackingField, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__component_k__BackingField, put = __cordl_internal_set__component_k__BackingField)) int32_t _component_k__BackingField;

  __declspec(property(get = get_component, put = set_component)) int32_t component;

  /// @brief Method FinishSetup, addr 0x2c512e0, size 0x84, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2c51364, size 0x118, virtual true, abstract: false, final false
  inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  constexpr int32_t const& __cordl_internal_get__component_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__component_k__BackingField();

  constexpr void __cordl_internal_set__component_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x2c5147c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_component, addr 0x2c512d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_component();

  /// @brief Method set_component, addr 0x2c512d8, size 0x8, virtual false, abstract: false, final false
  inline void set_component(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DpadControl__DpadAxisControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DpadControl__DpadAxisControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DpadControl__DpadAxisControl(__DpadControl__DpadAxisControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DpadControl__DpadAxisControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DpadControl__DpadAxisControl(__DpadControl__DpadAxisControl const&) = delete;

  /// @brief Field <component>k__BackingField, offset: 0x118, size: 0x4, def value: None
  int32_t ____component_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl, ____component_k__BackingField) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Type: ::ButtonBits
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// CS Name: ::DpadControl::ButtonBits
struct CORDL_TYPE __DpadControl__ButtonBits {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DpadControl__ButtonBits_Unwrapped
  enum struct ____DpadControl__ButtonBits_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DpadControl__ButtonBits_Unwrapped() const noexcept {
    return static_cast<____DpadControl__ButtonBits_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DpadControl__ButtonBits();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DpadControl__ButtonBits(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Down value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits const Up;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::DpadControl
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Controls::DpadControl*
class CORDL_TYPE DpadControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
  // Declarations
  using ButtonBits = ::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits;

  using DpadAxisControl = ::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl;

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

  /// @brief Method FinishSetup, addr 0x2c50d8c, size 0xf4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeDpadVector, addr 0x2c510b8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MakeDpadVector(bool up, bool down, bool left, bool right, bool normalize);

  /// @brief Method MakeDpadVector, addr 0x2c512c0, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 MakeDpadVector(float_t up, float_t down, float_t left, float_t right);

  static inline ::UnityEngine::InputSystem::Controls::DpadControl* New_ctor();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x2c50e80, size 0x238, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x2c51114, size 0x1ac, virtual true, abstract: false, final false
  inline void WriteValueIntoState(::UnityEngine::Vector2 value, ::cordl_internals::Ptr<void> statePtr);

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

  /// @brief Method .ctor, addr 0x2c50d1c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_down, addr 0x2c50cec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_down();

  /// @brief Method get_left, addr 0x2c50cfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_left();

  /// @brief Method get_right, addr 0x2c50d0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_right();

  /// @brief Method get_up, addr 0x2c50cdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_up();

  /// @brief Method set_down, addr 0x2c50cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_down(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_left, addr 0x2c50d04, size 0x8, virtual false, abstract: false, final false
  inline void set_left(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_right, addr 0x2c50d14, size 0x8, virtual false, abstract: false, final false
  inline void set_right(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_up, addr 0x2c50ce4, size 0x8, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Controls::DpadControl, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____up_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____down_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____left_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DpadControl, ____right_k__BackingField) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::__DpadControl__ButtonBits, "UnityEngine.InputSystem.Controls", "DpadControl/ButtonBits");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DpadControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DpadControl*, "UnityEngine.InputSystem.Controls", "DpadControl");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::__DpadControl__DpadAxisControl*, "UnityEngine.InputSystem.Controls", "DpadControl/DpadAxisControl");
