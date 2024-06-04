#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Slider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Slider)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
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
namespace UnityEngine::UIElements {
template <typename TValueType> struct __BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Slider;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Slider__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Slider);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Slider__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Slider__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Slider::UxmlFactory*
class CORDL_TYPE __Slider__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Slider*, ::UnityEngine::UIElements::__Slider__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Slider__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3591700, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Slider__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Slider__UxmlFactory(__Slider__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Slider__UxmlFactory(__Slider__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Slider__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Slider::UxmlTraits*
class CORDL_TYPE __Slider__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<float_t, ::UnityEngine::UIElements::UxmlFloatAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_Direction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Direction,
                      put = __cordl_internal_set_m_Direction))::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;

  /// @brief Field m_HighValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighValue;

  /// @brief Field m_Inverted, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Inverted, put = __cordl_internal_set_m_Inverted))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Inverted;

  /// @brief Field m_LowValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowValue;

  /// @brief Field m_PageSize, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PageSize, put = __cordl_internal_set_m_PageSize))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_PageSize;

  /// @brief Field m_ShowInputField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowInputField, put = __cordl_internal_set_m_ShowInputField))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowInputField;

  /// @brief Method Init, addr 0x359e464, size 0x2b4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Slider__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& __cordl_internal_get_m_Direction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*> const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HighValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_HighValue() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Inverted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Inverted() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_LowValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_LowValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_PageSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_PageSize() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowInputField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowInputField() const;

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value);

  constexpr void __cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Inverted(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowInputField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x359e718, size 0x228, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Slider__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Slider__UxmlTraits(__Slider__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Slider__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Slider__UxmlTraits(__Slider__UxmlTraits const&) = delete;

  /// @brief Field m_LowValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighValue;

  /// @brief Field m_PageSize, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_PageSize;

  /// @brief Field m_ShowInputField, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowInputField;

  /// @brief Field m_Direction, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* ___m_Direction;

  /// @brief Field m_Inverted, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Inverted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Slider__UxmlTraits, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_LowValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_HighValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_PageSize) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_ShowInputField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_Direction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Slider__UxmlTraits, ___m_Inverted) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Slider
// SizeInfo { instance_size: 1112, native_size: -1, calculated_instance_size: 1112, calculated_native_size: 1109, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Slider*
class CORDL_TYPE Slider : public ::UnityEngine::UIElements::BaseSlider_1<float_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Slider__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Slider__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Method ComputeValueFromKey, addr 0x359e198, size 0x1fc, virtual true, abstract: false, final false
  inline void ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<float_t> sliderKey, bool isShift);

  static inline ::UnityEngine::UIElements::Slider* New_ctor();

  static inline ::UnityEngine::UIElements::Slider* New_ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  static inline ::UnityEngine::UIElements::Slider* New_ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method ParseStringToValue, addr 0x359e0c8, size 0xd0, virtual true, abstract: false, final false
  inline float_t ParseStringToValue(::StringW stringValue);

  /// @brief Method SliderLerpUnclamped, addr 0x359de08, size 0x2b0, virtual true, abstract: false, final false
  inline float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue, addr 0x359e0b8, size 0x10, virtual true, abstract: false, final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method .ctor, addr 0x359dc98, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x359dcb0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method .ctor, addr 0x359ddfc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Slider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Slider(Slider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Slider(Slider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Slider, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Slider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Slider*, "UnityEngine.UIElements", "Slider");
NEED_NO_BOX(::UnityEngine::UIElements::__Slider__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Slider__UxmlFactory*, "UnityEngine.UIElements", "Slider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Slider__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Slider__UxmlTraits*, "UnityEngine.UIElements", "Slider/UxmlTraits");
