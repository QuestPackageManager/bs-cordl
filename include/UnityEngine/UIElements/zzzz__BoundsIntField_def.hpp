#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BoundsIntField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BoundsIntField)
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
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class Vector3IntField;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class __BoundsIntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __BoundsIntField__UxmlTraits;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BoundsIntField;
}
namespace UnityEngine::UIElements {
class __BoundsIntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __BoundsIntField__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BoundsIntField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BoundsIntField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BoundsIntField::UxmlFactory*
class CORDL_TYPE __BoundsIntField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::BoundsIntField*, ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__BoundsIntField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4911ae4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsIntField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsIntField__UxmlFactory(__BoundsIntField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsIntField__UxmlFactory(__BoundsIntField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BoundsIntField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::BoundsIntField::UxmlTraits*
class CORDL_TYPE __BoundsIntField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::BoundsInt> {
public:
  // Declarations
  /// @brief Field m_PositionXValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionXValue, put = __cordl_internal_set_m_PositionXValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_PositionXValue;

  /// @brief Field m_PositionYValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionYValue, put = __cordl_internal_set_m_PositionYValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_PositionYValue;

  /// @brief Field m_PositionZValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionZValue, put = __cordl_internal_set_m_PositionZValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_PositionZValue;

  /// @brief Field m_SizeXValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SizeXValue, put = __cordl_internal_set_m_SizeXValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_SizeXValue;

  /// @brief Field m_SizeYValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SizeYValue, put = __cordl_internal_set_m_SizeYValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_SizeYValue;

  /// @brief Field m_SizeZValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SizeZValue, put = __cordl_internal_set_m_SizeZValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_SizeZValue;

  /// @brief Method Init, addr 0x4911b2c, size 0x258, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_PositionXValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_PositionXValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_PositionYValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_PositionYValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_PositionZValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_PositionZValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_SizeXValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_SizeXValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_SizeYValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_SizeYValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_SizeZValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_SizeZValue() const;

  constexpr void __cordl_internal_set_m_PositionXValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PositionYValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PositionZValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SizeXValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SizeYValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SizeZValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4911d84, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsIntField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsIntField__UxmlTraits(__BoundsIntField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsIntField__UxmlTraits(__BoundsIntField__UxmlTraits const&) = delete;

  /// @brief Field m_PositionXValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_PositionXValue;

  /// @brief Field m_PositionYValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_PositionYValue;

  /// @brief Field m_PositionZValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_PositionZValue;

  /// @brief Field m_SizeXValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_SizeXValue;

  /// @brief Field m_SizeYValue, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_SizeYValue;

  /// @brief Field m_SizeZValue, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_SizeZValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_PositionXValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_PositionYValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_PositionZValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_SizeXValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_SizeYValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits, ___m_SizeZValue) == 0xa8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BoundsIntField
// SizeInfo { instance_size: 1120, native_size: -1, calculated_instance_size: 1120, calculated_native_size: 1120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BoundsIntField*
class CORDL_TYPE BoundsIntField : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::BoundsInt> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__BoundsIntField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__BoundsIntField__UxmlTraits;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_PositionField, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionField, put = __cordl_internal_set_m_PositionField)) ::UnityEngine::UIElements::Vector3IntField* m_PositionField;

  /// @brief Field m_SizeField, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SizeField, put = __cordl_internal_set_m_SizeField)) ::UnityEngine::UIElements::Vector3IntField* m_SizeField;

  /// @brief Field positionUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_positionUssClassName, put = setStaticF_positionUssClassName)) ::StringW positionUssClassName;

  /// @brief Field sizeUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sizeUssClassName, put = setStaticF_sizeUssClassName)) ::StringW sizeUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::BoundsIntField* New_ctor();

  static inline ::UnityEngine::UIElements::BoundsIntField* New_ctor(::StringW label);

  /// @brief Method SetValueWithoutNotify, addr 0x49116e4, size 0xfc, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::BoundsInt newValue);

  /// @brief Method UpdateMixedValueContent, addr 0x49117e0, size 0x74, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::Vector3IntField*& __cordl_internal_get_m_PositionField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3IntField*> const& __cordl_internal_get_m_PositionField() const;

  constexpr ::UnityEngine::UIElements::Vector3IntField*& __cordl_internal_get_m_SizeField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Vector3IntField*> const& __cordl_internal_get_m_SizeField() const;

  constexpr void __cordl_internal_set_m_PositionField(::UnityEngine::UIElements::Vector3IntField* value);

  constexpr void __cordl_internal_set_m_SizeField(::UnityEngine::UIElements::Vector3IntField* value);

  /// @brief Method <.ctor>b__10_0, addr 0x491198c, size 0xac, virtual false, abstract: false, final false
  inline void __ctor_b__10_0(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>* e);

  /// @brief Method <.ctor>b__10_1, addr 0x4911a38, size 0xac, virtual false, abstract: false, final false
  inline void __ctor_b__10_1(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3Int>* e);

  /// @brief Method .ctor, addr 0x4911244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x491124c, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_positionUssClassName();

  static inline ::StringW getStaticF_sizeUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_positionUssClassName(::StringW value);

  static inline void setStaticF_sizeUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsIntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsIntField(BoundsIntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsIntField(BoundsIntField const&) = delete;

  /// @brief Field m_PositionField, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::Vector3IntField* ___m_PositionField;

  /// @brief Field m_SizeField, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::Vector3IntField* ___m_SizeField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BoundsIntField, 0x460>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BoundsIntField, ___m_PositionField) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BoundsIntField, ___m_SizeField) == 0x458, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BoundsIntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BoundsIntField*, "UnityEngine.UIElements", "BoundsIntField");
NEED_NO_BOX(::UnityEngine::UIElements::__BoundsIntField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BoundsIntField__UxmlFactory*, "UnityEngine.UIElements", "BoundsIntField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BoundsIntField__UxmlTraits*, "UnityEngine.UIElements", "BoundsIntField/UxmlTraits");
