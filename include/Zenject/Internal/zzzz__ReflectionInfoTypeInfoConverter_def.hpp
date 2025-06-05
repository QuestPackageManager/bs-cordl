#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionInfoTypeInfoConverter)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass0_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass4_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass8_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass8_1;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass9_0;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectConstructorInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectFieldInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectMethodInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectParameterInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectPropertyInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectConstructorInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMemberInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMethodInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
class ZenFactoryMethod;
}
namespace Zenject {
class ZenInjectMethod;
}
namespace Zenject {
class ZenMemberSetterMethod;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass0_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass4_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass8_0;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass8_1;
}
namespace Zenject::Internal {
class ReflectionInfoTypeInfoConverter___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0);
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* __9;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* __9__0_1;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* __9__1_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1, put = setStaticF___9__8_1)) ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* __9__8_1;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* New_ctor();

  /// @brief Method <ConvertConstructor>b__1_0, addr 0x4b58294, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::InjectableInfo* _ConvertConstructor_b__1_0(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* x);

  /// @brief Method <ConvertMethod>b__0_1, addr 0x4b5827c, size 0x18, virtual false, abstract: false, final false
  inline ::Zenject::InjectableInfo* _ConvertMethod_b__0_1(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* x);

  /// @brief Method <GetOnlyPropertySetter>b__8_1, addr 0x4b582ac, size 0x24, virtual false, abstract: false, final false
  inline ::StringW _GetOnlyPropertySetter_b__8_1(::System::Reflection::FieldInfo* f);

  /// @brief Method __zenCreate, addr 0x4b582d0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b58324, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b58274, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* getStaticF___9__0_1();

  static inline ::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* getStaticF___9__1_0();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* getStaticF___9__8_1();

  static inline void setStaticF___9(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c* value);

  static inline void setStaticF___9__0_1(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, ::Zenject::InjectableInfo*>* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::System::Reflection::FieldInfo*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c(ReflectionInfoTypeInfoConverter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c(ReflectionInfoTypeInfoConverter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass0_0
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field methodInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_methodInfo, put = __cordl_internal_set_methodInfo)) ::System::Reflection::MethodInfo* methodInfo;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0* New_ctor();

  /// @brief Method <ConvertMethod>b__0, addr 0x4b584dc, size 0x1c, virtual false, abstract: false, final false
  inline void _ConvertMethod_b__0(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_methodInfo() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_methodInfo();

  constexpr void __cordl_internal_set_methodInfo(::System::Reflection::MethodInfo* value);

  /// @brief Method __zenCreate, addr 0x4b584f8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5854c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b57960, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c__DisplayClass0_0(ReflectionInfoTypeInfoConverter___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c__DisplayClass0_0(ReflectionInfoTypeInfoConverter___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12714 };

  /// @brief Field methodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___methodInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0, ___methodInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass4_0
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0* New_ctor();

  /// @brief Method <TryCreateFactoryMethod>b__0, addr 0x4b58704, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* _TryCreateFactoryMethod_b__0(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b58780, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b587d4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b57d28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c__DisplayClass4_0(ReflectionInfoTypeInfoConverter___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c__DisplayClass4_0(ReflectionInfoTypeInfoConverter___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12715 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_0
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Field writeableFields, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writeableFields,
                      put = __cordl_internal_set_writeableFields)) ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* writeableFields;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0* New_ctor();

  /// @brief Method <GetOnlyPropertySetter>b__0, addr 0x4b5898c, size 0xac, virtual false, abstract: false, final false
  inline bool _GetOnlyPropertySetter_b__0(::System::Reflection::FieldInfo* f);

  /// @brief Method <GetOnlyPropertySetter>b__2, addr 0x4b58a38, size 0xdc, virtual false, abstract: false, final false
  inline void _GetOnlyPropertySetter_b__2(::System::Object* injectable, ::System::Object* value);

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* const& __cordl_internal_get_writeableFields() const;

  constexpr ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*& __cordl_internal_get_writeableFields();

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  constexpr void __cordl_internal_set_writeableFields(::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* value);

  /// @brief Method __zenCreate, addr 0x4b58b1c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b58b70, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b58200, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c__DisplayClass8_0(ReflectionInfoTypeInfoConverter___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c__DisplayClass8_0(ReflectionInfoTypeInfoConverter___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12716 };

  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field writeableFields, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* ___writeableFields;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0, ___propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0, ___writeableFields) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_1
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c__DisplayClass8_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field injectable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_injectable, put = __cordl_internal_set_injectable)) ::System::Object* injectable;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1* New_ctor();

  /// @brief Method <GetOnlyPropertySetter>b__3, addr 0x4b58d28, size 0x24, virtual false, abstract: false, final false
  inline void _GetOnlyPropertySetter_b__3(::System::Reflection::FieldInfo* f);

  constexpr ::System::Object* const& __cordl_internal_get_injectable() const;

  constexpr ::System::Object*& __cordl_internal_get_injectable();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_injectable(::System::Object* value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method __zenCreate, addr 0x4b58d4c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b58da0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b58b14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c__DisplayClass8_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass8_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c__DisplayClass8_1(ReflectionInfoTypeInfoConverter___c__DisplayClass8_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass8_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c__DisplayClass8_1(ReflectionInfoTypeInfoConverter___c__DisplayClass8_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12717 };

  /// @brief Field injectable, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___injectable;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1, ___injectable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0
class CORDL_TYPE ReflectionInfoTypeInfoConverter___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fieldInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldInfo, put = __cordl_internal_set_fieldInfo)) ::System::Reflection::FieldInfo* fieldInfo;

  /// @brief Field propInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_propInfo, put = __cordl_internal_set_propInfo)) ::System::Reflection::PropertyInfo* propInfo;

  static inline ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0* New_ctor();

  /// @brief Method <GetSetter>b__0, addr 0x4b58f58, size 0x1c, virtual false, abstract: false, final false
  inline void _GetSetter_b__0(::System::Object* injectable, ::System::Object* value);

  /// @brief Method <GetSetter>b__1, addr 0x4b58f74, size 0x28, virtual false, abstract: false, final false
  inline void _GetSetter_b__1(::System::Object* injectable, ::System::Object* value);

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_fieldInfo() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_fieldInfo();

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get_propInfo() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_propInfo();

  constexpr void __cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set_propInfo(::System::Reflection::PropertyInfo* value);

  /// @brief Method __zenCreate, addr 0x4b58f9c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b58ff0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b58208, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter___c__DisplayClass9_0(ReflectionInfoTypeInfoConverter___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter___c__DisplayClass9_0(ReflectionInfoTypeInfoConverter___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12718 };

  /// @brief Field fieldInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___fieldInfo;

  /// @brief Field propInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___propInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0, ___fieldInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0, ___propInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionInfoTypeInfoConverter
class CORDL_TYPE ReflectionInfoTypeInfoConverter : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c;

  using __c__DisplayClass0_0 = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0;

  using __c__DisplayClass4_0 = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0;

  using __c__DisplayClass8_0 = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0;

  using __c__DisplayClass8_1 = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1;

  using __c__DisplayClass9_0 = ::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0;

  /// @brief Method ConvertConstructor, addr 0x4b55154, size 0x17c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo_InjectConstructorInfo* ConvertConstructor(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor, ::System::Type* type);

  /// @brief Method ConvertField, addr 0x4b553b4, size 0x84, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo_InjectMemberInfo* ConvertField(::System::Type* parentType, ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* injectField);

  /// @brief Method ConvertMethod, addr 0x4b57760, size 0x200, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo_InjectMethodInfo* ConvertMethod(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo* injectMethod);

  /// @brief Method ConvertProperty, addr 0x4b55440, size 0x84, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo_InjectMemberInfo* ConvertProperty(::System::Type* parentType, ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* injectProperty);

  /// @brief Method GetAllFields, addr 0x4b57d38, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetAllFields(::System::Type* t, ::System::Reflection::BindingFlags flags);

  /// @brief Method GetOnlyPropertySetter, addr 0x4b57e98, size 0x368, virtual false, abstract: false, final false
  static inline ::Zenject::ZenMemberSetterMethod* GetOnlyPropertySetter(::System::Type* parentType, ::StringW propertyName);

  /// @brief Method GetSetter, addr 0x4b57b30, size 0x1f8, virtual false, abstract: false, final false
  static inline ::Zenject::ZenMemberSetterMethod* GetSetter(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo);

  /// @brief Method TryCreateActionForMethod, addr 0x4b57968, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ZenInjectMethod* TryCreateActionForMethod(::System::Reflection::MethodInfo* methodInfo);

  /// @brief Method TryCreateFactoryMethod, addr 0x4b57970, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::ZenFactoryMethod* TryCreateFactoryMethod(::System::Type* type, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* reflectionInfo);

  /// @brief Method TryCreateFactoryMethodCompiledLambdaExpression, addr 0x4b57d30, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ZenFactoryMethod* TryCreateFactoryMethodCompiledLambdaExpression(::System::Type* type, ::System::Reflection::ConstructorInfo* constructor);

  /// @brief Method TryGetSetterAsCompiledExpression, addr 0x4b58210, size 0x8, virtual false, abstract: false, final false
  static inline ::Zenject::ZenMemberSetterMethod* TryGetSetterAsCompiledExpression(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionInfoTypeInfoConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionInfoTypeInfoConverter(ReflectionInfoTypeInfoConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionInfoTypeInfoConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionInfoTypeInfoConverter(ReflectionInfoTypeInfoConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12719 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionInfoTypeInfoConverter, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass0_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass0_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass4_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass8_1*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_1");
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter___c__DisplayClass9_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0");
