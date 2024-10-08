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
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectIntField)
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
class __RectIntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RectIntField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __RectIntField____c;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RectIntField;
}
namespace UnityEngine::UIElements {
class __RectIntField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __RectIntField__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __RectIntField____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RectIntField);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RectIntField__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RectIntField__UxmlTraits);
MARK_REF_PTR_T(::UnityEngine::UIElements::__RectIntField____c);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RectIntField::UxmlFactory*
class CORDL_TYPE __RectIntField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::RectIntField*, ::UnityEngine::UIElements::__RectIntField__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__RectIntField__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4913bd4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntField__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntField__UxmlFactory(__RectIntField__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntField__UxmlFactory(__RectIntField__UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5507 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RectIntField__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RectIntField::UxmlTraits*
class CORDL_TYPE __RectIntField__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::RectInt> {
public:
  // Declarations
  /// @brief Field m_HValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HValue, put = __cordl_internal_set_m_HValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_HValue;

  /// @brief Field m_WValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WValue, put = __cordl_internal_set_m_WValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_WValue;

  /// @brief Field m_XValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XValue, put = __cordl_internal_set_m_XValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_XValue;

  /// @brief Field m_YValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_YValue, put = __cordl_internal_set_m_YValue)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_YValue;

  /// @brief Method Init, addr 0x4913c1c, size 0x1d4, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__RectIntField__UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_HValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_HValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_WValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_WValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_XValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_XValue() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_YValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_YValue() const;

  constexpr void __cordl_internal_set_m_HValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_WValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4913df0, size 0x140, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntField__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntField__UxmlTraits(__RectIntField__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntField__UxmlTraits(__RectIntField__UxmlTraits const&) = delete;

  /// @brief Field m_XValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_XValue;

  /// @brief Field m_YValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_YValue;

  /// @brief Field m_WValue, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_WValue;

  /// @brief Field m_HValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_HValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5508 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RectIntField__UxmlTraits, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RectIntField__UxmlTraits, ___m_XValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RectIntField__UxmlTraits, ___m_YValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RectIntField__UxmlTraits, ___m_WValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__RectIntField__UxmlTraits, ___m_HValue) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::RectIntField::<>c*
class CORDL_TYPE __RectIntField____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__RectIntField____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_1,
      put = setStaticF___9__0_1)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_3,
      put = setStaticF___9__0_3)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_3;

  /// @brief Field <>9__0_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_4, put = setStaticF___9__0_4)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_4;

  /// @brief Field <>9__0_5, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_5,
      put = setStaticF___9__0_5)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_5;

  /// @brief Field <>9__0_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_6, put = setStaticF___9__0_6)) ::System::Func_2<::UnityEngine::RectInt, int32_t>* __9__0_6;

  /// @brief Field <>9__0_7, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__0_7,
      put = setStaticF___9__0_7)) ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* __9__0_7;

  static inline ::UnityEngine::UIElements::__RectIntField____c* New_ctor();

  /// @brief Method <DescribeFields>b__0_0, addr 0x4913f94, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_0(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_1, addr 0x4913f9c, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_1(ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_2, addr 0x4913fa4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_2(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_3, addr 0x4913fac, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_3(ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_4, addr 0x4913fb4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_4(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_5, addr 0x4913fbc, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_5(ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method <DescribeFields>b__0_6, addr 0x4913fc4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _DescribeFields_b__0_6(::UnityEngine::RectInt r);

  /// @brief Method <DescribeFields>b__0_7, addr 0x4913fcc, size 0x8, virtual false, abstract: false, final false
  inline void _DescribeFields_b__0_7(ByRef<::UnityEngine::RectInt> r, int32_t v);

  /// @brief Method .ctor, addr 0x4913f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__RectIntField____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_0();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_1();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_2();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_3();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_4();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_5();

  static inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* getStaticF___9__0_6();

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* getStaticF___9__0_7();

  static inline void setStaticF___9(::UnityEngine::UIElements::__RectIntField____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void setStaticF___9__0_1(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void setStaticF___9__0_3(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_4(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void setStaticF___9__0_5(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

  static inline void setStaticF___9__0_6(::System::Func_2<::UnityEngine::RectInt, int32_t>* value);

  static inline void setStaticF___9__0_7(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntField____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntField____c(__RectIntField____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntField____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntField____c(__RectIntField____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5509 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__RectIntField____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::RectIntField
// SizeInfo { instance_size: 1112, native_size: -1, calculated_instance_size: 1112, calculated_native_size: 1112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::RectIntField*
class CORDL_TYPE RectIntField : public ::UnityEngine::UIElements::BaseCompositeField_3<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t> {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__RectIntField__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__RectIntField__UxmlTraits;

  using __c = ::UnityEngine::UIElements::__RectIntField____c;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x491336c, size 0x658, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                  ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>
  DescribeFields();

  static inline ::UnityEngine::UIElements::RectIntField* New_ctor();

  static inline ::UnityEngine::UIElements::RectIntField* New_ctor(::StringW label);

  /// @brief Method .ctor, addr 0x49139c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49139cc, size 0x138, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5510 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RectIntField, 0x458>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RectIntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RectIntField*, "UnityEngine.UIElements", "RectIntField");
NEED_NO_BOX(::UnityEngine::UIElements::__RectIntField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RectIntField__UxmlFactory*, "UnityEngine.UIElements", "RectIntField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__RectIntField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RectIntField__UxmlTraits*, "UnityEngine.UIElements", "RectIntField/UxmlTraits");
NEED_NO_BOX(::UnityEngine::UIElements::__RectIntField____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__RectIntField____c*, "UnityEngine.UIElements", "RectIntField/<>c");
