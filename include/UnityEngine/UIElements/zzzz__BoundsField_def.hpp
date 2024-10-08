#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BoundsField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BoundsField)
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
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class Vector3Field;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __BoundsField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __BoundsField__UxmlTraits;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BoundsField;
}
namespace UnityEngine::UIElements {
class __BoundsField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __BoundsField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BoundsField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BoundsField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BoundsField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BoundsField::UxmlFactory*
class CORDL_TYPE __BoundsField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::BoundsField*, ::UnityEngine::UIElements::__BoundsField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__BoundsField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4910df0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsField__UxmlFactory(__BoundsField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsField__UxmlFactory(__BoundsField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5489 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BoundsField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BoundsField::UxmlTraits*
class CORDL_TYPE __BoundsField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Bounds> {
public:
  // Declarations
  /// @brief Field m_CenterXValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CenterXValue, put = __cordl_internal_set_m_CenterXValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_CenterXValue;

  /// @brief Field m_CenterYValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CenterYValue, put = __cordl_internal_set_m_CenterYValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_CenterYValue;

  /// @brief Field m_CenterZValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CenterZValue, put = __cordl_internal_set_m_CenterZValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_CenterZValue;

  /// @brief Field m_ExtentsXValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtentsXValue, put = __cordl_internal_set_m_ExtentsXValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ExtentsXValue;

  /// @brief Field m_ExtentsYValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtentsYValue, put = __cordl_internal_set_m_ExtentsYValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ExtentsYValue;

  /// @brief Field m_ExtentsZValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtentsZValue, put = __cordl_internal_set_m_ExtentsZValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ExtentsZValue;

  /// @brief Method Init, addr 0x4910e38, size 0x25c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__BoundsField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_CenterXValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_CenterXValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_CenterYValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_CenterYValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_CenterZValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_CenterZValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ExtentsXValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_ExtentsXValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ExtentsYValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_ExtentsYValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ExtentsZValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_ExtentsZValue() const;

  constexpr void __cordl_internal_set_m_CenterXValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_CenterYValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_CenterZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ExtentsXValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ExtentsYValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ExtentsZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4911094, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsField__UxmlTraits(__BoundsField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsField__UxmlTraits(__BoundsField__UxmlTraits const&) = delete;

  /// @brief Field m_CenterXValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_CenterXValue;

  /// @brief Field m_CenterYValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_CenterYValue;

  /// @brief Field m_CenterZValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_CenterZValue;

  /// @brief Field m_ExtentsXValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ExtentsXValue;

  /// @brief Field m_ExtentsYValue, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ExtentsYValue;

  /// @brief Field m_ExtentsZValue, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ExtentsZValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5490 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BoundsField__UxmlTraits, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_CenterXValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_CenterYValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_CenterZValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_ExtentsXValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_ExtentsYValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsField__UxmlTraits, ___m_ExtentsZValue) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BoundsField
// SizeInfo { instance_size: 1120, native_size: -1, calculated_instance_size: 1120, calculated_native_size: 1120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BoundsField*
class CORDL_TYPE BoundsField : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Bounds> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__BoundsField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__BoundsField__UxmlTraits;

  /// @brief Field centerFieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_centerFieldUssClassName, put = setStaticF_centerFieldUssClassName)) ::StringW centerFieldUssClassName;

  /// @brief Field extentsFieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_extentsFieldUssClassName, put = setStaticF_extentsFieldUssClassName)) ::StringW extentsFieldUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_CenterField, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CenterField, put = __cordl_internal_set_m_CenterField)) ::UnityEngine::UIElements::Vector3Field* m_CenterField;

  /// @brief Field m_ExtentsField, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExtentsField, put = __cordl_internal_set_m_ExtentsField)) ::UnityEngine::UIElements::Vector3Field* m_ExtentsField;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::BoundsField* New_ctor();

  static inline ::UnityEngine::UIElements::BoundsField* New_ctor(::StringW label);

  /// @brief Method SetValueWithoutNotify, addr 0x49109f0, size 0xfc, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::Bounds newValue);

  /// @brief Method UpdateMixedValueContent, addr 0x4910aec, size 0x74, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::Vector3Field*& __cordl_internal_get_m_CenterField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3Field*> const& __cordl_internal_get_m_CenterField() const;

  constexpr ::UnityEngine::UIElements::Vector3Field*& __cordl_internal_get_m_ExtentsField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3Field*> const& __cordl_internal_get_m_ExtentsField() const;

  constexpr void __cordl_internal_set_m_CenterField(::UnityEngine::UIElements::Vector3Field* value);

  constexpr void __cordl_internal_set_m_ExtentsField(::UnityEngine::UIElements::Vector3Field* value);

  /// @brief Method <.ctor>b__10_0, addr 0x4910c98, size 0xac, virtual false, abstract: false, final false
  inline void __ctor_b__10_0(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>* e);

  /// @brief Method <.ctor>b__10_1, addr 0x4910d44, size 0xac, virtual false, abstract: false, final false
  inline void __ctor_b__10_1(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>* e);

  /// @brief Method .ctor, addr 0x4910550, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4910558, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_centerFieldUssClassName();

  static inline ::StringW getStaticF_extentsFieldUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_centerFieldUssClassName(::StringW value);

  static inline void setStaticF_extentsFieldUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsField(BoundsField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsField(BoundsField const&) = delete;

  /// @brief Field m_CenterField, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::Vector3Field* ___m_CenterField;

  /// @brief Field m_ExtentsField, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::Vector3Field* ___m_ExtentsField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BoundsField, 0x460>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BoundsField, ___m_CenterField) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BoundsField, ___m_ExtentsField) == 0x458, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BoundsField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BoundsField*, "UnityEngine.UIElements", "BoundsField");
NEED_NO_BOX(::UnityEngine::UIElements::__BoundsField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BoundsField__UxmlFactory*, "UnityEngine.UIElements", "BoundsField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__BoundsField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BoundsField__UxmlTraits*, "UnityEngine.UIElements", "BoundsField/UxmlTraits");
