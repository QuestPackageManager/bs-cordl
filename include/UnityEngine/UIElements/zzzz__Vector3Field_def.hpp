#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector3Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3Field)
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
class FloatField;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class Vector3Field_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Vector3Field_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Vector3Field___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Vector3Field;
}
namespace UnityEngine::UIElements {
class Vector3Field_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Vector3Field_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Vector3Field___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector3Field);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector3Field_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector3Field_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector3Field___c);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector3Field/UxmlFactory
class CORDL_TYPE Vector3Field_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Vector3Field*, ::UnityEngine::UIElements::Vector3Field_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Vector3Field_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49907a0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Field_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Field_UxmlFactory(Vector3Field_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Field_UxmlFactory(Vector3Field_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector3Field_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector3Field/UxmlTraits
class CORDL_TYPE Vector3Field_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field m_XValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_YValue;

  /// @brief Field m_ZValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ZValue, put = __cordl_internal_set_m_ZValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_ZValue;

  /// @brief Method Init, addr 0x49907e8, size 0x19c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Vector3Field_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_YValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_ZValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ZValue();

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4990984, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Field_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Field_UxmlTraits(Vector3Field_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Field_UxmlTraits(Vector3Field_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5550 };

  /// @brief Field m_XValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_YValue;

  /// @brief Field m_ZValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_ZValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Vector3Field_UxmlTraits, ___m_XValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vector3Field_UxmlTraits, ___m_YValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vector3Field_UxmlTraits, ___m_ZValue) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector3Field_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector3Field/<>c
class CORDL_TYPE Vector3Field___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Vector3Field___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_1,
      put = setStaticF___9__0_1)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_3,
      put = setStaticF___9__0_3)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* __9__0_3;

  /// @brief Field <>9__0_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_4, put = setStaticF___9__0_4)) ::System::Func_2<::UnityEngine::Vector3, float_t>* __9__0_4;

  /// @brief Field <>9__0_5, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_5,
      put = setStaticF___9__0_5)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* __9__0_5;

  static inline ::UnityEngine::UIElements::Vector3Field___c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x4990af0, size 0x4, virtual false, abstract: false, final false
  inline float_t _DescribeFields_b__0_0(::UnityEngine::Vector3 r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x4990af4, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(::ByRef<::UnityEngine::Vector3> r, float_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x4990afc, size 0x8, virtual false, abstract: false, final false
  inline float_t _DescribeFields_b__0_2(::UnityEngine::Vector3 r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x4990b04, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(::ByRef<::UnityEngine::Vector3> r, float_t v);

  /// @brief Method <DescribeFields>b__0_4, addr 0x4990b0c, size 0x8, virtual false, abstract: false, final false
  inline float_t _DescribeFields_b__0_4(::UnityEngine::Vector3 r);

  /// @brief Method <DescribeFields>b__0_5, addr 0x4990b14, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_5(::ByRef<::UnityEngine::Vector3> r, float_t v);

  /// @brief Method .ctor, addr 0x4990ae8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Vector3Field___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__0_0();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__0_2();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* getStaticF___9__0_3();

  static inline ::System::Func_2<::UnityEngine::Vector3, float_t>* getStaticF___9__0_4();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* getStaticF___9__0_5();

  static inline void setStaticF___9(::UnityEngine::UIElements::Vector3Field___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline void
  setStaticF___9__0_1(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline void
  setStaticF___9__0_3(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value);

  static inline void setStaticF___9__0_4(::System::Func_2<::UnityEngine::Vector3, float_t>* value);

  static inline void
  setStaticF___9__0_5(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Field___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Field___c(Vector3Field___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Field___c(Vector3Field___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5551 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector3Field___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseCompositeField`3<TValueType, TField, TFieldValue>, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector3Field
class CORDL_TYPE Vector3Field : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Vector3Field_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Vector3Field_UxmlTraits;

  using __c = ::UnityEngine::UIElements::Vector3Field___c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x49901d4, size 0x4f4, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>,
                  ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::Vector3Field* New_ctor();

  static inline ::UnityEngine::UIElements::Vector3Field* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x49906c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x498c24c, size 0x120, virtual false, abstract: false, final false
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
  constexpr Vector3Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3Field(Vector3Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3Field(Vector3Field const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5552 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector3Field, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Vector3Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector3Field*, "UnityEngine.UIElements", "Vector3Field");
NEED_NO_BOX(::UnityEngine::UIElements::Vector3Field_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector3Field_UxmlFactory*, "UnityEngine.UIElements", "Vector3Field/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Vector3Field_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector3Field_UxmlTraits*, "UnityEngine.UIElements", "Vector3Field/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::Vector3Field___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector3Field___c*, "UnityEngine.UIElements", "Vector3Field/<>c");
