#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionUtils)
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c__DisplayClass42_0;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c__DisplayClass43_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
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
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Runtime::Serialization::Formatters {
struct FormatterAssemblyStyle;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System {
class Attribute;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionUtils;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c__DisplayClass42_0;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionUtils____c__DisplayClass43_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionUtils____c);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ReflectionUtils::<>c*
class CORDL_TYPE __ReflectionUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Newtonsoft::Json::Utilities::__ReflectionUtils____c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0))::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* __9__10_0;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0))::System::Func_2<::System::Reflection::MemberInfo*, ::StringW>* __9__29_0;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0))::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>* __9__37_0;

  /// @brief Field <>9__39_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__39_0, put = setStaticF___9__39_0))::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__39_0;

  static inline ::Newtonsoft::Json::Utilities::__ReflectionUtils____c* New_ctor();

  /// @brief Method <GetChildPrivateFields>b__39_0, addr 0x27bc338, size 0x18, virtual false, abstract: false, final false
  inline bool _GetChildPrivateFields_b__39_0(::System::Reflection::FieldInfo* f);

  /// @brief Method <GetDefaultConstructor>b__10_0, addr 0x27bc28c, size 0x6c, virtual false, abstract: false, final false
  inline bool _GetDefaultConstructor_b__10_0(::System::Reflection::ConstructorInfo* c);

  /// @brief Method <GetFieldsAndProperties>b__29_0, addr 0x27bc2f8, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _GetFieldsAndProperties_b__29_0(::System::Reflection::MemberInfo* m);

  /// @brief Method <GetMemberInfoFromType>b__37_0, addr 0x27bc318, size 0x20, virtual false, abstract: false, final false
  inline ::System::Type* _GetMemberInfoFromType_b__37_0(::System::Reflection::ParameterInfo* p);

  /// @brief Method .ctor, addr 0x27bc284, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Utilities::__ReflectionUtils____c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* getStaticF___9__10_0();

  static inline ::System::Func_2<::System::Reflection::MemberInfo*, ::StringW>* getStaticF___9__29_0();

  static inline ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>* getStaticF___9__37_0();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__39_0();

  static inline void setStaticF___9(::Newtonsoft::Json::Utilities::__ReflectionUtils____c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);

  static inline void setStaticF___9__29_0(::System::Func_2<::System::Reflection::MemberInfo*, ::StringW>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>* value);

  static inline void setStaticF___9__39_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionUtils____c(__ReflectionUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionUtils____c(__ReflectionUtils____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionUtils____c, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass42_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ReflectionUtils::<>c__DisplayClass42_0*
class CORDL_TYPE __ReflectionUtils____c__DisplayClass42_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subTypeProperty, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_subTypeProperty, put = __cordl_internal_set_subTypeProperty))::System::Reflection::PropertyInfo* subTypeProperty;

  static inline ::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0* New_ctor();

  /// @brief Method <GetChildPrivateProperties>b__0, addr 0x27bc350, size 0x54, virtual false, abstract: false, final false
  inline bool _GetChildPrivateProperties_b__0(::System::Reflection::PropertyInfo* p);

  /// @brief Method <GetChildPrivateProperties>b__1, addr 0x27bc3a4, size 0xa0, virtual false, abstract: false, final false
  inline bool _GetChildPrivateProperties_b__1(::System::Reflection::PropertyInfo* p);

  /// @brief Method <GetChildPrivateProperties>b__2, addr 0x27bc444, size 0x134, virtual false, abstract: false, final false
  inline bool _GetChildPrivateProperties_b__2(::System::Reflection::PropertyInfo* p);

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_subTypeProperty();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __cordl_internal_get_subTypeProperty() const;

  constexpr void __cordl_internal_set_subTypeProperty(::System::Reflection::PropertyInfo* value);

  /// @brief Method .ctor, addr 0x27bbeec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionUtils____c__DisplayClass42_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionUtils____c__DisplayClass42_0(__ReflectionUtils____c__DisplayClass42_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c__DisplayClass42_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionUtils____c__DisplayClass42_0(__ReflectionUtils____c__DisplayClass42_0 const&) = delete;

  /// @brief Field subTypeProperty, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___subTypeProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0, ___subTypeProperty) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass43_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::ReflectionUtils::<>c__DisplayClass43_0*
class CORDL_TYPE __ReflectionUtils____c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field method, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_method, put = __cordl_internal_set_method))::StringW method;

  /// @brief Field methodDeclaringType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_methodDeclaringType, put = __cordl_internal_set_methodDeclaringType))::System::Type* methodDeclaringType;

  static inline ::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0* New_ctor();

  /// @brief Method <IsMethodOverridden>b__0, addr 0x27bc578, size 0x98, virtual false, abstract: false, final false
  inline bool _IsMethodOverridden_b__0(::System::Reflection::MethodInfo* info);

  constexpr ::StringW const& __cordl_internal_get_method() const;

  constexpr ::StringW& __cordl_internal_get_method();

  constexpr ::System::Type*& __cordl_internal_get_methodDeclaringType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_methodDeclaringType() const;

  constexpr void __cordl_internal_set_method(::StringW value);

  constexpr void __cordl_internal_set_methodDeclaringType(::System::Type* value);

  /// @brief Method .ctor, addr 0x27bbff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionUtils____c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionUtils____c__DisplayClass43_0(__ReflectionUtils____c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionUtils____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionUtils____c__DisplayClass43_0(__ReflectionUtils____c__DisplayClass43_0 const&) = delete;

  /// @brief Field method, offset: 0x10, size: 0x8, def value: None
  ::StringW ___method;

  /// @brief Field methodDeclaringType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___methodDeclaringType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0, ___method) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0, ___methodDeclaringType) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ReflectionUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionUtils*
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::Newtonsoft::Json::Utilities::__ReflectionUtils____c;

  using __c__DisplayClass42_0 = ::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0;

  using __c__DisplayClass43_0 = ::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0;

  /// @brief Field EmptyTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyTypes, put = setStaticF_EmptyTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> EmptyTypes;

  /// @brief Method CanReadMemberValue, addr 0x27adf94, size 0x144, virtual false, abstract: false, final false
  static inline bool CanReadMemberValue(::System::Reflection::MemberInfo* member, bool nonPublic);

  /// @brief Method CanSetMemberValue, addr 0x27ae0d8, size 0x17c, virtual false, abstract: false, final false
  static inline bool CanSetMemberValue(::System::Reflection::MemberInfo* member, bool nonPublic, bool canSetReadOnly);

  /// @brief Method EnsureNotNullableType, addr 0x27b8ea0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Type* EnsureNotNullableType(::System::Type* t);

  /// @brief Method GetAssemblyDelimiterIndex, addr 0x27bb520, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<int32_t> GetAssemblyDelimiterIndex(::StringW fullyQualifiedTypeName);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Object* attributeProvider);

  /// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetAttribute(::System::Object* attributeProvider, bool inherit);

  /// @brief Method GetAttributes, addr 0x27baf3c, size 0x4f4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetAttributes(::System::Object* attributeProvider, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetAttributes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> GetAttributes(::System::Object* attributeProvider, bool inherit);

  /// @brief Method GetBaseDefinition, addr 0x27b89e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetBaseDefinition(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method GetChildPrivateFields, addr 0x27bb860, size 0x1e8, virtual false, abstract: false, final false
  static inline void GetChildPrivateFields(::System::Collections::Generic::IList_1<::System::Reflection::MemberInfo*>* initialFields, ::System::Type* targetType,
                                           ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetChildPrivateProperties, addr 0x27bba58, size 0x494, virtual false, abstract: false, final false
  static inline void GetChildPrivateProperties(::System::Collections::Generic::IList_1<::System::Reflection::PropertyInfo*>* initialProperties, ::System::Type* targetType,
                                               ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCollectionItemType, addr 0x27b946c, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Type* GetCollectionItemType(::System::Type* type);

  /// @brief Method GetDefaultConstructor, addr 0x27b8e28, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* GetDefaultConstructor(::System::Type* t);

  /// @brief Method GetDefaultConstructor, addr 0x27b8cf8, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* GetDefaultConstructor(::System::Type* t, bool nonPublic);

  /// @brief Method GetDefaultValue, addr 0x27bbff8, size 0x228, virtual false, abstract: false, final false
  static inline ::System::Object* GetDefaultValue(::System::Type* type);

  /// @brief Method GetDictionaryKeyValueTypes, addr 0x27b9694, size 0x22c, virtual false, abstract: false, final false
  static inline void GetDictionaryKeyValueTypes(::System::Type* dictionaryType, ByRef<::System::Type*> keyType, ByRef<::System::Type*> valueType);

  /// @brief Method GetFields, addr 0x27ba9c8, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFieldsAndProperties, addr 0x27b9f40, size 0xa88, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Reflection::MemberInfo*>* GetFieldsAndProperties(::System::Type* type, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMemberInfoFromType, addr 0x27bb5f8, size 0x268, virtual false, abstract: false, final false
  static inline ::System::Reflection::MemberInfo* GetMemberInfoFromType(::System::Type* targetType, ::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetMemberUnderlyingType, addr 0x27ae264, size 0x224, virtual false, abstract: false, final false
  static inline ::System::Type* GetMemberUnderlyingType(::System::Reflection::MemberInfo* member);

  /// @brief Method GetMemberValue, addr 0x27b9a04, size 0x328, virtual false, abstract: false, final false
  static inline ::System::Object* GetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* target);

  /// @brief Method GetObjectType, addr 0x27b01a8, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Type* GetObjectType(::System::Object* v);

  /// @brief Method GetProperties, addr 0x27baae4, size 0x2bc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* targetType, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetTypeName, addr 0x27b8ae4, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetTypeName(::System::Type* t, ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle assemblyFormat,
                                      ::System::Runtime::Serialization::SerializationBinder* binder);

  /// @brief Method HasDefaultConstructor, addr 0x27adec0, size 0xb0, virtual false, abstract: false, final false
  static inline bool HasDefaultConstructor(::System::Type* t, bool nonPublic);

  /// @brief Method ImplementsGenericDefinition, addr 0x27b712c, size 0x74, virtual false, abstract: false, final false
  static inline bool ImplementsGenericDefinition(::System::Type* type, ::System::Type* genericInterfaceDefinition);

  /// @brief Method ImplementsGenericDefinition, addr 0x27b8f70, size 0x210, virtual false, abstract: false, final false
  static inline bool ImplementsGenericDefinition(::System::Type* type, ::System::Type* genericInterfaceDefinition, ByRef<::System::Type*> implementingType);

  /// @brief Method InheritsGenericDefinition, addr 0x27b9180, size 0x74, virtual false, abstract: false, final false
  static inline bool InheritsGenericDefinition(::System::Type* type, ::System::Type* genericClassDefinition);

  /// @brief Method InheritsGenericDefinition, addr 0x27b91f4, size 0x15c, virtual false, abstract: false, final false
  static inline bool InheritsGenericDefinition(::System::Type* type, ::System::Type* genericClassDefinition, ByRef<::System::Type*> implementingType);

  /// @brief Method InheritsGenericDefinitionInternal, addr 0x27b9364, size 0xe8, virtual false, abstract: false, final false
  static inline bool InheritsGenericDefinitionInternal(::System::Type* currentType, ::System::Type* genericClassDefinition, ByRef<::System::Type*> implementingType);

  /// @brief Method IsGenericDefinition, addr 0x27b8f14, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsGenericDefinition(::System::Type* type, ::System::Type* genericInterfaceDefinition);

  /// @brief Method IsIndexedProperty, addr 0x27b98c0, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsIndexedProperty(::System::Reflection::MemberInfo* member);

  /// @brief Method IsIndexedProperty, addr 0x27b998c, size 0x78, virtual false, abstract: false, final false
  static inline bool IsIndexedProperty(::System::Reflection::PropertyInfo* property);

  /// @brief Method IsMethodOverridden, addr 0x27bbef4, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsMethodOverridden(::System::Type* currentType, ::System::Type* methodDeclaringType, ::StringW method);

  /// @brief Method IsNullable, addr 0x27afd68, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsNullable(::System::Type* t);

  /// @brief Method IsNullableType, addr 0x27aeafc, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsNullableType(::System::Type* t);

  /// @brief Method IsOverridenGenericMember, addr 0x27bada0, size 0x19c, virtual false, abstract: false, final false
  static inline bool IsOverridenGenericMember(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method IsPublic, addr 0x27b8a6c, size 0x78, virtual false, abstract: false, final false
  static inline bool IsPublic(::System::Reflection::PropertyInfo* property);

  /// @brief Method IsVirtual, addr 0x27b8948, size 0x98, virtual false, abstract: false, final false
  static inline bool IsVirtual(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method RemoveAssemblyDetails, addr 0x27b8bb4, size 0x130, virtual false, abstract: false, final false
  static inline ::StringW RemoveAssemblyDetails(::StringW fullyQualifiedTypeName);

  /// @brief Method RemoveFlag, addr 0x27bba48, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Reflection::BindingFlags RemoveFlag(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::BindingFlags flag);

  /// @brief Method SetMemberValue, addr 0x27b9d2c, size 0x214, virtual false, abstract: false, final false
  static inline void SetMemberValue(::System::Reflection::MemberInfo* member, ::System::Object* target, ::System::Object* value);

  /// @brief Method SplitFullyQualifiedTypeName, addr 0x27bb430, size 0xf0, virtual false, abstract: false, final false
  static inline void SplitFullyQualifiedTypeName(::StringW fullyQualifiedTypeName, ByRef<::StringW> typeName, ByRef<::StringW> assemblyName);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_EmptyTypes();

  static inline void setStaticF_EmptyTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionUtils(ReflectionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionUtils(ReflectionUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionUtils*, "Newtonsoft.Json.Utilities", "ReflectionUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionUtils____c*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass42_0*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass42_0");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionUtils____c__DisplayClass43_0*, "Newtonsoft.Json.Utilities", "ReflectionUtils/<>c__DisplayClass43_0");
