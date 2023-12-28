#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type)
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System {
struct TypeCode;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Array;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System::Reflection {
class MemberFilter;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System {
class Type;
}
// Write type traits
MARK_REF_PTR_T(::System::Type);
// Type: System::Type
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3474)), TypeDefinitionIndex(TypeDefinitionIndex(3459)), TypeDefinitionIndex(TypeDefinitionIndex(2618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2494))
// CS Name: ::System::Type*
class CORDL_TYPE Type : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  /// @brief Field _impl, offset 0x10, size 0x8
  __declspec(property(get = __get__impl, put = __set__impl))::System::RuntimeTypeHandle _impl;

  /// @brief Field s_defaultBinder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultBinder, put = setStaticF_s_defaultBinder))::System::Reflection::Binder* s_defaultBinder;

  /// @brief Field Delimiter, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_Delimiter, put = setStaticF_Delimiter)) char16_t Delimiter;

  /// @brief Field EmptyTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyTypes, put = setStaticF_EmptyTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> EmptyTypes;

  /// @brief Field Missing, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Missing, put = setStaticF_Missing))::System::Object* Missing;

  /// @brief Field FilterAttribute, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterAttribute, put = setStaticF_FilterAttribute))::System::Reflection::MemberFilter* FilterAttribute;

  /// @brief Field FilterName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterName, put = setStaticF_FilterName))::System::Reflection::MemberFilter* FilterName;

  /// @brief Field FilterNameIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterNameIgnoreCase, put = setStaticF_FilterNameIgnoreCase))::System::Reflection::MemberFilter* FilterNameIgnoreCase;

  __declspec(property(get = get_IsSerializable)) bool IsSerializable;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_IsVisible)) bool IsVisible;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_AssemblyQualifiedName))::StringW AssemblyQualifiedName;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_IsNested)) bool IsNested;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_DeclaringMethod))::System::Reflection::MethodBase* DeclaringMethod;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_UnderlyingSystemType))::System::Type* UnderlyingSystemType;

  __declspec(property(get = get_IsArray)) bool IsArray;

  __declspec(property(get = get_IsByRef)) bool IsByRef;

  __declspec(property(get = get_IsPointer)) bool IsPointer;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericMethodParameter)) bool IsGenericMethodParameter;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsVariableBoundArray)) bool IsVariableBoundArray;

  __declspec(property(get = get_HasElementType)) bool HasElementType;

  __declspec(property(get = get_GenericTypeArguments))::ArrayW<::System::Type*, ::Array<::System::Type*>*> GenericTypeArguments;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_GenericParameterAttributes))::System::Reflection::GenericParameterAttributes GenericParameterAttributes;

  __declspec(property(get = get_Attributes))::System::Reflection::TypeAttributes Attributes;

  __declspec(property(get = get_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsSealed)) bool IsSealed;

  __declspec(property(get = get_IsClass)) bool IsClass;

  __declspec(property(get = get_IsNestedAssembly)) bool IsNestedAssembly;

  __declspec(property(get = get_IsNestedPublic)) bool IsNestedPublic;

  __declspec(property(get = get_IsNotPublic)) bool IsNotPublic;

  __declspec(property(get = get_IsPublic)) bool IsPublic;

  __declspec(property(get = get_IsExplicitLayout)) bool IsExplicitLayout;

  __declspec(property(get = get_IsCOMObject)) bool IsCOMObject;

  __declspec(property(get = get_IsContextful)) bool IsContextful;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsMarshalByRef)) bool IsMarshalByRef;

  __declspec(property(get = get_IsPrimitive)) bool IsPrimitive;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get = get_IsSignatureType)) bool IsSignatureType;

  __declspec(property(get = get_TypeHandle))::System::RuntimeTypeHandle TypeHandle;

  __declspec(property(get = get_GUID))::System::Guid GUID;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_IsSzArray)) bool IsSzArray;

  __declspec(property(get = get_IsInterface)) bool IsInterface;

  __declspec(property(get = get_FullNameOrDefault))::StringW FullNameOrDefault;

  __declspec(property(get = get_InternalNameIfAvailable))::StringW InternalNameIfAvailable;

  __declspec(property(get = get_NameOrDefault))::StringW NameOrDefault;

  constexpr ::System::RuntimeTypeHandle& __get__impl();

  constexpr ::System::RuntimeTypeHandle const& __get__impl() const;

  constexpr void __set__impl(::System::RuntimeTypeHandle value);

  static inline void setStaticF_s_defaultBinder(::System::Reflection::Binder* value);

  static inline ::System::Reflection::Binder* getStaticF_s_defaultBinder();

  static inline void setStaticF_Delimiter(char16_t value);

  static inline char16_t getStaticF_Delimiter();

  static inline void setStaticF_EmptyTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_EmptyTypes();

  static inline void setStaticF_Missing(::System::Object* value);

  static inline ::System::Object* getStaticF_Missing();

  static inline void setStaticF_FilterAttribute(::System::Reflection::MemberFilter* value);

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterAttribute();

  static inline void setStaticF_FilterName(::System::Reflection::MemberFilter* value);

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterName();

  static inline void setStaticF_FilterNameIgnoreCase(::System::Reflection::MemberFilter* value);

  static inline ::System::Reflection::MemberFilter* getStaticF_FilterNameIgnoreCase();

  /// @brief Method IsEnumDefined addr 0x25c73c8 size 0x38c virtual true final false
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method GetEnumName addr 0x25c7b40 size 0x1fc virtual true final false
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames addr 0x25c7d3c size 0xa8 virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnumNames();

  /// @brief Method GetEnumRawConstantValues addr 0x25c79e0 size 0x24 virtual false final false
  inline ::System::Array* GetEnumRawConstantValues();

  /// @brief Method GetEnumData addr 0x25c7de4 size 0x3bc virtual false final false
  inline void GetEnumData(ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> enumNames, ByRef<::System::Array*> enumValues);

  /// @brief Method BinarySearch addr 0x25c7a04 size 0x13c virtual false final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value);

  /// @brief Method IsIntegerType addr 0x25c7760 size 0x280 virtual false final false
  static inline bool IsIntegerType(::System::Type* t);

  /// @brief Method get_IsSerializable addr 0x25c8374 size 0x13c virtual true final false
  inline bool get_IsSerializable();

  /// @brief Method get_ContainsGenericParameters addr 0x25c8548 size 0xf8 virtual true final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method GetRootElementType addr 0x25c8650 size 0x50 virtual false final false
  inline ::System::Type* GetRootElementType();

  /// @brief Method get_IsVisible addr 0x25c86a0 size 0x160 virtual false final false
  inline bool get_IsVisible();

  /// @brief Method IsSubclassOf addr 0x25c88c0 size 0xb8 virtual true final false
  inline bool IsSubclassOf(::System::Type* c);

  /// @brief Method IsAssignableFrom addr 0x25c8978 size 0x1a4 virtual true final false
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method ImplementInterface addr 0x25c8be0 size 0x148 virtual false final false
  inline bool ImplementInterface(::System::Type* ifaceType);

  /// @brief Method FilterAttributeImpl addr 0x25c8d28 size 0x358 virtual false final false
  static inline bool FilterAttributeImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameImpl addr 0x25c9080 size 0x180 virtual false final false
  static inline bool FilterNameImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  /// @brief Method FilterNameIgnoreCaseImpl addr 0x25c9200 size 0x194 virtual false final false
  static inline bool FilterNameIgnoreCaseImpl(::System::Reflection::MemberInfo* m, ::System::Object* filterCriteria);

  static inline ::System::Type* New_ctor();

  /// @brief Method .ctor addr 0x25c9394 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_MemberType addr 0x25c939c size 0x8 virtual true final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method GetType addr 0x25c93a4 size 0x8 virtual true final true
  inline ::System::Type* GetType();

  /// @brief Method get_Namespace addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_Namespace();

  /// @brief Method get_AssemblyQualifiedName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_FullName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_FullName();

  /// @brief Method get_Assembly addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_Module addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_IsNested addr 0x25c8828 size 0x70 virtual false final false
  inline bool get_IsNested();

  /// @brief Method get_DeclaringType addr 0x25c93ac size 0x8 virtual true final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_DeclaringMethod addr 0x25c93b4 size 0x8 virtual true final false
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method get_ReflectedType addr 0x25c93bc size 0x8 virtual true final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_UnderlyingSystemType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Method get_IsArray addr 0x25c93c4 size 0x10 virtual true final true
  inline bool get_IsArray();

  /// @brief Method IsArrayImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsArrayImpl();

  /// @brief Method get_IsByRef addr 0x25c93d4 size 0x10 virtual true final true
  inline bool get_IsByRef();

  /// @brief Method IsByRefImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsByRefImpl();

  /// @brief Method get_IsPointer addr 0x25c93e4 size 0x10 virtual true final true
  inline bool get_IsPointer();

  /// @brief Method IsPointerImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsPointerImpl();

  /// @brief Method get_IsConstructedGenericType addr 0x25c93f4 size 0x24 virtual true final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsGenericParameter addr 0x25c9474 size 0x8 virtual true final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericMethodParameter addr 0x25c947c size 0x4c virtual true final false
  inline bool get_IsGenericMethodParameter();

  /// @brief Method get_IsGenericType addr 0x25c94c8 size 0x8 virtual true final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition addr 0x25c94d0 size 0x8 virtual true final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsSZArray addr 0x25c94d8 size 0x24 virtual true final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsVariableBoundArray addr 0x25c94fc size 0x48 virtual true final false
  inline bool get_IsVariableBoundArray();

  /// @brief Method get_HasElementType addr 0x25c8640 size 0x10 virtual true final true
  inline bool get_HasElementType();

  /// @brief Method HasElementTypeImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool HasElementTypeImpl();

  /// @brief Method GetElementType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetArrayRank addr 0x25c9544 size 0x50 virtual true final false
  inline int32_t GetArrayRank();

  /// @brief Method GetGenericTypeDefinition addr 0x25c9594 size 0x50 virtual true final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method get_GenericTypeArguments addr 0x25c95e4 size 0xcc virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> get_GenericTypeArguments();

  /// @brief Method GetGenericArguments addr 0x25c96b0 size 0x50 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method get_GenericParameterPosition addr 0x25c9700 size 0x50 virtual true final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_GenericParameterAttributes addr 0x25c9750 size 0x40 virtual true final false
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method GetGenericParameterConstraints addr 0x25c9790 size 0x80 virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericParameterConstraints();

  /// @brief Method get_Attributes addr 0x25c9810 size 0x10 virtual true final true
  inline ::System::Reflection::TypeAttributes get_Attributes();

  /// @brief Method GetAttributeFlagsImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method get_IsAbstract addr 0x25c9820 size 0x20 virtual true final true
  inline bool get_IsAbstract();

  /// @brief Method get_IsSealed addr 0x25c9840 size 0x20 virtual true final true
  inline bool get_IsSealed();

  /// @brief Method get_IsClass addr 0x25c9860 size 0x48 virtual true final true
  inline bool get_IsClass();

  /// @brief Method get_IsNestedAssembly addr 0x25c98b8 size 0x28 virtual true final true
  inline bool get_IsNestedAssembly();

  /// @brief Method get_IsNestedPublic addr 0x25c8800 size 0x28 virtual true final true
  inline bool get_IsNestedPublic();

  /// @brief Method get_IsNotPublic addr 0x25c98e0 size 0x24 virtual true final true
  inline bool get_IsNotPublic();

  /// @brief Method get_IsPublic addr 0x25c8898 size 0x28 virtual true final true
  inline bool get_IsPublic();

  /// @brief Method get_IsExplicitLayout addr 0x25c9904 size 0x28 virtual true final true
  inline bool get_IsExplicitLayout();

  /// @brief Method get_IsCOMObject addr 0x25c992c size 0x10 virtual true final true
  inline bool get_IsCOMObject();

  /// @brief Method IsCOMObjectImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsCOMObjectImpl();

  /// @brief Method get_IsContextful addr 0x25c993c size 0x10 virtual true final true
  inline bool get_IsContextful();

  /// @brief Method IsContextfulImpl addr 0x25c994c size 0x90 virtual true final false
  inline bool IsContextfulImpl();

  /// @brief Method get_IsEnum addr 0x25c99dc size 0x8c virtual true final false
  inline bool get_IsEnum();

  /// @brief Method get_IsMarshalByRef addr 0x25c9a68 size 0x10 virtual true final true
  inline bool get_IsMarshalByRef();

  /// @brief Method IsMarshalByRefImpl addr 0x25c9a78 size 0x90 virtual true final false
  inline bool IsMarshalByRefImpl();

  /// @brief Method get_IsPrimitive addr 0x25c9b08 size 0x10 virtual true final true
  inline bool get_IsPrimitive();

  /// @brief Method IsPrimitiveImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsPrimitiveImpl();

  /// @brief Method get_IsValueType addr 0x25c98a8 size 0x10 virtual true final true
  inline bool get_IsValueType();

  /// @brief Method IsValueTypeImpl addr 0x25c9b18 size 0x8c virtual true final false
  inline bool IsValueTypeImpl();

  /// @brief Method get_IsSignatureType addr 0x25c9ba4 size 0x8 virtual true final false
  inline bool get_IsSignatureType();

  /// @brief Method GetConstructor addr 0x25c9bac size 0x18 virtual true final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetConstructor addr 0x25c9bc4 size 0x10 virtual true final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructor addr 0x25c9bd4 size 0x130 virtual true final true
  inline ::System::Reflection::ConstructorInfo* GetConstructor(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructorImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructors addr 0x25c9d04 size 0x14 virtual true final true
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors();

  /// @brief Method GetConstructors addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvent addr 0x25c9d18 size 0x14 virtual true final true
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name);

  /// @brief Method GetEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetField addr 0x25c9d2c size 0x14 virtual true final true
  inline ::System::Reflection::FieldInfo* GetField(::StringW name);

  /// @brief Method GetField addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields addr 0x25c9d40 size 0x14 virtual true final true
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields();

  /// @brief Method GetFields addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMember addr 0x25c9d54 size 0x14 virtual true final true
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name);

  /// @brief Method GetMember addr 0x25c9d68 size 0x18 virtual true final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMember addr 0x25c9d80 size 0x50 virtual true final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                            ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod addr 0x25c9dd0 size 0x8 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name);

  /// @brief Method GetMethod addr 0x25c9dd8 size 0x78 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethod addr 0x25c9e50 size 0x18 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetMethod addr 0x25c9e68 size 0x18 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethod addr 0x25c9e80 size 0x10 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                     ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethod addr 0x25c9e90 size 0x160 virtual true final true
  inline ::System::Reflection::MethodInfo* GetMethod(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                     ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                     ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethodImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethods addr 0x25c9ff0 size 0x14 virtual true final true
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods();

  /// @brief Method GetMethods addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty addr 0x25ca004 size 0x8 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name);

  /// @brief Method GetProperty addr 0x25ca00c size 0x78 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetProperty addr 0x25ca084 size 0x100 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType);

  /// @brief Method GetProperty addr 0x25ca184 size 0x18 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetProperty addr 0x25ca19c size 0x18 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Type* returnType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetProperty addr 0x25ca1b4 size 0x90 virtual true final true
  inline ::System::Reflection::PropertyInfo* GetProperty(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                         ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetPropertyImpl addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetProperties addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method get_TypeHandle addr 0x25ca244 size 0x40 virtual true final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method GetTypeHandle addr 0x25ca284 size 0x7c virtual false final false
  static inline ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* o);

  /// @brief Method GetTypeCode addr 0x25ca300 size 0x78 virtual false final false
  static inline ::System::TypeCode GetTypeCode(::System::Type* type);

  /// @brief Method GetTypeCodeImpl addr 0x25ca378 size 0xe8 virtual true final false
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method get_GUID addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Guid get_GUID();

  /// @brief Method GetTypeFromCLSID addr 0x25ca460 size 0x6c virtual false final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid);

  /// @brief Method get_BaseType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* get_BaseType();

  /// @brief Method InvokeMember addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParameters);

  /// @brief Method GetInterfaces addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method IsInstanceOfType addr 0x25ca54c size 0x3c virtual true final false
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsEquivalentTo addr 0x25ca588 size 0x64 virtual true final false
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method GetEnumUnderlyingType addr 0x25ca5ec size 0xf0 virtual true final false
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues addr 0x25ca6dc size 0x88 virtual true final false
  inline ::System::Array* GetEnumValues();

  /// @brief Method MakeArrayType addr 0x25ca764 size 0x40 virtual true final false
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType addr 0x25ca7a4 size 0x40 virtual true final false
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType addr 0x25ca7e4 size 0x40 virtual true final false
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakeGenericType addr 0x25ca824 size 0x50 virtual true final false
  inline ::System::Type* MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method MakePointerType addr 0x25ca874 size 0x40 virtual true final false
  inline ::System::Type* MakePointerType();

  /// @brief Method MakeGenericSignatureType addr 0x25ca8b4 size 0x74 virtual false final false
  static inline ::System::Type* MakeGenericSignatureType(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> typeArguments);

  /// @brief Method ToString addr 0x25ca928 size 0x60 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x25ca988 size 0x9c virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode addr 0x25caa24 size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x25caa6c size 0xa0 virtual true final false
  inline bool Equals(::System::Type* o);

  /// @brief Method get_DefaultBinder addr 0x25cab0c size 0xd8 virtual false final false
  static inline ::System::Reflection::Binder* get_DefaultBinder();

  /// @brief Method GetTypeFromHandle addr 0x25bdd38 size 0x94 virtual false final false
  static inline ::System::Type* GetTypeFromHandle(::System::RuntimeTypeHandle handle);

  /// @brief Method internal_from_handle addr 0x25cabe4 size 0x4 virtual false final false
  static inline ::System::Type* internal_from_handle(void* handle);

  /// @brief Method get_IsSzArray addr 0x25cabe8 size 0x8 virtual true final false
  inline bool get_IsSzArray();

  /// @brief Method FormatTypeName addr 0x25cabf0 size 0x14 virtual false final false
  inline ::StringW FormatTypeName();

  /// @brief Method FormatTypeName addr 0x25cac04 size 0x40 virtual true final false
  inline ::StringW FormatTypeName(bool serialization);

  /// @brief Method get_IsInterface addr 0x25c8b1c size 0xc4 virtual true final true
  inline bool get_IsInterface();

  /// @brief Method GetType addr 0x25cac44 size 0x8c virtual false final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError, bool ignoreCase);

  /// @brief Method GetType addr 0x25cacd0 size 0x80 virtual false final false
  static inline ::System::Type* GetType(::StringW typeName, bool throwOnError);

  /// @brief Method GetType addr 0x25cad50 size 0x7c virtual false final false
  static inline ::System::Type* GetType(::StringW typeName);

  /// @brief Method GetType addr 0x25cadcc size 0x28 virtual false final false
  static inline ::System::Type* GetType(::StringW typeName, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver,
                                        ::System::Func_4<::System::Reflection::Assembly*, ::StringW, bool, ::System::Type*>* typeResolver, bool throwOnError);

  /// @brief Method op_Equality addr 0x25c7754 size 0xc virtual false final false
  static inline bool op_Equality(::System::Type* left, ::System::Type* right);

  /// @brief Method op_Inequality addr 0x25c853c size 0xc virtual false final false
  static inline bool op_Inequality(::System::Type* left, ::System::Type* right);

  /// @brief Method GetTypeFromCLSID addr 0x25ca4cc size 0x80 virtual false final false
  static inline ::System::Type* GetTypeFromCLSID(::System::Guid clsid, ::StringW server, bool throwOnError);

  /// @brief Method get_FullNameOrDefault addr 0x25cadf4 size 0xf8 virtual false final false
  inline ::StringW get_FullNameOrDefault();

  /// @brief Method IsRuntimeImplemented addr 0x25c84b0 size 0x8c virtual false final false
  inline bool IsRuntimeImplemented();

  /// @brief Method InternalGetNameIfAvailable addr 0x25caf10 size 0xc virtual true final false
  inline ::StringW InternalGetNameIfAvailable(ByRef<::System::Type*> rootCauseForFailure);

  /// @brief Method get_InternalNameIfAvailable addr 0x25caeec size 0x24 virtual false final false
  inline ::StringW get_InternalNameIfAvailable();

  /// @brief Method get_NameOrDefault addr 0x25caf1c size 0x70 virtual false final false
  inline ::StringW get_NameOrDefault();

  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type(Type&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type(Type const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type();

public:
  /// @brief Field _impl, offset: 0x10, size: 0x8, def value: None
  ::System::RuntimeTypeHandle ____impl;

  /// @brief Field DefaultLookup value: static_cast<int32_t>(0x1c)
  static ::System::Reflection::BindingFlags const DefaultLookup;

  /// @brief Field DefaultTypeNameWhenMissingMetadata offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultTypeNameWhenMissingMetadata{ u"UnknownType" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Type, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Type);
DEFINE_IL2CPP_ARG_TYPE(::System::Type*, "System", "Type");
