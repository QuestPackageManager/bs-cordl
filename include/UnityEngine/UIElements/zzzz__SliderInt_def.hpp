#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SliderInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderInt)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct DeltaSpeed;
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
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType> struct __BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
class __SliderInt__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __SliderInt__UxmlTraits;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SliderInt;
}
namespace UnityEngine::UIElements {
class __SliderInt__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __SliderInt__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SliderInt);
MARK_REF_PTR_T(::UnityEngine::UIElements::__SliderInt__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__SliderInt__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::SliderInt::UxmlFactory*
class CORDL_TYPE __SliderInt__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::SliderInt*, ::UnityEngine::UIElements::__SliderInt__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__SliderInt__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49a6b40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderInt__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderInt__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderInt__UxmlFactory(__SliderInt__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderInt__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderInt__UxmlFactory(__SliderInt__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__SliderInt__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::SliderInt::UxmlTraits*
class CORDL_TYPE __SliderInt__UxmlTraits : public ::UnityEngine::UIElements::__BaseSlider_1__UxmlTraits<int32_t> {
public:
  // Declarations
  /// @brief Field m_Direction, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Direction,
                      put = __cordl_internal_set_m_Direction)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* m_Direction;

  /// @brief Field m_HighValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_HighValue;

  /// @brief Field m_Inverted, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Inverted, put = __cordl_internal_set_m_Inverted)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Inverted;

  /// @brief Field m_LowValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_LowValue;

  /// @brief Field m_PageSize, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PageSize, put = __cordl_internal_set_m_PageSize)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_PageSize;

  /// @brief Field m_ShowInputField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShowInputField, put = __cordl_internal_set_m_ShowInputField)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowInputField;

  /// @brief Method Init, addr 0x49a6b88, size 0x2c0, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__SliderInt__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*& __cordl_internal_get_m_Direction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>*> const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_HighValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_HighValue() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Inverted();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Inverted() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_LowValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_LowValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_PageSize();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_PageSize() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowInputField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_ShowInputField() const;

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* value);

  constexpr void __cordl_internal_set_m_HighValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Inverted(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_LowValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PageSize(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ShowInputField(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x49a6e48, size 0x228, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SliderInt__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SliderInt__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SliderInt__UxmlTraits(__SliderInt__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SliderInt__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SliderInt__UxmlTraits(__SliderInt__UxmlTraits const&) = delete;

  /// @brief Field m_LowValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_HighValue;

  /// @brief Field m_PageSize, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_PageSize;

  /// @brief Field m_ShowInputField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ShowInputField;

  /// @brief Field m_Direction, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection>* ___m_Direction;

  /// @brief Field m_Inverted, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Inverted;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__SliderInt__UxmlTraits, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_LowValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_HighValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_PageSize) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_ShowInputField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_Direction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__SliderInt__UxmlTraits, ___m_Inverted) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::SliderInt
// SizeInfo { instance_size: 1184, native_size: -1, calculated_instance_size: 1184, calculated_native_size: 1181, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::SliderInt*
class CORDL_TYPE SliderInt : public ::UnityEngine::UIElements::BaseSlider_1<int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__SliderInt__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__SliderInt__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_pageSize, put = set_pageSize)) float_t pageSize;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ApplyInputDeviceDelta, addr 0x49a60d4, size 0x1cc, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, int32_t startValue);

  /// @brief Method ComputeValueAndDirectionFromClick, addr 0x49a6428, size 0x368, virtual true, abstract: false, final false
  inline void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos);

  /// @brief Method ComputeValueFromKey, addr 0x49a6790, size 0x2e0, virtual true, abstract: false, final false
  inline void ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<int32_t> sliderKey, bool isShift);

  static inline ::UnityEngine::UIElements::SliderInt* New_ctor();

  static inline ::UnityEngine::UIElements::SliderInt* New_ctor(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method ParseStringToValue, addr 0x49a63a8, size 0x80, virtual true, abstract: false, final false
  inline int32_t ParseStringToValue(::StringW previousValue, ::StringW newValue);

  /// @brief Method SliderLerpUnclamped, addr 0x49a62a0, size 0xec, virtual true, abstract: false, final false
  inline int32_t SliderLerpUnclamped(int32_t a, int32_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue, addr 0x49a638c, size 0x1c, virtual true, abstract: false, final false
  inline float_t SliderNormalizeValue(int32_t currentValue, int32_t lowerValue, int32_t higherValue);

  /// @brief Method .ctor, addr 0x49a5e10, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49a5e28, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_pageSize, addr 0x49a5f74, size 0x48, virtual true, abstract: false, final false
  inline float_t get_pageSize();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_pageSize, addr 0x49a5fbc, size 0x118, virtual true, abstract: false, final false
  inline void set_pageSize(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderInt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderInt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderInt(SliderInt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderInt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderInt(SliderInt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SliderInt, 0x4a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SliderInt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SliderInt*, "UnityEngine.UIElements", "SliderInt");
NEED_NO_BOX(::UnityEngine::UIElements::__SliderInt__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__SliderInt__UxmlFactory*, "UnityEngine.UIElements", "SliderInt/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__SliderInt__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__SliderInt__UxmlTraits*, "UnityEngine.UIElements", "SliderInt/UxmlTraits");
