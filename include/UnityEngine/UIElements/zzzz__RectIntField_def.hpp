#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RectIntField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectIntField)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> struct BaseCompositeField_3_FieldDescription;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> class FieldDescription_BaseCompositeField_3_WriteDelegate;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IntegerField;
}
namespace UnityEngine::UIElements {
class RectIntField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RectIntField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class RectIntField___c;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RectIntField;
}
namespace UnityEngine::UIElements {
class RectIntField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class RectIntField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class RectIntField___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RectIntField);
MARK_REF_PTR_T(::UnityEngine::UIElements::RectIntField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::RectIntField_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::RectIntField___c);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RectIntField/UxmlFactory
class CORDL_TYPE RectIntField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RectIntField*, ::UnityEngine::UIElements::RectIntField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::RectIntField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b6f088, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntField_UxmlFactory(RectIntField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntField_UxmlFactory(RectIntField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RectIntField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.RectInt, UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RectIntField/UxmlTraits
class CORDL_TYPE RectIntField_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::UnityEngine::RectInt> {
public:
  // Declarations
  /// @brief Field m_HValue, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HValue, put = __cordl_internal_set_m_HValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_HValue;

  /// @brief Field m_WValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WValue, put = __cordl_internal_set_m_WValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_WValue;

  /// @brief Field m_XValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_YValue;

  /// @brief Method Init, addr 0x6b6f0f0, size 0x20c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::RectIntField_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_HValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_HValue();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_WValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_WValue();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_YValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr void __cordl_internal_set_m_HValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_WValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b6f2fc, size 0x158, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntField_UxmlTraits(RectIntField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntField_UxmlTraits(RectIntField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4154 };

  /// @brief Field m_XValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_YValue;

  /// @brief Field m_WValue, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_WValue;

  /// @brief Field m_HValue, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_HValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::RectIntField_UxmlTraits, ___m_XValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RectIntField_UxmlTraits, ___m_YValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RectIntField_UxmlTraits, ___m_WValue) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::RectIntField_UxmlTraits, ___m_HValue) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RectIntField_UxmlTraits, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RectIntField/<>c
class CORDL_TYPE RectIntField___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::RectIntField___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_1,
      put = setStaticF___9__0_1)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_3,
      put = setStaticF___9__0_3)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_3;

  /// @brief Field <>9__0_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_4, put = setStaticF___9__0_4)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_4;

  /// @brief Field <>9__0_5, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_5,
      put = setStaticF___9__0_5)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_5;

  /// @brief Field <>9__0_6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_6, put = setStaticF___9__0_6)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_6;

  /// @brief Field <>9__0_7, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_7,
      put = setStaticF___9__0_7)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_7;

  static inline ::UnityEngine::UIElements::RectIntField___c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x6b6f4ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_0(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x6b6f4b4, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(::ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x6b6f4bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_2(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x6b6f4c4, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(::ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_4, addr 0x6b6f4cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_4(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_5, addr 0x6b6f4d4, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_5(::ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_6, addr 0x6b6f4dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_6(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_7, addr 0x6b6f4e4, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_7(::ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method .ctor, addr 0x6b6f4a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::RectIntField___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_0();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_2();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_3();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_4();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_5();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_6();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_7();

  static inline void setStaticF___9(::UnityEngine::UIElements::RectIntField___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void
  setStaticF___9__0_1(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void
  setStaticF___9__0_3(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_4(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void
  setStaticF___9__0_5(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_6(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void
  setStaticF___9__0_7(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntField___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntField___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntField___c(RectIntField___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntField___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntField___c(RectIntField___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RectIntField___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.RectInt, UnityEngine.UIElements.BaseCompositeField`3<TValueType, TField, TFieldValue>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.RectIntField
class CORDL_TYPE RectIntField : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::RectIntField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::RectIntField_UxmlTraits;

  using __c = ::UnityEngine::UIElements::RectIntField___c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x6b6e890, size 0x5d0, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                  ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::RectIntField* New_ctor();

  static inline ::UnityEngine::UIElements::RectIntField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x6b6ee60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b6ee68, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntField(RectIntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntField(RectIntField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RectIntField, 0x540>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RectIntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RectIntField*, "UnityEngine.UIElements", "RectIntField");
NEED_NO_BOX(::UnityEngine::UIElements::RectIntField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RectIntField_UxmlFactory*, "UnityEngine.UIElements", "RectIntField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::RectIntField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RectIntField_UxmlTraits*, "UnityEngine.UIElements", "RectIntField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::RectIntField___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RectIntField___c*, "UnityEngine.UIElements", "RectIntField/<>c");
