#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseCompositeField_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseCompositeField_3)
namespace GlobalNamespace {
template <typename TValueType, typename TField, typename TFieldValue> class __BaseCompositeField_3__FieldDescription__WriteDelegate;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> struct __BaseCompositeField_3__FieldDescription;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> class __BaseCompositeField_3____c__DisplayClass24_0;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TValueType, typename TField, typename TFieldValue> class __BaseCompositeField_3__FieldDescription__WriteDelegate;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> class BaseCompositeField_3;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> class __BaseCompositeField_3____c__DisplayClass24_0;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TField, typename TFieldValue> struct __BaseCompositeField_3__FieldDescription;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseCompositeField_3);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__BaseCompositeField_3____c__DisplayClass24_0);
MARK_GEN_VAL_T(::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription);
// Type: ::WriteDelegate
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TValueType, typename TField, typename TFieldValue>
// Is value type: false
// CS Name: ::BaseCompositeField`3::FieldDescription::WriteDelegate<TValueType,TField,TFieldValue>*
class CORDL_TYPE __BaseCompositeField_3__FieldDescription__WriteDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(ByRef<TValueType> val, TFieldValue fieldValue);

  static inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType, TField, TFieldValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseCompositeField_3__FieldDescription__WriteDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseCompositeField_3__FieldDescription__WriteDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseCompositeField_3__FieldDescription__WriteDelegate(__BaseCompositeField_3__FieldDescription__WriteDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseCompositeField_3__FieldDescription__WriteDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseCompositeField_3__FieldDescription__WriteDelegate(__BaseCompositeField_3__FieldDescription__WriteDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::FieldDescription
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TField, typename TFieldValue>
// Is value type: true
// CS Name: ::BaseCompositeField`3::FieldDescription<TValueType,TField,TFieldValue>
struct CORDL_TYPE __BaseCompositeField_3__FieldDescription {
public:
  // Declarations
  using WriteDelegate = ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType, TField, TFieldValue>;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW ussName, ::System::Func_2<TValueType, TFieldValue>* read,
                    ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType, TField, TFieldValue>* write);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseCompositeField_3__FieldDescription();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ussName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "read", ty: "::System::Func_2<TValueType,TFieldValue>*", modifiers: "", def_value: None }, CppParam { name: "write", ty:
  // "::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType,TField,TFieldValue>*", modifiers: "", def_value: None }]
  constexpr __BaseCompositeField_3__FieldDescription(::StringW name, ::StringW ussName, ::System::Func_2<TValueType, TFieldValue>* read,
                                                     ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType, TField, TFieldValue>* write) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field ussName, offset: 0x8, size: 0x8, def value: None
  ::StringW ussName;

  /// @brief Field read, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TValueType, TFieldValue>* read;

  /// @brief Field write, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<TValueType, TField, TFieldValue>* write;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5469 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TField, typename TFieldValue>
// Is value type: false
// CS Name: ::BaseCompositeField`3::<>c__DisplayClass24_0<TValueType,TField,TFieldValue>*
class CORDL_TYPE __BaseCompositeField_3____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* __4__this;

  /// @brief Field desc, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_desc, put = __cordl_internal_set_desc)) ::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue> desc;

  /// @brief Field field, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_field, put = __cordl_internal_set_field)) TField field;

  static inline ::UnityEngine::UIElements::__BaseCompositeField_3____c__DisplayClass24_0<TValueType, TField, TFieldValue>* New_ctor();

  constexpr ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue> const& __cordl_internal_get_desc() const;

  constexpr ::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue>& __cordl_internal_get_desc();

  constexpr TField const& __cordl_internal_get_field() const;

  constexpr TField& __cordl_internal_get_field();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* value);

  constexpr void __cordl_internal_set_desc(::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue> value);

  constexpr void __cordl_internal_set_field(TField value);

  /// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TFieldValue __ctor_b__0(TFieldValue newValue);

  /// @brief Method <.ctor>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__1(::UnityEngine::UIElements::ChangeEvent_1<TFieldValue>* e);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseCompositeField_3____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseCompositeField_3____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseCompositeField_3____c__DisplayClass24_0(__BaseCompositeField_3____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseCompositeField_3____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseCompositeField_3____c__DisplayClass24_0(__BaseCompositeField_3____c__DisplayClass24_0 const&) = delete;

  /// @brief Field desc, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue> ___desc;

  /// @brief Field field, offset: 0x30, size: 0x8, def value: None
  TField ___field;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* _____4__this;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5470 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseCompositeField`3
// SizeInfo { instance_size: 1104, native_size: 1104, calculated_instance_size: 1104, calculated_native_size: 1104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TField, typename TFieldValue>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseCompositeField`3<TValueType,TField,TFieldValue>*
class CORDL_TYPE BaseCompositeField_3 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using FieldDescription = ::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue>;

  using __c__DisplayClass24_0 = ::UnityEngine::UIElements::__BaseCompositeField_3____c__DisplayClass24_0<TValueType, TField, TFieldValue>;

  /// @brief Field fieldGroupUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fieldGroupUssClassName, put = setStaticF_fieldGroupUssClassName)) ::StringW fieldGroupUssClassName;

  /// @brief Field fieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fieldUssClassName, put = setStaticF_fieldUssClassName)) ::StringW fieldUssClassName;

  /// @brief Field firstFieldVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_firstFieldVariantUssClassName, put = setStaticF_firstFieldVariantUssClassName)) ::StringW firstFieldVariantUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_Fields, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Fields, put = __cordl_internal_set_m_Fields)) ::System::Collections::Generic::List_1<TField>* m_Fields;

  /// @brief Field m_ForceUpdateDisplay, offset 0x449, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceUpdateDisplay, put = __cordl_internal_set_m_ForceUpdateDisplay)) bool m_ForceUpdateDisplay;

  /// @brief Field m_PropertyIndex, offset 0x44c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PropertyIndex, put = __cordl_internal_set_m_PropertyIndex)) int32_t m_PropertyIndex;

  /// @brief Field m_ShouldUpdateDisplay, offset 0x448, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldUpdateDisplay, put = __cordl_internal_set_m_ShouldUpdateDisplay)) bool m_ShouldUpdateDisplay;

  /// @brief Field multilineVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_multilineVariantUssClassName, put = setStaticF_multilineVariantUssClassName)) ::StringW multilineVariantUssClassName;

  /// @brief Field spacerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_spacerUssClassName, put = setStaticF_spacerUssClassName)) ::StringW spacerUssClassName;

  /// @brief Field twoLinesVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_twoLinesVariantUssClassName, put = setStaticF_twoLinesVariantUssClassName)) ::StringW twoLinesVariantUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method DescribeFields, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue>,
                  ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<TValueType, TField, TFieldValue>>*>
  DescribeFields();

  /// @brief Method GetSpacer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetSpacer();

  static inline ::UnityEngine::UIElements::BaseCompositeField_3<TValueType, TField, TFieldValue>* New_ctor(::StringW label, int32_t fieldsByLine);

  /// @brief Method OnViewDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method UpdateDisplay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateDisplay();

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::System::Collections::Generic::List_1<TField>*& __cordl_internal_get_m_Fields();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TField>*> const& __cordl_internal_get_m_Fields() const;

  constexpr bool const& __cordl_internal_get_m_ForceUpdateDisplay() const;

  constexpr bool& __cordl_internal_get_m_ForceUpdateDisplay();

  constexpr int32_t const& __cordl_internal_get_m_PropertyIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PropertyIndex();

  constexpr bool const& __cordl_internal_get_m_ShouldUpdateDisplay() const;

  constexpr bool& __cordl_internal_get_m_ShouldUpdateDisplay();

  constexpr void __cordl_internal_set_m_Fields(::System::Collections::Generic::List_1<TField>* value);

  constexpr void __cordl_internal_set_m_ForceUpdateDisplay(bool value);

  constexpr void __cordl_internal_set_m_PropertyIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ShouldUpdateDisplay(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t fieldsByLine);

  static inline ::StringW getStaticF_fieldGroupUssClassName();

  static inline ::StringW getStaticF_fieldUssClassName();

  static inline ::StringW getStaticF_firstFieldVariantUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_multilineVariantUssClassName();

  static inline ::StringW getStaticF_spacerUssClassName();

  static inline ::StringW getStaticF_twoLinesVariantUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_fieldGroupUssClassName(::StringW value);

  static inline void setStaticF_fieldUssClassName(::StringW value);

  static inline void setStaticF_firstFieldVariantUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_multilineVariantUssClassName(::StringW value);

  static inline void setStaticF_spacerUssClassName(::StringW value);

  static inline void setStaticF_twoLinesVariantUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseCompositeField_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseCompositeField_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseCompositeField_3(BaseCompositeField_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseCompositeField_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseCompositeField_3(BaseCompositeField_3 const&) = delete;

  /// @brief Field m_Fields, offset: 0x440, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TField>* ___m_Fields;

  /// @brief Field m_ShouldUpdateDisplay, offset: 0x448, size: 0x1, def value: None
  bool ___m_ShouldUpdateDisplay;

  /// @brief Field m_ForceUpdateDisplay, offset: 0x449, size: 0x1, def value: None
  bool ___m_ForceUpdateDisplay;

  /// @brief Field m_PropertyIndex, offset: 0x44c, size: 0x4, def value: None
  int32_t ___m_PropertyIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5471 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate, "UnityEngine.UIElements", "BaseCompositeField`3/FieldDescription/WriteDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseCompositeField_3, "UnityEngine.UIElements", "BaseCompositeField`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__BaseCompositeField_3____c__DisplayClass24_0, "UnityEngine.UIElements", "BaseCompositeField`3/<>c__DisplayClass24_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription, "UnityEngine.UIElements", "BaseCompositeField`3/FieldDescription");
