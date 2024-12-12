#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Scroller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Slider_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Scroller)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
class Scroller_ScrollerSlider;
}
namespace UnityEngine::UIElements {
class Scroller_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Scroller_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class Slider;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
class Scroller_ScrollerSlider;
}
namespace UnityEngine::UIElements {
class Scroller_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Scroller_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Scroller);
MARK_REF_PTR_T(::UnityEngine::UIElements::Scroller_ScrollerSlider);
MARK_REF_PTR_T(::UnityEngine::UIElements::Scroller_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Scroller_UxmlTraits);
// Dependencies UnityEngine.UIElements.Slider
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scroller/ScrollerSlider
class CORDL_TYPE Scroller_ScrollerSlider : public ::UnityEngine::UIElements::Slider {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Scroller_ScrollerSlider* New_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method SliderNormalizeValue, addr 0x4a094f4, size 0x24, virtual true, abstract: false, final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method .ctor, addr 0x4a08fe4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scroller_ScrollerSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scroller_ScrollerSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scroller_ScrollerSlider(Scroller_ScrollerSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scroller_ScrollerSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scroller_ScrollerSlider(Scroller_ScrollerSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scroller_ScrollerSlider, 0x4a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scroller/UxmlFactory
class CORDL_TYPE Scroller_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Scroller*, ::UnityEngine::UIElements::Scroller_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Scroller_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a09528, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scroller_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scroller_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scroller_UxmlFactory(Scroller_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scroller_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scroller_UxmlFactory(Scroller_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scroller_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scroller/UxmlTraits
class CORDL_TYPE Scroller_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Direction, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Direction,
                      put = __cordl_internal_set_m_Direction)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;

  /// @brief Field m_HighValue, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_LowValue, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_Value, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_Value;

  /// @brief Method Init, addr 0x4a09570, size 0x1ec, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Scroller_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& __cordl_internal_get_m_Direction();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_HighValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HighValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_LowValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_LowValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_Value() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_Value();

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value);

  constexpr void __cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a0975c, size 0x210, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scroller_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scroller_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scroller_UxmlTraits(Scroller_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scroller_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scroller_UxmlTraits(Scroller_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5689 };

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
static_assert(offsetof(::UnityEngine::UIElements::Scroller_UxmlTraits, ___m_LowValue) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller_UxmlTraits, ___m_HighValue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller_UxmlTraits, ___m_Direction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller_UxmlTraits, ___m_Value) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scroller_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Scroller
class CORDL_TYPE Scroller : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using ScrollerSlider = ::UnityEngine::UIElements::Scroller_ScrollerSlider;

  using UxmlFactory = ::UnityEngine::UIElements::Scroller_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Scroller_UxmlTraits;

  /// @brief Field <highButton>k__BackingField, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get__highButton_k__BackingField,
                      put = __cordl_internal_set__highButton_k__BackingField)) ::UnityEngine::UIElements::RepeatButton* _highButton_k__BackingField;

  /// @brief Field <lowButton>k__BackingField, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get__lowButton_k__BackingField,
                      put = __cordl_internal_set__lowButton_k__BackingField)) ::UnityEngine::UIElements::RepeatButton* _lowButton_k__BackingField;

  /// @brief Field <slider>k__BackingField, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get__slider_k__BackingField, put = __cordl_internal_set__slider_k__BackingField)) ::UnityEngine::UIElements::Slider* _slider_k__BackingField;

  __declspec(property(put = set_direction)) ::UnityEngine::UIElements::SliderDirection direction;

  __declspec(property(get = get_highButton, put = set_highButton)) ::UnityEngine::UIElements::RepeatButton* highButton;

  /// @brief Field highButtonUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_highButtonUssClassName, put = setStaticF_highButtonUssClassName)) ::StringW highButtonUssClassName;

  __declspec(property(get = get_highValue, put = set_highValue)) float_t highValue;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName)) ::StringW horizontalVariantUssClassName;

  __declspec(property(get = get_lowButton, put = set_lowButton)) ::UnityEngine::UIElements::RepeatButton* lowButton;

  /// @brief Field lowButtonUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lowButtonUssClassName, put = setStaticF_lowButtonUssClassName)) ::StringW lowButtonUssClassName;

  __declspec(property(get = get_lowValue, put = set_lowValue)) float_t lowValue;

  __declspec(property(get = get_slider, put = set_slider)) ::UnityEngine::UIElements::Slider* slider;

  /// @brief Field sliderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sliderUssClassName, put = setStaticF_sliderUssClassName)) ::StringW sliderUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Field valueChanged, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_valueChanged, put = __cordl_internal_set_valueChanged)) ::System::Action_1<float_t>* valueChanged;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName)) ::StringW verticalVariantUssClassName;

  /// @brief Method Adjust, addr 0x4a09074, size 0x78, virtual false, abstract: false, final false
  inline void Adjust(float_t factor);

  static inline ::UnityEngine::UIElements::Scroller* New_ctor();

  static inline ::UnityEngine::UIElements::Scroller* New_ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged, ::UnityEngine::UIElements::SliderDirection direction);

  /// @brief Method OnSliderValueChange, addr 0x4a090ec, size 0x9c, virtual false, abstract: false, final false
  inline void OnSliderValueChange(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt);

  /// @brief Method ScrollPageDown, addr 0x4a09280, size 0x8, virtual false, abstract: false, final false
  inline void ScrollPageDown();

  /// @brief Method ScrollPageDown, addr 0x4a09288, size 0xf0, virtual false, abstract: false, final false
  inline void ScrollPageDown(float_t factor);

  /// @brief Method ScrollPageUp, addr 0x4a09188, size 0x8, virtual false, abstract: false, final false
  inline void ScrollPageUp();

  /// @brief Method ScrollPageUp, addr 0x4a09190, size 0xf0, virtual false, abstract: false, final false
  inline void ScrollPageUp(float_t factor);

  constexpr ::UnityEngine::UIElements::RepeatButton* const& __cordl_internal_get__highButton_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::RepeatButton*& __cordl_internal_get__highButton_k__BackingField();

  constexpr ::UnityEngine::UIElements::RepeatButton* const& __cordl_internal_get__lowButton_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::RepeatButton*& __cordl_internal_get__lowButton_k__BackingField();

  constexpr ::UnityEngine::UIElements::Slider* const& __cordl_internal_get__slider_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Slider*& __cordl_internal_get__slider_k__BackingField();

  constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_valueChanged() const;

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_valueChanged();

  constexpr void __cordl_internal_set__highButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value);

  constexpr void __cordl_internal_set__lowButton_k__BackingField(::UnityEngine::UIElements::RepeatButton* value);

  constexpr void __cordl_internal_set__slider_k__BackingField(::UnityEngine::UIElements::Slider* value);

  constexpr void __cordl_internal_set_valueChanged(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x4a08c58, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4a08c6c, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t>* valueChanged, ::UnityEngine::UIElements::SliderDirection direction);

  /// @brief Method add_valueChanged, addr 0x4a086f0, size 0xb4, virtual false, abstract: false, final false
  inline void add_valueChanged(::System::Action_1<float_t>* value);

  static inline ::StringW getStaticF_highButtonUssClassName();

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline ::StringW getStaticF_lowButtonUssClassName();

  static inline ::StringW getStaticF_sliderUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  /// @brief Method get_highButton, addr 0x4a08878, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RepeatButton* get_highButton();

  /// @brief Method get_highValue, addr 0x4a08980, size 0x50, virtual false, abstract: false, final false
  inline float_t get_highValue();

  /// @brief Method get_lowButton, addr 0x4a08868, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::RepeatButton* get_lowButton();

  /// @brief Method get_lowValue, addr 0x4a088d0, size 0x50, virtual false, abstract: false, final false
  inline float_t get_lowValue();

  /// @brief Method get_slider, addr 0x4a08858, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Slider* get_slider();

  /// @brief Method get_value, addr 0x4a08888, size 0x24, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method remove_valueChanged, addr 0x4a087a4, size 0xb4, virtual false, abstract: false, final false
  inline void remove_valueChanged(::System::Action_1<float_t>* value);

  static inline void setStaticF_highButtonUssClassName(::StringW value);

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline void setStaticF_lowButtonUssClassName(::StringW value);

  static inline void setStaticF_sliderUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  /// @brief Method set_direction, addr 0x4a08a30, size 0x228, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::SliderDirection value);

  /// @brief Method set_highButton, addr 0x4a08880, size 0x8, virtual false, abstract: false, final false
  inline void set_highButton(::UnityEngine::UIElements::RepeatButton* value);

  /// @brief Method set_highValue, addr 0x4a089d0, size 0x60, virtual false, abstract: false, final false
  inline void set_highValue(float_t value);

  /// @brief Method set_lowButton, addr 0x4a08870, size 0x8, virtual false, abstract: false, final false
  inline void set_lowButton(::UnityEngine::UIElements::RepeatButton* value);

  /// @brief Method set_lowValue, addr 0x4a08920, size 0x60, virtual false, abstract: false, final false
  inline void set_lowValue(float_t value);

  /// @brief Method set_slider, addr 0x4a08860, size 0x8, virtual false, abstract: false, final false
  inline void set_slider(::UnityEngine::UIElements::Slider* value);

  /// @brief Method set_value, addr 0x4a088ac, size 0x24, virtual false, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scroller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scroller(Scroller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scroller(Scroller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5690 };

  /// @brief Field valueChanged, offset: 0x3c8, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___valueChanged;

  /// @brief Field <slider>k__BackingField, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Slider* ____slider_k__BackingField;

  /// @brief Field <lowButton>k__BackingField, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepeatButton* ____lowButton_k__BackingField;

  /// @brief Field <highButton>k__BackingField, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::RepeatButton* ____highButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Scroller, ___valueChanged) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____slider_k__BackingField) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____lowButton_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scroller, ____highButton_k__BackingField) == 0x3e0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scroller, 0x3e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Scroller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller*, "UnityEngine.UIElements", "Scroller");
NEED_NO_BOX(::UnityEngine::UIElements::Scroller_ScrollerSlider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller_ScrollerSlider*, "UnityEngine.UIElements", "Scroller/ScrollerSlider");
NEED_NO_BOX(::UnityEngine::UIElements::Scroller_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller_UxmlFactory*, "UnityEngine.UIElements", "Scroller/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Scroller_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller_UxmlTraits*, "UnityEngine.UIElements", "Scroller/UxmlTraits");
