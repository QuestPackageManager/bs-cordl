#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector3IntField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3IntField)
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
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IntegerField;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> struct __BaseCompositeField_3__FieldDescription;
}
namespace UnityEngine::UIElements {
class __Vector3IntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Vector3IntField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __Vector3IntField____c;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Vector3IntField;
}
namespace UnityEngine::UIElements {
class __Vector3IntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Vector3IntField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __Vector3IntField____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Vector3IntField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector3IntField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Vector3IntField____c);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector3IntField::UxmlFactory*
class CORDL_TYPE __Vector3IntField__UxmlFactory
    : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Vector3IntField*, ::UnityEngine::UIElements::__Vector3IntField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Vector3IntField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4916c40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntField__UxmlFactory(__Vector3IntField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntField__UxmlFactory(__Vector3IntField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5527 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector3IntField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector3IntField::UxmlTraits*
class CORDL_TYPE __Vector3IntField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Vector3Int> {
public:
  // Declarations
  /// @brief Field m_XValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_YValue;

  /// @brief Field m_ZValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ZValue, put = __cordl_internal_set_m_ZValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_ZValue;

  /// @brief Method Init, addr 0x4916c88, size 0x194, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__Vector3IntField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_YValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_ZValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_ZValue() const;

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ZValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4916e1c, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntField__UxmlTraits(__Vector3IntField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntField__UxmlTraits(__Vector3IntField__UxmlTraits const&) = delete;

  /// @brief Field m_XValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_YValue;

  /// @brief Field m_ZValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_ZValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5528 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector3IntField__UxmlTraits, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits, ___m_XValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits, ___m_YValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits, ___m_ZValue) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Vector3IntField::<>c*
class CORDL_TYPE __Vector3IntField____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__Vector3IntField____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_1,
      put = setStaticF___9__0_1)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_3,
      put = setStaticF___9__0_3)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_3;

  /// @brief Field <>9__0_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_4, put = setStaticF___9__0_4)) ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* __9__0_4;

  /// @brief Field <>9__0_5, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_5,
      put = setStaticF___9__0_5)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_5;

  static inline ::UnityEngine::UIElements::__Vector3IntField____c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x4916f88, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_0(::UnityEngine::Vector3Int r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x4916f90, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(ByRef<::UnityEngine::Vector3Int> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x4916f98, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_2(::UnityEngine::Vector3Int r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x4916fa0, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(ByRef<::UnityEngine::Vector3Int> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_4, addr 0x4916fa8, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_4(::UnityEngine::Vector3Int r);

  /// @brief Method <DescribeFields>b__0_5, addr 0x4916fb0, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_5(ByRef<::UnityEngine::Vector3Int> r, int32_t v);

  /// @brief Method .ctor, addr 0x4916f80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__Vector3IntField____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* getStaticF___9__0_0();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* getStaticF___9__0_2();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_3();

  static inline ::System::Func_2<::UnityEngine::Vector3Int, int32_t>* getStaticF___9__0_4();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_5();

  static inline void setStaticF___9(::UnityEngine::UIElements::__Vector3IntField____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector3Int, int32_t>* value);

  static inline void
  setStaticF___9__0_1(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector3Int, int32_t>* value);

  static inline void
  setStaticF___9__0_3(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_4(::System::Func_2<::UnityEngine::Vector3Int, int32_t>* value);

  static inline void
  setStaticF___9__0_5(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntField____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntField____c(__Vector3IntField____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntField____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntField____c(__Vector3IntField____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Vector3IntField____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Vector3IntField
// SizeInfo { instance_size: 1112, native_size: -1, calculated_instance_size: 1112, calculated_native_size: 1112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Vector3IntField*
class CORDL_TYPE Vector3IntField : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Vector3IntField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Vector3IntField__UxmlTraits;

  using __c = ::UnityEngine::UIElements::__Vector3IntField____c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x4916674, size 0x4f4, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                  ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector3Int, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::Vector3IntField* New_ctor();

  static inline ::UnityEngine::UIElements::Vector3IntField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x4916b68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49115c4, size 0x120, virtual false, abstract: false, final false
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
  constexpr Vector3IntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntField(Vector3IntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntField(Vector3IntField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Vector3IntField, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Vector3IntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Vector3IntField*, "UnityEngine.UIElements", "Vector3IntField");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector3IntField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector3IntField__UxmlFactory*, "UnityEngine.UIElements", "Vector3IntField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector3IntField__UxmlTraits*, "UnityEngine.UIElements", "Vector3IntField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__Vector3IntField____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Vector3IntField____c*, "UnityEngine.UIElements", "Vector3IntField/<>c");
