#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
CORDL_MODULE_EXPORT(Pen)
namespace UnityEngine::InputSystem {
struct PenButton;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pen;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Pen);
// Type: UnityEngine.InputSystem::Pen
// SizeInfo { instance_size: 456, native_size: -1, calculated_instance_size: 456, calculated_native_size: 456, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6333))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6332))
// CS Name: ::UnityEngine.InputSystem::Pen*
class CORDL_TYPE Pen : public ::UnityEngine::InputSystem::Pointer {
public:
  // Declarations
  /// @brief Field <tip>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__tip_k__BackingField, put = __set__tip_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _tip_k__BackingField;

  /// @brief Field <eraser>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__eraser_k__BackingField, put = __set__eraser_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _eraser_k__BackingField;

  /// @brief Field <firstBarrelButton>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__firstBarrelButton_k__BackingField,
                      put = __set__firstBarrelButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _firstBarrelButton_k__BackingField;

  /// @brief Field <secondBarrelButton>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__secondBarrelButton_k__BackingField,
                      put = __set__secondBarrelButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _secondBarrelButton_k__BackingField;

  /// @brief Field <thirdBarrelButton>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__thirdBarrelButton_k__BackingField,
                      put = __set__thirdBarrelButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _thirdBarrelButton_k__BackingField;

  /// @brief Field <fourthBarrelButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__fourthBarrelButton_k__BackingField,
                      put = __set__fourthBarrelButton_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _fourthBarrelButton_k__BackingField;

  /// @brief Field <inRange>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__inRange_k__BackingField, put = __set__inRange_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _inRange_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__tilt_k__BackingField, put = __set__tilt_k__BackingField))::UnityEngine::InputSystem::Controls::Vector2Control* _tilt_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__twist_k__BackingField, put = __set__twist_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField))::UnityEngine::InputSystem::Pen* _current_k__BackingField;

  __declspec(property(get = get_tip, put = set_tip))::UnityEngine::InputSystem::Controls::ButtonControl* tip;

  __declspec(property(get = get_eraser, put = set_eraser))::UnityEngine::InputSystem::Controls::ButtonControl* eraser;

  __declspec(property(get = get_firstBarrelButton, put = set_firstBarrelButton))::UnityEngine::InputSystem::Controls::ButtonControl* firstBarrelButton;

  __declspec(property(get = get_secondBarrelButton, put = set_secondBarrelButton))::UnityEngine::InputSystem::Controls::ButtonControl* secondBarrelButton;

  __declspec(property(get = get_thirdBarrelButton, put = set_thirdBarrelButton))::UnityEngine::InputSystem::Controls::ButtonControl* thirdBarrelButton;

  __declspec(property(get = get_fourthBarrelButton, put = set_fourthBarrelButton))::UnityEngine::InputSystem::Controls::ButtonControl* fourthBarrelButton;

  __declspec(property(get = get_inRange, put = set_inRange))::UnityEngine::InputSystem::Controls::ButtonControl* inRange;

  __declspec(property(get = get_tilt, put = set_tilt))::UnityEngine::InputSystem::Controls::Vector2Control* tilt;

  __declspec(property(get = get_twist, put = set_twist))::UnityEngine::InputSystem::Controls::AxisControl* twist;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::Controls::ButtonControl* Item[];

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__tip_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__tip_k__BackingField() const;

  constexpr void __set__tip_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__eraser_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__eraser_k__BackingField() const;

  constexpr void __set__eraser_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__firstBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__firstBarrelButton_k__BackingField() const;

  constexpr void __set__firstBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__secondBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__secondBarrelButton_k__BackingField() const;

  constexpr void __set__secondBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__thirdBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__thirdBarrelButton_k__BackingField() const;

  constexpr void __set__thirdBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__fourthBarrelButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__fourthBarrelButton_k__BackingField() const;

  constexpr void __set__fourthBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__inRange_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__inRange_k__BackingField() const;

  constexpr void __set__inRange_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __get__tilt_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector2Control*> const& __get__tilt_k__BackingField() const;

  constexpr void __set__tilt_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__twist_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__twist_k__BackingField() const;

  constexpr void __set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  static inline void setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Pen* value);

  static inline ::UnityEngine::InputSystem::Pen* getStaticF__current_k__BackingField();

  /// @brief Method get_tip addr 0x28ef770 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_tip();

  /// @brief Method set_tip addr 0x28ef778 size 0x8 virtual false final false
  inline void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_eraser addr 0x28ef780 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_eraser();

  /// @brief Method set_eraser addr 0x28ef788 size 0x8 virtual false final false
  inline void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_firstBarrelButton addr 0x28ef790 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_firstBarrelButton();

  /// @brief Method set_firstBarrelButton addr 0x28ef798 size 0x8 virtual false final false
  inline void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_secondBarrelButton addr 0x28ef7a0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondBarrelButton();

  /// @brief Method set_secondBarrelButton addr 0x28ef7a8 size 0x8 virtual false final false
  inline void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_thirdBarrelButton addr 0x28ef7b0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thirdBarrelButton();

  /// @brief Method set_thirdBarrelButton addr 0x28ef7b8 size 0x8 virtual false final false
  inline void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_fourthBarrelButton addr 0x28ef7c0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_fourthBarrelButton();

  /// @brief Method set_fourthBarrelButton addr 0x28ef7c8 size 0x8 virtual false final false
  inline void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_inRange addr 0x28ef7d0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_inRange();

  /// @brief Method set_inRange addr 0x28ef7d8 size 0x8 virtual false final false
  inline void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_tilt addr 0x28ef7e0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_tilt();

  /// @brief Method set_tilt addr 0x28ef7e8 size 0x8 virtual false final false
  inline void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method get_twist addr 0x28ef7f0 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_twist();

  /// @brief Method set_twist addr 0x28ef7f8 size 0x8 virtual false final false
  inline void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_current addr 0x28ef800 size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::Pen* get_current();

  /// @brief Method set_current addr 0x28ef848 size 0x4c virtual false final false
  static inline void set_current(::UnityEngine::InputSystem::Pen* value);

  /// @brief Method get_Item addr 0x28ef894 size 0xf8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::PenButton button);

  /// @brief Method MakeCurrent addr 0x28ef98c size 0x80 virtual true final false
  inline void MakeCurrent();

  /// @brief Method OnRemoved addr 0x28efa0c size 0x80 virtual true final false
  inline void OnRemoved();

  /// @brief Method FinishSetup addr 0x28efa8c size 0x1f4 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::Pen* New_ctor();

  /// @brief Method .ctor addr 0x28efc80 size 0x2c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pen(Pen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pen(Pen const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pen();

public:
  /// @brief Field <tip>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____tip_k__BackingField;

  /// @brief Field <eraser>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____eraser_k__BackingField;

  /// @brief Field <firstBarrelButton>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____firstBarrelButton_k__BackingField;

  /// @brief Field <secondBarrelButton>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondBarrelButton_k__BackingField;

  /// @brief Field <thirdBarrelButton>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thirdBarrelButton_k__BackingField;

  /// @brief Field <fourthBarrelButton>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____fourthBarrelButton_k__BackingField;

  /// @brief Field <inRange>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____inRange_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____tilt_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____twist_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Pen, 0x1c8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____tip_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____eraser_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____firstBarrelButton_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____secondBarrelButton_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____thirdBarrelButton_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____fourthBarrelButton_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____inRange_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____tilt_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Pen, ____twist_k__BackingField) == 0x1c0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::Pen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pen*, "UnityEngine.InputSystem", "Pen");
