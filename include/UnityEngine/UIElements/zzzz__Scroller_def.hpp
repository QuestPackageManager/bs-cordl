#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Scroller)
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class __Scroller__UxmlTraits;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class __Scroller__UxmlFactory;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
class Slider;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
class __Scroller__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Scroller__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Scroller);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Scroller__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Scroller__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6737))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7063))
// CS Name: ::Scroller::UxmlTraits*
class CORDL_TYPE __Scroller__UxmlTraits : public ::UnityEngine::UIElements::__VisualElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_LowValue, offset 0x70, size 0x8
  __declspec(property(get = __get_m_LowValue, put = __set_m_LowValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_HighValue, offset 0x78, size 0x8
  __declspec(property(get = __get_m_HighValue, put = __set_m_HighValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_Direction, offset 0x80, size 0x8
  __declspec(property(get = __get_m_Direction, put = __set_m_Direction))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;

  /// @brief Field m_Value, offset 0x88, size 0x8
  __declspec(property(get = __get_m_Value, put = __set_m_Value))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Value;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_LowValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_LowValue() const;

  constexpr void __set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_HighValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_HighValue() const;

  constexpr void __set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& __get_m_Direction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*> const& __get_m_Direction() const;

  constexpr void __set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_Value();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_Value() const;

  constexpr void __set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method Init, addr 0x2e2ad88, size 0x1ec, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Scroller__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x2e2af74, size 0x25c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Scroller__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Scroller__UxmlTraits(__Scroller__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Scroller__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Scroller__UxmlTraits(__Scroller__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Scroller__UxmlTraits();

public:
  /// @brief Field m_LowValue, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighValue;

  /// @brief Field m_Direction, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* ___m_Direction;

  /// @brief Field m_Value, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Scroller__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Scroller__UxmlTraits, ___m_LowValue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Scroller__UxmlTraits, ___m_HighValue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Scroller__UxmlTraits, ___m_Direction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Scroller__UxmlTraits, ___m_Value) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Scroller
// SizeInfo { instance_size: 976, native_size: -1, calculated_instance_size: 976, calculated_native_size: 976, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6744))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7064))
// CS Name: ::UnityEngine.UIElements::Scroller*
class CORDL_TYPE Scroller : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__Scroller__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__Scroller__UxmlFactory;

  /// @brief Field valueChanged, offset 0x3b0, size 0x8
  __declspec(property(get = __get_valueChanged, put = __set_valueChanged))::System::Action_1<float_t>* valueChanged;

  /// @brief Field <slider>k__BackingField, offset 0x3b8, size 0x8
  __declspec(property(get = __get__slider_k__BackingField, put = __set__slider_k__BackingField))::UnityEngine::UIElements::Slider* _slider_k__BackingField;

  /// @brief Field <lowButton>k__BackingField, offset 0x3c0, size 0x8
  __declspec(property(get = __get__lowButton_k__BackingField, put = __set__lowButton_k__BackingField))::UnityEngine::UIElements::RepeatButton* _lowButton_k__BackingField;

  /// @brief Field <highButton>k__BackingField, offset 0x3c8, size 0x8
  __declspec(property(get = __get__highButton_k__BackingField, put = __set__highButton_k__BackingField))::UnityEngine::UIElements::RepeatButton* _highButton_k__BackingField;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName))::StringW horizontalVariantUssClassName;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName))::StringW verticalVariantUssClassName;

  /// @brief Field sliderUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sliderUssClassName, put = setStaticF_sliderUssClassName))::StringW sliderUssClassName;

  /// @brief Field lowButtonUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lowButtonUssClassName, put = setStaticF_lowButtonUssClassName))::StringW lowButtonUssClassName;

  /// @brief Field highButtonUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_highButtonUssClassName, put = setStaticF_highButtonUssClassName))::StringW highButtonUssClassName;

  __declspec(property(get = get_slider, put = set_slider))::UnityEngine::UIElements::Slider* slider;

  __declspec(property(get = get_lowButton, put = set_lowButton))::UnityEngine::UIElements::RepeatButton* lowButton;

  __declspec(property(get = get_highButton, put = set_highButton))::UnityEngine::UIElements::RepeatButton* highButton;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  __declspec(property(get = get_lowValue, put = set_lowValue)) float_t lowValue;

  __declspec(property(get = get_highValue, put = set_highValue)) float_t highValue;

  __declspec(property(put = set_direction))::UnityEngine::UIElements::SliderDirection direction;

  constexpr ::System::Action_1<float_t>*& __get_valueChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __get_valueChanged() const;

  constexpr void __set_valueChanged(::System::Action_1<float_t>* value);

  constexpr ::UnityEngine::UIElements::Slider*& __get__slider_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Slider*> const& __get__slider_k__BackingField() const;

  constexpr void __set__slider_k__BackingField(::UnityEngine::UIElements::Slider* value);

  constexpr ::UnityEngine::UIElements::RepeatButton*& __get__lowButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::RepeatButton*> const& __get__lowButton_k__BackingField() const;

  constexpr void __set__lowButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value);

  constexpr ::UnityEngine::UIElements::RepeatButton*& __get__highButton_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::RepeatButton*> const& __get__highButton_k__BackingField() const;

  constexpr void __set__highButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  static inline void setStaticF_sliderUssClassName(::StringW value);

  static inline ::StringW getStaticF_sliderUssClassName();

  static inline void setStaticF_lowButtonUssClassName(::StringW value);

  static inline ::StringW getStaticF_lowButtonUssClassName();

  static inline void setStaticF_highButtonUssClassName(::StringW value);

  static inline ::StringW getStaticF_highButtonUssClassName();

  /// @brief Method add_valueChanged, addr 0x2e29fc4, size 0xb4, virtual false, abstract: false, final false
  inline void add_valueChanged(::System::Action_1<float_t>* value);

  /// @brief Method remove_valueChanged, addr 0x2e2a078, size 0xb4, virtual false, abstract: false, final false
  inline void remove_valueChanged(::System::Action_1<float_t>* value);

  /// @brief Method get_slider, addr 0x2e2a12c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Slider* get_slider();

  /// @brief Method set_slider, addr 0x2e2a134, size 0x8, virtual false, abstract: false, final false
  inline void set_slider(::UnityEngine::UIElements::Slider* value);

  /// @brief Method get_lowButton, addr 0x2e2a13c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RepeatButton* get_lowButton();

  /// @brief Method set_lowButton, addr 0x2e2a144, size 0x8, virtual false, abstract: false, final false
  inline void set_lowButton(::UnityEngine::UIElements::RepeatButton* value);

  /// @brief Method get_highButton, addr 0x2e2a14c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RepeatButton* get_highButton();

  /// @brief Method set_highButton, addr 0x2e2a154, size 0x8, virtual false, abstract: false, final false
  inline void set_highButton(::UnityEngine::UIElements::RepeatButton* value);

  /// @brief Method get_value, addr 0x2e2a15c, size 0x24, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x2e2a180, size 0x24, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  /// @brief Method get_lowValue, addr 0x2e2a1a4, size 0x50, virtual false, abstract: false, final false
  inline float_t get_lowValue();

  /// @brief Method set_lowValue, addr 0x2e2a1f4, size 0x60, virtual false, abstract: false, final false
  inline void set_lowValue(float_t value);

  /// @brief Method get_highValue, addr 0x2e2a254, size 0x50, virtual false, abstract: false, final false
  inline float_t get_highValue();

  /// @brief Method set_highValue, addr 0x2e2a2a4, size 0x60, virtual false, abstract: false, final false
  inline void set_highValue(float_t value);

  /// @brief Method set_direction, addr 0x2e2a304, size 0x1fc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::SliderDirection value);

  static inline ::UnityEngine::UIElements::Scroller* New_ctor();

  /// @brief Method .ctor, addr 0x2e2a500, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Scroller* New_ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged, ::UnityEngine::UIElements::SliderDirection direction);

  /// @brief Method .ctor, addr 0x2e2a514, size 0x3a8, virtual false, abstract: false, final false
  /// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x1))
  inline void _ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged, ::UnityEngine::UIElements::SliderDirection direction = static_cast<int32_t>(0x1));

  /// @brief Method Adjust, addr 0x2e2a8bc, size 0x78, virtual false, abstract: false, final false
  inline void Adjust(float_t factor);

  /// @brief Method OnSliderValueChange, addr 0x2e2a934, size 0x9c, virtual false, abstract: false, final false
  inline void OnSliderValueChange(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt);

  /// @brief Method ScrollPageUp, addr 0x2e2a9d0, size 0x8, virtual false, abstract: false, final false
  inline void ScrollPageUp();

  /// @brief Method ScrollPageDown, addr 0x2e2aad0, size 0x8, virtual false, abstract: false, final false
  inline void ScrollPageDown();

  /// @brief Method ScrollPageUp, addr 0x2e2a9d8, size 0xf8, virtual false, abstract: false, final false
  inline void ScrollPageUp(float_t factor);

  /// @brief Method ScrollPageDown, addr 0x2e2aad8, size 0xf8, virtual false, abstract: false, final false
  inline void ScrollPageDown(float_t factor);

  // Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scroller(Scroller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scroller(Scroller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scroller();

public:
  /// @brief Field valueChanged, offset: 0x3b0, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___valueChanged;

  /// @brief Field <slider>k__BackingField, offset: 0x3b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Slider* ____slider_k__BackingField;

  /// @brief Field <lowButton>k__BackingField, offset: 0x3c0, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepeatButton* ____lowButton_k__BackingField;

  /// @brief Field <highButton>k__BackingField, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepeatButton* ____highButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scroller, 0x3d0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ___valueChanged) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____slider_k__BackingField) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____lowButton_k__BackingField) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____highButton_k__BackingField) == 0x3c8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), TypeDefinitionIndex(TypeDefinitionIndex(7063)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5275
// }), TypeDefinitionIndex(TypeDefinitionIndex(7064))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7062)) CS Name: ::Scroller::UxmlFactory*
class CORDL_TYPE __Scroller__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Scroller*, ::UnityEngine::UIElements::__Scroller__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Scroller__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x2e2ad40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Scroller__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Scroller__UxmlFactory(__Scroller__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Scroller__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Scroller__UxmlFactory(__Scroller__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Scroller__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Scroller__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Scroller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller*, "UnityEngine.UIElements", "Scroller");
NEED_NO_BOX(::UnityEngine::UIElements::__Scroller__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Scroller__UxmlFactory*, "UnityEngine.UIElements", "Scroller/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Scroller__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Scroller__UxmlTraits*, "UnityEngine.UIElements", "Scroller/UxmlTraits");
