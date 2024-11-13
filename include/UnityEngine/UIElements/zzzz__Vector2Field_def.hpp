#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector2Field.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Field)
namespace GlobalNamespace {
template <typename TValueType, typename TField, typename TFieldValue> class __BaseCompositeField_3__FieldDescription__WriteDelegate;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
struct CreationContext;
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
class VisualElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> struct __BaseCompositeField_3__FieldDescription;
}
namespace UnityEngine::UIElements {
class __Vector2Field__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Vector2Field__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __Vector2Field____c;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Vector2Field;
}
namespace UnityEngine::UIElements {
class __Vector2Field__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Vector2Field__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __Vector2Field____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector2Field);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector2Field__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector2Field__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector2Field____c);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector2Field::UxmlFactory*
class CORDL_TYPE __Vector2Field__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Vector2Field*, ::UnityEngine::UIElements::__Vector2Field__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Vector2Field__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4928c74, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2Field__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2Field__UxmlFactory(__Vector2Field__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2Field__UxmlFactory(__Vector2Field__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5516 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector2Field__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector2Field::UxmlTraits*
class CORDL_TYPE __Vector2Field__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field m_XValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_YValue;

  /// @brief Method Init, addr 0x4928cbc, size 0x164, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Vector2Field__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __cordl_internal_get_m_YValue() const;

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4928e20, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2Field__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2Field__UxmlTraits(__Vector2Field__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2Field__UxmlTraits(__Vector2Field__UxmlTraits const&) = delete;

  /// @brief Field m_XValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_YValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector2Field__UxmlTraits, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Vector2Field__UxmlTraits, ___m_XValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Vector2Field__UxmlTraits, ___m_YValue) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector2Field::<>c*
class CORDL_TYPE __Vector2Field____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__Vector2Field____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::Vector2, float_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_1,
      put = setStaticF___9__0_1)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::Vector2, float_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_3,
      put = setStaticF___9__0_3)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* __9__0_3;

  static inline ::UnityEngine::UIElements::__Vector2Field____c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x4928f54, size 0x4, virtual false, abstract: false, final false
  inline float_t _DescribeFields_b__0_0(::UnityEngine::Vector2 r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x4928f58, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(ByRef<::UnityEngine::Vector2> r, float_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x4928f60, size 0x8, virtual false, abstract: false, final false
  inline float_t _DescribeFields_b__0_2(::UnityEngine::Vector2 r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x4928f68, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(ByRef<::UnityEngine::Vector2> r, float_t v);

  /// @brief Method .ctor, addr 0x4928f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__Vector2Field____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Vector2, float_t>* getStaticF___9__0_0();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::Vector2, float_t>* getStaticF___9__0_2();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* getStaticF___9__0_3();

  static inline void setStaticF___9(::UnityEngine::UIElements::__Vector2Field____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector2, float_t>* value);

  static inline void setStaticF___9__0_1(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector2, float_t>* value);

  static inline void setStaticF___9__0_3(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector2Field____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector2Field____c(__Vector2Field____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector2Field____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector2Field____c(__Vector2Field____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector2Field____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Vector2Field
// SizeInfo { instance_size: 1104, native_size: -1, calculated_instance_size: 1104, calculated_native_size: 1104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Vector2Field*
class CORDL_TYPE Vector2Field : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Vector2Field__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Vector2Field__UxmlTraits;

  using __c = ::UnityEngine::UIElements::__Vector2Field____c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x49286ec, size 0x390, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>,
                  ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector2, ::UnityEngine::UIElements::FloatField*, float_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::Vector2Field* New_ctor();

  static inline ::UnityEngine::UIElements::Vector2Field* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x4928a7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4928a84, size 0x120, virtual false, abstract: false, final false
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
  constexpr Vector2Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Field(Vector2Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Field(Vector2Field const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector2Field, 0x450>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Vector2Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector2Field*, "UnityEngine.UIElements", "Vector2Field");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector2Field__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector2Field__UxmlFactory*, "UnityEngine.UIElements", "Vector2Field/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector2Field__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector2Field__UxmlTraits*, "UnityEngine.UIElements", "Vector2Field/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector2Field____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector2Field____c*, "UnityEngine.UIElements", "Vector2Field/<>c");
