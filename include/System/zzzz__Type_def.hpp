#pragma once
// IWYU pragma private; include "System/Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
struct InterfaceMapping;
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
MARK_REF_T(::System::Type*);
DEFINE_IL2CPP_CLASS(::System::Type*, "System", "Type");
// Dependencies System.Reflection.MemberInfo, System.RuntimeTypeHandle
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
  __declspec(property(get = getStaticF_EmptyTypes, put = setStaticF_EmptyTypes)) ::ArrayW<::System::Type*> EmptyTypes;

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

  __declspec(property(get = get_GenericTypeArguments)) ::ArrayW<::System::Type*> GenericTypeArguments;

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

  __declspec(property(get = get_IsNestedPrivate)) bool IsNestedPrivate;

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

  /// @brief Method BinarySearch, addr 0x607a25c, size 0x134, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value);

  /// @brief Method Equals, addr 0x607ced0, size 0x54, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x607cf74, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Type* o);

  /// @brief Method FilterAttributeImpl, addr 0x607b44c, size 0x33c, virtual false, abstract: false, final false
  static inline bool FilterAttributeImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameIgnoreCaseImpl, addr 0x607b900, size 0x15c, virtual false, abstract: false, final false
  static inline bool FilterNameIgnoreCaseImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameImpl, addr 0x607b788, size 0x178, virtual false, abstract: false, final false
  static inline bool FilterNameImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FormatTypeName, addr 0x607d0cc, size 0x14, virtual false, abstract: false, final false
  inline ::StringW FormatTypeName();

  /// @brief Method FormatTypeName, addr 0x607d0e0, size 0x38, virtual true, abstract: false, final false
  inline ::StringW FormatTypeName(bool serialization);

  /// @brief Method GetArrayRank, addr 0x607bc0c, size 0x4c, virtual true, abstract: false, final false
  inline int32_t GetArrayRank();

  /// @brief Method GetAttributeFlagsImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// [ComVisible(true)]
  /// @brief Method GetConstructor, addr 0x607c234, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// [ComVisible(true)]
  /// @brief Method GetConstructor, addr 0x607c224, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Type*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// [ComVisible(true)]
  /// @brief Method GetConstructor, addr 0x607c20c, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::System::Type*> types);

  /// @brief Method GetConstructorImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// [ComVisible(true)]
  /// @brief Method GetConstructors, addr 0x607c340, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors();

  /// [ComVisible(true)]
  /// @brief Method GetConstructors, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetElementType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEnumData, addr 0x607a5f4, size 0x390, virtual false, abstract: false, final false
  inline void GetEnumData(::by_ref<::ArrayW<::StringW>> enumNames, ::by_ref<::System::Array*> enumValues);

  /// @brief Method GetEnumName, addr 0x607a390, size 0x1c4, virtual true, abstract: false, final false
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames, addr 0x607a554, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> GetEnumNames();

  /// @brief Method GetEnumRawConstantValues, addr 0x607a23c, size 0x20, virtual false, abstract: false, final false
  inline ::System::Array* GetEnumRawConstantValues();

  /// @brief Method GetEnumUnderlyingType, addr 0x607cb64, size 0xe8, virtual true, abstract: false, final false
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues, addr 0x607cc4c, size 0x84, virtual true, abstract: false, final false
  inline ::System::Array* GetEnumValues();

  /// @brief Method GetEvent, addr 0x607c354, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name);

  /// @brief Method GetEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::EventInfo*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField, addr 0x607c368, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields, addr 0x607c37c, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields();

  /// @brief Method GetFields, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetGenericArguments, addr 0x607bd8c, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetGenericArguments();

  /// @brief Method GetGenericParameterConstraints, addr 0x607be5c, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetGenericParameterConstraints();

  /// @brief Method GetGenericTypeDefinition, addr 0x607bc58, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetHashCode, addr 0x607cf24, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInterface, addr 0x607ca8c, size 0x14, virtual true, abstract: false, final true
  inline ::System::Type* GetInterface(::StringW name);

  /// @brief Method GetInterface, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetInterface(::StringW name, bool ignoreCase);

  /// [ComVisible(true)]
  /// @brief Method GetInterfaceMap, addr 0x607caa0, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type* interfaceType);

  /// @brief Method GetInterfaces, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Type*> GetInterfaces();

  /// @brief Method GetMember, addr 0x607c390, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMember(::StringW name);

  /// @brief Method GetMember, addr 0x607c3a4, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMember(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMember, addr 0x607c3bc, size 0x4c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMember(::StringW name, ::System::Reflection::MemberTypes type, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*> GetMembers(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod, addr 0x607c408, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name);

  /// @brief Method GetMethod, addr 0x607c410, size 0x70, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod, addr 0x607c4c0, size 0x138, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                     ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethod, addr 0x607c4b0, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Type*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethod, addr 0x607c480, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*> types);

  /// @brief Method GetMethod, addr 0x607c498, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethodImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetMethods, addr 0x607c5f8, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods();

  /// @brief Method GetMethods, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperties, addr 0x607c808, size 0x14, virtual true, abstract: false, final true
  inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties();

  /// @brief Method GetProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty, addr 0x607c60c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name);

  /// @brief Method GetProperty, addr 0x607c614, size 0x70, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty, addr 0x607c780, size 0x88, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                         ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetProperty, addr 0x607c684, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType);

  /// @brief Method GetProperty, addr 0x607c750, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*> types);

  /// @brief Method GetProperty, addr 0x607c768, size 0x18, virtual true, abstract: false, final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetPropertyImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);

  /// @brief Method GetRootElementType, addr 0x607ae40, size 0x50, virtual false, abstract: false, final false
  inline ::System::Type* GetRootElementType();

  /// @brief Method GetType, addr 0x607ba68, size 0xc, virtual true, abstract: false, final true
  inline ::System::Type* GetType();

  /// @brief Method GetType, addr 0x607d22c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName);

  /// @brief Method GetType, addr 0x607d2ac, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError);

  /// @brief Method GetType, addr 0x607d1a8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError);

  /// @brief Method GetType, addr 0x607d118, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError, bool ignoreCase);

  /// @brief Method GetTypeCode, addr 0x607c8d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Type* type);

  /// @brief Method GetTypeCodeImpl, addr 0x607c91c, size 0xc0, virtual true, abstract: false, final false
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method GetTypeFromCLSID, addr 0x607c9dc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid);

  /// @brief Method GetTypeFromCLSID, addr 0x607ca18, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid, ::StringW server, bool throwOnError);

  /// @brief Method GetTypeFromHandle, addr 0x6070d84, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromHandle(::System::RuntimeTypeHandle handle);

  /// @brief Method GetTypeHandle, addr 0x607c854, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* o);

  /// @brief Method HasElementTypeImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasElementTypeImpl();

  /// @brief Method ImplementInterface, addr 0x607b328, size 0x124, virtual false, abstract: false, final false
  inline bool ImplementInterface(::System::Type* ifaceType);

  /// @brief Method InternalGetNameIfAvailable, addr 0x607d3fc, size 0xc, virtual true, abstract: false, final false
  inline ::StringW InternalGetNameIfAvailable(::by_ref<::System::Type*> rootCauseForFailure);

  /// @brief Method InvokeMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target, ::ArrayW<::System::Object*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters);

  /// @brief Method IsArrayImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsArrayImpl();

  /// @brief Method IsAssignableFrom, addr 0x607b10c, size 0x178, virtual true, abstract: false, final false
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method IsByRefImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsContextfulImpl, addr 0x607c03c, size 0x7c, virtual true, abstract: false, final false
  inline bool IsContextfulImpl();

  /// @brief Method IsEnumDefined, addr 0x6079d08, size 0x34c, virtual true, abstract: false, final false
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method IsEquivalentTo, addr 0x607cb28, size 0x3c, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method IsInstanceOfType, addr 0x607caec, size 0x3c, virtual true, abstract: false, final false
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsIntegerType, addr 0x607a060, size 0x1dc, virtual false, abstract: false, final false
  static inline bool IsIntegerType(::System::Type* t);

  /// @brief Method IsMarshalByRefImpl, addr 0x607c124, size 0x7c, virtual true, abstract: false, final false
  inline bool IsMarshalByRefImpl();

  /// @brief Method IsPointerImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method IsRuntimeImplemented, addr 0x607aca4, size 0x90, virtual false, abstract: false, final false
  inline bool IsRuntimeImplemented();

  /// [ComVisible(true)]
  /// @brief Method IsSubclassOf, addr 0x607b070, size 0x9c, virtual true, abstract: false, final false
  inline bool IsSubclassOf(::System::Type* c);

  /// @brief Method IsValueTypeImpl, addr 0x607c1b0, size 0x54, virtual true, abstract: false, final false
  inline bool IsValueTypeImpl();

  /// @brief Method MakeArrayType, addr 0x607ccd0, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType, addr 0x607cd08, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType, addr 0x607cd40, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakeGenericSignatureType, addr 0x607cdfc, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Type* MakeGenericSignatureType(::System::Type* genericTypeDefinition, /* [ParamArray] */ ::ArrayW<::System::Type*> typeArguments);

  /// @brief Method MakeGenericType, addr 0x607cd78, size 0x4c, virtual true, abstract: false, final false
  inline ::System::Type* MakeGenericType(/* [ParamArray] */ ::ArrayW<::System::Type*> typeArguments);

  /// @brief Method MakePointerType, addr 0x607cdc4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* MakePointerType();

  static inline ::System::Type* New_ctor();

  /// @brief Method ToString, addr 0x607ce6c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::RuntimeTypeHandle const& __cordl_internal_get__impl() const;

  constexpr ::System::RuntimeTypeHandle& __cordl_internal_get__impl();

  constexpr void __cordl_internal_set__impl(::System::RuntimeTypeHandle value);

  /// @brief Method .ctor, addr 0x607ba5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline char16_t getStaticF_Delimiter();

  static inline ::ArrayW<::System::Type*> getStaticF_EmptyTypes();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterAttribute();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterName();

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterNameIgnoreCase();

  static inline ::System::Object* getStaticF_Missing();

  static inline ::System::Reflection::Binder* getStaticF_s_defaultBinder();

  /// @brief Method get_Assembly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_Attributes, addr 0x607bed8, size 0x10, virtual true, abstract: false, final true
  inline ::System::Reflection::TypeAttributes get_Attributes();

  /// @brief Method get_BaseType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x607ad40, size 0xf0, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringMethod, addr 0x607ba7c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method get_DeclaringType, addr 0x607ba74, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_DefaultBinder, addr 0x607cfec, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Reflection::Binder* get_DefaultBinder();

  /// @brief Method get_FullName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_FullName();

  /// @brief Method get_FullNameOrDefault, addr 0x607d2d0, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW get_FullNameOrDefault();

  /// @brief Method get_GUID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_GenericParameterAttributes, addr 0x607be24, size 0x38, virtual true, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method get_GenericParameterPosition, addr 0x607bdd8, size 0x4c, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_GenericTypeArguments, addr 0x607bca4, size 0xe8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*> get_GenericTypeArguments();

  /// @brief Method get_HasElementType, addr 0x607ae30, size 0x10, virtual true, abstract: false, final true
  inline bool get_HasElementType();

  /// @brief Method get_InternalNameIfAvailable, addr 0x607d3dc, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_InternalNameIfAvailable();

  /// @brief Method get_IsAbstract, addr 0x607bee8, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsAbstract();

  /// @brief Method get_IsArray, addr 0x607ba8c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsArray();

  /// @brief Method get_IsByRef, addr 0x607ba9c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsByRef();

  /// @brief Method get_IsCOMObject, addr 0x607c01c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsCOMObject();

  /// @brief Method get_IsClass, addr 0x607bf28, size 0x48, virtual true, abstract: false, final true
  inline bool get_IsClass();

  /// @brief Method get_IsCollectible, addr 0x607c0b8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsCollectible();

  /// @brief Method get_IsConstructedGenericType, addr 0x607babc, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsContextful, addr 0x607c02c, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsContextful();

  /// @brief Method get_IsEnum, addr 0x607c0c0, size 0x54, virtual true, abstract: false, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsExplicitLayout, addr 0x607bff4, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsExplicitLayout();

  /// @brief Method get_IsGenericMethodParameter, addr 0x607bb40, size 0x50, virtual true, abstract: false, final false
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_IsGenericParameter, addr 0x607bb38, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericType, addr 0x607bb90, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x607bb98, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsInterface, addr 0x607b284, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsInterface();

  /// @brief Method get_IsMarshalByRef, addr 0x607c114, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsMarshalByRef();

  /// @brief Method get_IsNested, addr 0x607b00c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_IsNested();

  /// @brief Method get_IsNestedAssembly, addr 0x607bf80, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsNestedAssembly();

  /// @brief Method get_IsNestedPrivate, addr 0x607bfa8, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsNestedPrivate();

  /// @brief Method get_IsNestedPublic, addr 0x607afe4, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsNestedPublic();

  /// @brief Method get_IsNotPublic, addr 0x607bfd0, size 0x24, virtual true, abstract: false, final true
  inline bool get_IsNotPublic();

  /// @brief Method get_IsPointer, addr 0x607baac, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsPointer();

  /// @brief Method get_IsPrimitive, addr 0x607c1a0, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsPrimitive();

  /// @brief Method get_IsPublic, addr 0x607b048, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPublic();

  /// @brief Method get_IsSZArray, addr 0x607bba0, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsSealed, addr 0x607bf08, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsSealed();

  /// @brief Method get_IsSerializable, addr 0x607ab78, size 0x12c, virtual true, abstract: false, final false
  inline bool get_IsSerializable();

  /// @brief Method get_IsSignatureType, addr 0x607c204, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSignatureType();

  /// @brief Method get_IsSzArray, addr 0x607d0c4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSzArray();

  /// @brief Method get_IsValueType, addr 0x607bf70, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsValueType();

  /// @brief Method get_IsVariableBoundArray, addr 0x607bbc4, size 0x48, virtual true, abstract: false, final false
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_IsVisible, addr 0x607ae90, size 0x154, virtual false, abstract: false, final false
  inline bool get_IsVisible();

  /// @brief Method get_MemberType, addr 0x607ba60, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_Module, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_NameOrDefault, addr 0x607d408, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_NameOrDefault();

  /// @brief Method get_Namespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ReflectedType, addr 0x607ba84, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_TypeHandle, addr 0x607c81c, size 0x38, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method get_UnderlyingSystemType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Method internal_from_handle, addr 0x607d0ac, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Type* internal_from_handle(::System::IntPtr handle);

  /// @brief Method op_Equality, addr 0x607a054, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Type* left, ::System::Type* right);

  /// @brief Method op_Inequality, addr 0x607ad34, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Type* left, ::System::Type* right);

  static inline void setStaticF_Delimiter(char16_t value);

  static inline void setStaticF_EmptyTypes(::ArrayW<::System::Type*> value);

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
  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type(Type&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type(Type const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2499 };

  /// @brief Field _impl, offset: 0x10, size: 0x8, def value: None
  ::System::RuntimeTypeHandle ____impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Type, ____impl) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Type) == 0x18, "Size mismatch!");

} // namespace System
