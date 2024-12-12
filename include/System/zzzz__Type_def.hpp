#pragma once
// IWYU pragma private; include "System/Type.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
class MemberFilter;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
class Array;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
struct TypeCode;
}
// Forward declare root types
namespace System {
class Type;
}
// Write type traits
MARK_REF_PTR_T(::System::Type);
// Dependencies System.Reflection.BindingFlags, System.Reflection.MemberInfo, System.RuntimeTypeHandle
namespace System {
// Is value type: false
// CS Name: System.Type
class CORDL_TYPE Type : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  __declspec(property(get = get_Assembly)) ::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName)) ::StringW AssemblyQualifiedName;

  __declspec(property(get = get_Attributes)) ::System::Reflection::TypeAttributes Attributes;

  __declspec(property(get = get_BaseType)) ::System::Type* BaseType;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringMethod)) ::System::Reflection::MethodBase* DeclaringMethod;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  /// @brief Field Delimiter, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_Delimiter, put = setStaticF_Delimiter)) char16_t Delimiter;

  /// @brief Field EmptyTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyTypes, put = setStaticF_EmptyTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> EmptyTypes;

  /// @brief Field FilterAttribute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FilterAttribute, put = setStaticF_FilterAttribute)) ::System::Reflection::MemberFilter* FilterAttribute;

  /// @brief Field FilterName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FilterName, put = setStaticF_FilterName)) ::System::Reflection::MemberFilter* FilterName;

  /// @brief Field FilterNameIgnoreCase, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FilterNameIgnoreCase, put = setStaticF_FilterNameIgnoreCase)) ::System::Reflection::MemberFilter* FilterNameIgnoreCase;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_FullNameOrDefault)) ::StringW FullNameOrDefault;

  __declspec(property(get = get_GUID)) ::System::Guid GUID;

  __declspec(property(get = get_GenericParameterAttributes)) ::System::Reflection::GenericParameterAttributes GenericParameterAttributes;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_GenericTypeArguments)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericTypeArguments;

  __declspec(property(get = get_HasElementType)) bool HasElementType;

  __declspec(property(get = get_InternalNameIfAvailable)) ::StringW InternalNameIfAvailable;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsByRef)) bool IsByRef;

  __declspec(property(get = get_IsCOMObject)) bool IsCOMObject;

  __declspec(property(get = get_IsClass)) bool IsClass;

  __declspec(property(get = get_IsCollectible)) bool IsCollectible;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsContextful)) bool IsContextful;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsExplicitLayout)) bool IsExplicitLayout;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsInterface)) bool IsInterface;

  __declspec(property(get = get_IsMarshalByRef)) bool IsMarshalByRef;

  __declspec(property(get = get_IsNested)) bool IsNested;

  __declspec(property(get = get_IsNestedAssembly)) bool IsNestedAssembly;

  __declspec(property(get = get_IsNestedPublic)) bool IsNestedPublic;

  __declspec(property(get = get_IsNotPublic)) bool IsNotPublic;

  __declspec(property(get = get_IsPointer)) bool IsPointer;

  __declspec(property(get = get_IsPrimitive)) bool IsPrimitive;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsSealed)) bool IsSealed;

  __declspec(property(get = get_IsSerializable)) bool IsSerializable;

  __declspec(property(get = get_IsSignatureType)) bool IsSignatureType;

  __declspec(property(get = get_IsSzArray)) bool IsSzArray;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_IsVisible)) bool IsVisible;

  __declspec(property(get = get_MemberType)) ::System::Reflection::MemberTypes MemberType;

  /// @brief Field Missing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Missing, put = setStaticF_Missing)) ::System::Object* Missing;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_NameOrDefault)) ::StringW NameOrDefault;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  __declspec(property(get = get_TypeHandle)) ::System::RuntimeTypeHandle TypeHandle;

  __declspec(property(get = get_UnderlyingSystemType)) ::System::Type* UnderlyingSystemType;

  /// @brief Field _impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__impl, put = __cordl_internal_set__impl)) ::System::RuntimeTypeHandle _impl;

  /// @brief Field s_defaultBinder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultBinder, put = setStaticF_s_defaultBinder)) ::System::Reflection::Binder* s_defaultBinder;

  /// @brief Method BinarySearch, addr 0x3e02250, size 0x13c, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value);

  /// @brief Method Equals, addr 0x3e0510c, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3e051f0, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Type* o);

  /// @brief Method FilterAttributeImpl, addr 0x3e0352c, size 0x35c, virtual false, abstract: false, final false
  static inline bool FilterAttributeImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameIgnoreCaseImpl, addr 0x3e03a04, size 0x190, virtual false, abstract: false, final false
  static inline bool FilterNameIgnoreCaseImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameImpl, addr 0x3e03888, size 0x17c, virtual false, abstract: false, final false
  static inline bool FilterNameImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FormatTypeName, addr 0x3e0536c, size 0x14, virtual false, abstract: false, final false
  inline ::StringW FormatTypeName();

  /// @brief Method FormatTypeName, addr 0x3e05380, size 0x38, virtual true, abstract: false, final false
  inline ::StringW FormatTypeName(bool serialization);

  /// @brief Method GetArrayRank, addr 0x3e03d3c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetArrayRank();

  /// @brief Method GetAttributeFlagsImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetConstructor, addr 0x3e043c4, size 0x12c, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructor, addr 0x3e043b4, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructor, addr 0x3e0439c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetConstructorImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructors, addr 0x3e044f0, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors();

  /// @brief Method GetConstructors, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetElementType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEnumData, addr 0x3e02620, size 0x368, virtual false, abstract: false, final false
  inline void GetEnumData(::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> enumNames, ::ByRef<::System::Array*> enumValues);

  /// @brief Method GetEnumName, addr 0x3e0238c, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames, addr 0x3e0257c, size 0xa4, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnumNames();

  /// @brief Method GetEnumRawConstantValues, addr 0x3e0222c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Array* GetEnumRawConstantValues();

  /// @brief Method GetEnumUnderlyingType, addr 0x3e04da8, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues, addr 0x3e04e90, size 0x84, virtual true, abstract: false, final false
  inline ::System::Array* GetEnumValues();

  /// @brief Method GetEvent, addr 0x3e04504, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name);

  /// @brief Method GetEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField, addr 0x3e04518, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetField, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields, addr 0x3e0452c, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields();

  /// @brief Method GetFields, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetGenericArguments, addr 0x3e03eb0, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericParameterConstraints, addr 0x3e03f80, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericParameterConstraints();

  /// @brief Method GetGenericTypeDefinition, addr 0x3e03d88, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetHashCode, addr 0x3e051a8, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInterfaces, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMember, addr 0x3e04540, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name);

  /// @brief Method GetMember, addr 0x3e04554, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMember, addr 0x3e0456c, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                            ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMembers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMembers(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod, addr 0x3e045b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name);

  /// @brief Method GetMethod, addr 0x3e045c0, size 0x74, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod, addr 0x3e04674, size 0x158, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                     ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethod, addr 0x3e04664, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                     ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethod, addr 0x3e04634, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetMethod, addr 0x3e0464c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethodImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethods, addr 0x3e047cc, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods();

  /// @brief Method GetMethods, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty, addr 0x3e047e0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name);

  /// @brief Method GetProperty, addr 0x3e047e8, size 0x74, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty, addr 0x3e04984, size 0x88, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                         ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetProperty, addr 0x3e0485c, size 0xf8, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType);

  /// @brief Method GetProperty, addr 0x3e04954, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetProperty, addr 0x3e0496c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetPropertyImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetRootElementType, addr 0x3e02e34, size 0x50, virtual false, abstract: false, final false
  inline ::System::Type* GetRootElementType();

  /// @brief Method GetType, addr 0x3e03ba4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetType();

  /// @brief Method GetType, addr 0x3e054c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName);

  /// @brief Method GetType, addr 0x3e05540, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError);

  /// @brief Method GetType, addr 0x3e05444, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError);

  /// @brief Method GetType, addr 0x3e053b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError, bool ignoreCase);

  /// @brief Method GetTypeCode, addr 0x3e04abc, size 0x78, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Type* type);

  /// @brief Method GetTypeCodeImpl, addr 0x3e04b34, size 0xe8, virtual true, abstract: false, final false
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method GetTypeFromCLSID, addr 0x3e04c1c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid);

  /// @brief Method GetTypeFromCLSID, addr 0x3e04c88, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid, ::StringW server, bool throwOnError);

  /// @brief Method GetTypeFromHandle, addr 0x3df8c80, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromHandle(::System::RuntimeTypeHandle handle);

  /// @brief Method GetTypeHandle, addr 0x3e04a44, size 0x78, virtual false, abstract: false, final false
  static inline ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* o);

  /// @brief Method HasElementTypeImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasElementTypeImpl();

  /// @brief Method ImplementInterface, addr 0x3e033e8, size 0x144, virtual false, abstract: false, final false
  inline bool ImplementInterface(::System::Type* ifaceType);

  /// @brief Method InternalGetNameIfAvailable, addr 0x3e05684, size 0xc, virtual true, abstract: false, final false
  inline ::StringW InternalGetNameIfAvailable(::ByRef<::System::Type*> rootCauseForFailure);

  /// @brief Method InvokeMember, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParameters);

  /// @brief Method IsArrayImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsArrayImpl();

  /// @brief Method IsAssignableFrom, addr 0x3e03170, size 0x1b4, virtual true, abstract: false, final false
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method IsByRefImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsContextfulImpl, addr 0x3e04134, size 0x90, virtual true, abstract: false, final false
  inline bool IsContextfulImpl();

  /// @brief Method IsEnumDefined, addr 0x3e01c28, size 0x378, virtual true, abstract: false, final false
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method IsEquivalentTo, addr 0x3e04d44, size 0x64, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method IsInstanceOfType, addr 0x3e04d08, size 0x3c, virtual true, abstract: false, final false
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsIntegerType, addr 0x3e01fac, size 0x280, virtual false, abstract: false, final false
  static inline bool IsIntegerType(::System::Type* t);

  /// @brief Method IsMarshalByRefImpl, addr 0x3e04268, size 0x90, virtual true, abstract: false, final false
  inline bool IsMarshalByRefImpl();

  /// @brief Method IsPointerImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method IsRuntimeImplemented, addr 0x3e02c8c, size 0x8c, virtual false, abstract: false, final false
  inline bool IsRuntimeImplemented();

  /// @brief Method IsSubclassOf, addr 0x3e030b4, size 0xbc, virtual true, abstract: false, final false
  inline bool IsSubclassOf(::System::Type* c);

  /// @brief Method IsValueTypeImpl, addr 0x3e04308, size 0x8c, virtual true, abstract: false, final false
  inline bool IsValueTypeImpl();

  /// @brief Method MakeArrayType, addr 0x3e04f14, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType, addr 0x3e04f4c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType, addr 0x3e04f84, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakeGenericSignatureType, addr 0x3e05040, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Type* MakeGenericSignatureType(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method MakeGenericType, addr 0x3e04fbc, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Type* MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method MakePointerType, addr 0x3e05008, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakePointerType();

  static inline ::System::Type* New_ctor();

  /// @brief Method ToString, addr 0x3e050ac, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::RuntimeTypeHandle const& __cordl_internal_get__impl() const;

  constexpr ::System::RuntimeTypeHandle& __cordl_internal_get__impl();

  constexpr void __cordl_internal_set__impl(::System::RuntimeTypeHandle value);

  /// @brief Method .ctor, addr 0x3e03b94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline char16_t getStaticF_Delimiter();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_EmptyTypes();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterAttribute();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterName();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterNameIgnoreCase();

  static inline ::System::Object* getStaticF_Missing();

  static inline ::System::Reflection::Binder* getStaticF_s_defaultBinder();

  /// @brief Method get_Assembly, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_Attributes, addr 0x3e03ff8, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::TypeAttributes get_Attributes();

  /// @brief Method get_BaseType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x3e02d24, size 0x100, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringMethod, addr 0x3e03bb4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method get_DeclaringType, addr 0x3e03bac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_DefaultBinder, addr 0x3e05290, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Reflection::Binder* get_DefaultBinder();

  /// @brief Method get_FullName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_FullNameOrDefault, addr 0x3e05568, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW get_FullNameOrDefault();

  /// @brief Method get_GUID, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_GenericParameterAttributes, addr 0x3e03f48, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method get_GenericParameterPosition, addr 0x3e03efc, size 0x4c, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_GenericTypeArguments, addr 0x3e03dd4, size 0xdc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericTypeArguments();

  /// @brief Method get_HasElementType, addr 0x3e02e24, size 0x10, virtual true, abstract: false, final true
  inline bool get_HasElementType();

  /// @brief Method get_InternalNameIfAvailable, addr 0x3e05660, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_InternalNameIfAvailable();

  /// @brief Method get_IsAbstract, addr 0x3e04008, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsAbstract();

  /// @brief Method get_IsArray, addr 0x3e03bc4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsArray();

  /// @brief Method get_IsByRef, addr 0x3e03bd4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsByRef();

  /// @brief Method get_IsCOMObject, addr 0x3e04114, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCOMObject();

  /// @brief Method get_IsClass, addr 0x3e04048, size 0x48, virtual true, abstract: false, final true
  inline bool get_IsClass();

  /// @brief Method get_IsCollectible, addr 0x3e041c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsCollectible();

  /// @brief Method get_IsConstructedGenericType, addr 0x3e03bf4, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsContextful, addr 0x3e04124, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsContextful();

  /// @brief Method get_IsEnum, addr 0x3e041cc, size 0x8c, virtual true, abstract: false, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsExplicitLayout, addr 0x3e040ec, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsExplicitLayout();

  /// @brief Method get_IsGenericMethodParameter, addr 0x3e03c74, size 0x4c, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_IsGenericParameter, addr 0x3e03c6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericType, addr 0x3e03cc0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x3e03cc8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsInterface, addr 0x3e03324, size 0xc4, virtual true, abstract: false, final true
  inline bool get_IsInterface();

  /// @brief Method get_IsMarshalByRef, addr 0x3e04258, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsMarshalByRef();

  /// @brief Method get_IsNested, addr 0x3e0301c, size 0x70, virtual false, abstract: false, final false
  inline bool get_IsNested();

  /// @brief Method get_IsNestedAssembly, addr 0x3e040a0, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsNestedAssembly();

  /// @brief Method get_IsNestedPublic, addr 0x3e02ff4, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsNestedPublic();

  /// @brief Method get_IsNotPublic, addr 0x3e040c8, size 0x24, virtual true, abstract: false, final true
  inline bool get_IsNotPublic();

  /// @brief Method get_IsPointer, addr 0x3e03be4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsPointer();

  /// @brief Method get_IsPrimitive, addr 0x3e042f8, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsPrimitive();

  /// @brief Method get_IsPublic, addr 0x3e0308c, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPublic();

  /// @brief Method get_IsSZArray, addr 0x3e03cd0, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsSealed, addr 0x3e04028, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsSealed();

  /// @brief Method get_IsSerializable, addr 0x3e02b50, size 0x13c, virtual true, abstract: false, final false
  inline bool get_IsSerializable();

  /// @brief Method get_IsSignatureType, addr 0x3e04394, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSignatureType();

  /// @brief Method get_IsSzArray, addr 0x3e05364, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSzArray();

  /// @brief Method get_IsValueType, addr 0x3e04090, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsValueType();

  /// @brief Method get_IsVariableBoundArray, addr 0x3e03cf4, size 0x48, virtual true, abstract: false, final false
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_IsVisible, addr 0x3e02e84, size 0x170, virtual false, abstract: false, final false
  inline bool get_IsVisible();

  /// @brief Method get_MemberType, addr 0x3e03b9c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_Module, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_NameOrDefault, addr 0x3e05690, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_NameOrDefault();

  /// @brief Method get_Namespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ReflectedType, addr 0x3e03bbc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_TypeHandle, addr 0x3e04a0c, size 0x38, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method get_UnderlyingSystemType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Method internal_from_handle, addr 0x3e05360, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* internal_from_handle(::System::IntPtr handle);

  /// @brief Method op_Equality, addr 0x3e01fa0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Type* left, ::System::Type* right);

  /// @brief Method op_Inequality, addr 0x3e02d18, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Type* left, ::System::Type* right);

  static inline void setStaticF_Delimiter(char16_t value);

  static inline void setStaticF_EmptyTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_FilterAttribute(::System::Reflection::MemberFilter* value);

  static inline void setStaticF_FilterName(::System::Reflection::MemberFilter* value);

  static inline void setStaticF_FilterNameIgnoreCase(::System::Reflection::MemberFilter* value);

  static inline void setStaticF_Missing(::System::Object* value);

  static inline void setStaticF_s_defaultBinder(::System::Reflection::Binder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type(Type&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type(Type const&) = delete;

  /// @brief Field DefaultLookup value: I32(28)
  static ::System::Reflection::BindingFlags const DefaultLookup;

  /// @brief Field DefaultTypeNameWhenMissingMetadata offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultTypeNameWhenMissingMetadata{ u"UnknownType" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2493 };

  /// @brief Field _impl, offset: 0x10, size: 0x8, def value: None
  ::System::RuntimeTypeHandle ____impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Type, ____impl) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Type, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Type);
DEFINE_IL2CPP_ARG_TYPE(::System::Type*, "System", "Type");
