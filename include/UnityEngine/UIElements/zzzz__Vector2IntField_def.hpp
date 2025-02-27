#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector2IntField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2IntField)
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
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class Vector2IntField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Vector2IntField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Vector2IntField___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Vector2IntField;
}
namespace UnityEngine::UIElements {
class Vector2IntField_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Vector2IntField_UxmlTraits;
}
namespace UnityEngine::UIElements {
class Vector2IntField___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector2IntField);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector2IntField_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector2IntField_UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector2IntField___c);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector2IntField/UxmlFactory
class CORDL_TYPE Vector2IntField_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Vector2IntField*, ::UnityEngine::UIElements::Vector2IntField_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Vector2IntField_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x499e130, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntField_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntField_UxmlFactory(Vector2IntField_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntField_UxmlFactory(Vector2IntField_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector2IntField_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>, UnityEngine.Vector2Int
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector2IntField/UxmlTraits
class CORDL_TYPE Vector2IntField_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::UnityEngine::Vector2Int> {
public:
  // Declarations
  /// @brief Field m_XValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_YValue;

  /// @brief Method Init, addr 0x499e178, size 0x15c, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Vector2IntField_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_YValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x499e2d4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntField_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntField_UxmlTraits(Vector2IntField_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntField_UxmlTraits(Vector2IntField_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5558 };

  /// @brief Field m_XValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_YValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Vector2IntField_UxmlTraits, ___m_XValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Vector2IntField_UxmlTraits, ___m_YValue) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector2IntField_UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector2IntField/<>c
class CORDL_TYPE Vector2IntField___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Vector2IntField___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_1,
      put =
          setStaticF___9__0_1)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__0_3,
      put =
          setStaticF___9__0_3)) ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_3;

  static inline ::UnityEngine::UIElements::Vector2IntField___c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x499e408, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_0(::UnityEngine::Vector2Int r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x499e410, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(::ByRef<::UnityEngine::Vector2Int> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x499e418, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_2(::UnityEngine::Vector2Int r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x499e420, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(::ByRef<::UnityEngine::Vector2Int> r, int32_t v);

  /// @brief Method .ctor, addr 0x499e400, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Vector2IntField___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* getStaticF___9__0_0();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* getStaticF___9__0_2();

  static inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_3();

  static inline void setStaticF___9(::UnityEngine::UIElements::Vector2IntField___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector2Int, int32_t>* value);

  static inline void
  setStaticF___9__0_1(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector2Int, int32_t>* value);

  static inline void
  setStaticF___9__0_3(::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2IntField___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntField___c(Vector2IntField___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntField___c(Vector2IntField___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector2IntField___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseCompositeField`3<TValueType, TField, TFieldValue>, UnityEngine.Vector2Int
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Vector2IntField
class CORDL_TYPE Vector2IntField : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Vector2IntField_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Vector2IntField_UxmlTraits;

  using __c = ::UnityEngine::UIElements::Vector2IntField___c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x499dba8, size 0x390, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                  ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::Vector2IntField* New_ctor();

  static inline ::UnityEngine::UIElements::Vector2IntField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x499df38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x499df40, size 0x120, virtual false, abstract: false, final false
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
  constexpr Vector2IntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2IntField(Vector2IntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2IntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2IntField(Vector2IntField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5560 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector2IntField, 0x450>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Vector2IntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2IntField*, "UnityEngine.UIElements", "Vector2IntField");
NEED_NO_BOX(::UnityEngine::UIElements::Vector2IntField_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2IntField_UxmlFactory*, "UnityEngine.UIElements", "Vector2IntField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Vector2IntField_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2IntField_UxmlTraits*, "UnityEngine.UIElements", "Vector2IntField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::Vector2IntField___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2IntField___c*, "UnityEngine.UIElements", "Vector2IntField/<>c");
