#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Pen.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
CORDL_MODULE_EXPORT(Pen)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem {
struct PenButton;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Pen);
// Type: UnityEngine.InputSystem::Pen
// SizeInfo { instance_size: 488, native_size: -1, calculated_instance_size: 488, calculated_native_size: 488, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::Pen*
class CORDL_TYPE Pen : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::Controls::ButtonControl* Item[];

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityEngine::InputSystem::Pen* _current_k__BackingField;

  /// @brief Field <eraser>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__eraser_k__BackingField,
                      put = __cordl_internal_set__eraser_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _eraser_k__BackingField;

  /// @brief Field <firstBarrelButton>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__firstBarrelButton_k__BackingField,
                      put = __cordl_internal_set__firstBarrelButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _firstBarrelButton_k__BackingField;

  /// @brief Field <fourthBarrelButton>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__fourthBarrelButton_k__BackingField,
                      put = __cordl_internal_set__fourthBarrelButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _fourthBarrelButton_k__BackingField;

  /// @brief Field <inRange>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__inRange_k__BackingField,
                      put = __cordl_internal_set__inRange_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _inRange_k__BackingField;

  /// @brief Field <secondBarrelButton>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__secondBarrelButton_k__BackingField,
                      put = __cordl_internal_set__secondBarrelButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _secondBarrelButton_k__BackingField;

  /// @brief Field <thirdBarrelButton>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__thirdBarrelButton_k__BackingField,
                      put = __cordl_internal_set__thirdBarrelButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thirdBarrelButton_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__tilt_k__BackingField, put = __cordl_internal_set__tilt_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _tilt_k__BackingField;

  /// @brief Field <tip>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__tip_k__BackingField, put = __cordl_internal_set__tip_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _tip_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__twist_k__BackingField, put = __cordl_internal_set__twist_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField;

  __declspec(property(get = get_eraser, put = set_eraser)) ::UnityEngine::InputSystem::Controls::ButtonControl* eraser;

  __declspec(property(get = get_firstBarrelButton, put = set_firstBarrelButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* firstBarrelButton;

  __declspec(property(get = get_fourthBarrelButton, put = set_fourthBarrelButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* fourthBarrelButton;

  __declspec(property(get = get_inRange, put = set_inRange)) ::UnityEngine::InputSystem::Controls::ButtonControl* inRange;

  __declspec(property(get = get_secondBarrelButton, put = set_secondBarrelButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* secondBarrelButton;

  __declspec(property(get = get_thirdBarrelButton, put = set_thirdBarrelButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* thirdBarrelButton;

  __declspec(property(get = get_tilt, put = set_tilt)) ::UnityEngine::InputSystem::Controls::Vector2Control* tilt;

  __declspec(property(get = get_tip, put = set_tip)) ::UnityEngine::InputSystem::Controls::ButtonControl* tip;

  __declspec(property(get = get_twist, put = set_twist)) ::UnityEngine::InputSystem::Controls::AxisControl* twist;

  /// @brief Method FinishSetup, addr 0x4511228, size 0x1f4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method MakeCurrent, addr 0x4511128, size 0x80, virtual true, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::InputSystem::Pen* New_ctor();

  /// @brief Method OnRemoved, addr 0x45111a8, size 0x80, virtual true, abstract: false, final false
  inline void OnRemoved();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__eraser_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__eraser_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__firstBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__firstBarrelButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__fourthBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__fourthBarrelButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__inRange_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__inRange_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__secondBarrelButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thirdBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__thirdBarrelButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__tilt_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __cordl_internal_get__tilt_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__tip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__tip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__twist_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __cordl_internal_get__twist_k__BackingField() const;

  constexpr void __cordl_internal_set__eraser_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__firstBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__fourthBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__inRange_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thirdBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__tilt_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__tip_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x451141c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Pen* getStaticF__current_k__BackingField();

  /// @brief Method get_Item, addr 0x4511034, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::PenButton button);

  /// @brief Method get_current, addr 0x4510fa0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Pen* get_current();

  /// @brief Method get_eraser, addr 0x4510f20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_eraser();

  /// @brief Method get_firstBarrelButton, addr 0x4510f30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_firstBarrelButton();

  /// @brief Method get_fourthBarrelButton, addr 0x4510f60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_fourthBarrelButton();

  /// @brief Method get_inRange, addr 0x4510f70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_inRange();

  /// @brief Method get_secondBarrelButton, addr 0x4510f40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondBarrelButton();

  /// @brief Method get_thirdBarrelButton, addr 0x4510f50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thirdBarrelButton();

  /// @brief Method get_tilt, addr 0x4510f80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_tilt();

  /// @brief Method get_tip, addr 0x4510f10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_tip();

  /// @brief Method get_twist, addr 0x4510f90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_twist();

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Pen* value);

  /// @brief Method set_current, addr 0x4510fe8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::InputSystem::Pen* value);

  /// @brief Method set_eraser, addr 0x4510f28, size 0x8, virtual false, abstract: false, final false
  inline void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_firstBarrelButton, addr 0x4510f38, size 0x8, virtual false, abstract: false, final false
  inline void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_fourthBarrelButton, addr 0x4510f68, size 0x8, virtual false, abstract: false, final false
  inline void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_inRange, addr 0x4510f78, size 0x8, virtual false, abstract: false, final false
  inline void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondBarrelButton, addr 0x4510f48, size 0x8, virtual false, abstract: false, final false
  inline void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thirdBarrelButton, addr 0x4510f58, size 0x8, virtual false, abstract: false, final false
  inline void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_tilt, addr 0x4510f88, size 0x8, virtual false, abstract: false, final false
  inline void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_tip, addr 0x4510f18, size 0x8, virtual false, abstract: false, final false
  inline void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_twist, addr 0x4510f98, size 0x8, virtual false, abstract: false, final false
  inline void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pen(Pen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pen(Pen const&) = delete;

  /// @brief Field <tip>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____tip_k__BackingField;

  /// @brief Field <eraser>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____eraser_k__BackingField;

  /// @brief Field <firstBarrelButton>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____firstBarrelButton_k__BackingField;

  /// @brief Field <secondBarrelButton>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondBarrelButton_k__BackingField;

  /// @brief Field <thirdBarrelButton>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thirdBarrelButton_k__BackingField;

  /// @brief Field <fourthBarrelButton>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____fourthBarrelButton_k__BackingField;

  /// @brief Field <inRange>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____inRange_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____tilt_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____twist_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6619 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Pen, 0x1e8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____tip_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____eraser_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____firstBarrelButton_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____secondBarrelButton_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____thirdBarrelButton_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____fourthBarrelButton_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____inRange_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____tilt_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____twist_k__BackingField) == 0x1e0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Pen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pen*, "UnityEngine.InputSystem", "Pen");
