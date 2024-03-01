#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeType)
namespace System::Globalization {
class CultureInfo;
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
class RuntimeAssembly;
}
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System::Reflection {
class RuntimeEventInfo;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Array;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
struct Guid;
}
namespace System {
class ICloneable;
}
namespace System {
class MonoTypeInfo;
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
namespace System {
struct TypeNameKind;
}
namespace System {
class Type;
}
namespace System {
template <typename T> struct __RuntimeType__ListBuilder_1;
}
namespace System {
struct __RuntimeType__MemberListType;
}
// Forward declare root types
namespace System {
struct __RuntimeType__MemberListType;
}
namespace System {
class RuntimeType;
}
namespace System {
template <typename T> struct __RuntimeType__ListBuilder_1;
}
// Write type traits
MARK_VAL_T(::System::__RuntimeType__MemberListType);
MARK_REF_PTR_T(::System::RuntimeType);
MARK_GEN_VAL_T(::System::__RuntimeType__ListBuilder_1);
// Type: ::MemberListType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::RuntimeType::MemberListType
struct CORDL_TYPE __RuntimeType__MemberListType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RuntimeType__MemberListType_Unwrapped
  enum struct ____RuntimeType__MemberListType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_CaseSensitive = static_cast<int32_t>(0x1),
    __E_CaseInsensitive = static_cast<int32_t>(0x2),
    __E_HandleToInfo = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RuntimeType__MemberListType_Unwrapped() const noexcept {
    return static_cast<____RuntimeType__MemberListType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<____RuntimeType__MemberListType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeType__MemberListType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RuntimeType__MemberListType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::System::__RuntimeType__MemberListType const All;

  /// @brief Field CaseInsensitive value: static_cast<int32_t>(0x2)
  static ::System::__RuntimeType__MemberListType const CaseInsensitive;

  /// @brief Field CaseSensitive value: static_cast<int32_t>(0x1)
  static ::System::__RuntimeType__MemberListType const CaseSensitive;

  /// @brief Field HandleToInfo value: static_cast<int32_t>(0x3)
  static ::System::__RuntimeType__MemberListType const HandleToInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__RuntimeType__MemberListType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__RuntimeType__MemberListType, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::ListBuilder`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::RuntimeType::ListBuilder`1<T>
struct CORDL_TYPE __RuntimeType__ListBuilder_1 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Add(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array, int32_t index);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeType__ListBuilder_1();

  // Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: None }, CppParam { name:
  // "_count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RuntimeType__ListBuilder_1(::ArrayW<T, ::Array<T>*> _items, T _item, int32_t _count, int32_t _capacity) noexcept;

  /// @brief Field _items, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> _items;

  /// @brief Field _item, offset: 0x8, size: 0x8, def value: None
  T _item;

  /// @brief Field _count, offset: 0x10, size: 0x4, def value: None
  int32_t _count;

  /// @brief Field _capacity, offset: 0x14, size: 0x4, def value: None
  int32_t _capacity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
// Type: System::RuntimeType
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::RuntimeType*
class CORDL_TYPE RuntimeType : public ::System::Reflection::TypeInfo {
public:
  // Declarations
  template <typename T> using ListBuilder_1 = ::System::__RuntimeType__ListBuilder_1<T>;

  using MemberListType = ::System::__RuntimeType__MemberListType;

  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName))::StringW AssemblyQualifiedName;

  __declspec(property(get = get_BaseType))::System::Type* BaseType;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringMethod))::System::Reflection::MethodBase* DeclaringMethod;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  /// @brief Field DelegateType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DelegateType, put = setStaticF_DelegateType))::System::RuntimeType* DelegateType;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType))::System::RuntimeType* EnumType;

  __declspec(property(get = get_FullName))::StringW FullName;

  __declspec(property(get = get_GUID))::System::Guid GUID;

  /// @brief Field GenericCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_GenericCache, put = __cordl_internal_set_GenericCache))::System::Object* GenericCache;

  __declspec(property(get = get_GenericParameterAttributes))::System::Reflection::GenericParameterAttributes GenericParameterAttributes;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsSzArray)) bool IsSzArray;

  /// @brief Field MakeTypeBuilderInstantiation, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_MakeTypeBuilderInstantiation,
               put = setStaticF_MakeTypeBuilderInstantiation))::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* MakeTypeBuilderInstantiation;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  /// @brief Field ObjectType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ObjectType, put = setStaticF_ObjectType))::System::RuntimeType* ObjectType;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  /// @brief Field StringType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StringType, put = setStaticF_StringType))::System::RuntimeType* StringType;

  __declspec(property(get = get_TypeHandle))::System::RuntimeTypeHandle TypeHandle;

  __declspec(property(get = get_UnderlyingSystemType))::System::Type* UnderlyingSystemType;

  /// @brief Field ValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValueType, put = setStaticF_ValueType))::System::RuntimeType* ValueType;

  /// @brief Field m_serializationCtor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializationCtor, put = __cordl_internal_set_m_serializationCtor))::System::Reflection::RuntimeConstructorInfo* m_serializationCtor;

  /// @brief Field s_SICtorParamTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SICtorParamTypes, put = setStaticF_s_SICtorParamTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> s_SICtorParamTypes;

  /// @brief Field s_typedRef, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_typedRef, put = setStaticF_s_typedRef))::System::RuntimeType* s_typedRef;

  /// @brief Field type_info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type_info, put = __cordl_internal_set_type_info))::System::MonoTypeInfo* type_info;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckValue, addr 0x26e1ee4, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* CheckValue(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr);

  /// @brief Method Clone, addr 0x26e0fa0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method CreateInstanceCheckThis, addr 0x26e1620, size 0x220, virtual false, abstract: false, final false
  inline void CreateInstanceCheckThis();

  /// @brief Method CreateInstanceDefaultCtor, addr 0x26cc13c, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method CreateInstanceForAnotherGenericParameter, addr 0x26e2fec, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type* genericType, ::System::RuntimeType* genericArgument);

  /// @brief Method CreateInstanceImpl, addr 0x26cb5e8, size 0x98c, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                              ::System::Globalization::CultureInfo* culture, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes,
                                              ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method CreateInstanceInternal, addr 0x26e1ee0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstanceInternal(::System::Type* type);

  /// @brief Method CreateInstanceMono, addr 0x26e1c00, size 0x2e0, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceMono(bool nonPublic, bool wrapExceptions);

  /// @brief Method CreateInstanceSlow, addr 0x26e1848, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache);

  /// @brief Method Equals, addr 0x26e0f94, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FilterApplyBase, addr 0x26dac94, size 0x1dc, virtual false, abstract: false, final false
  static inline bool FilterApplyBase(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic,
                                     ::StringW name, bool prefixLookup);

  /// @brief Method FilterApplyConstructorInfo, addr 0x26db268, size 0x88, virtual false, abstract: false, final false
  static inline bool FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags,
                                                ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyMethodBase, addr 0x26db010, size 0x258, virtual false, abstract: false, final false
  static inline bool FilterApplyMethodBase(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags,
                                           ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyMethodInfo, addr 0x26daf88, size 0x88, virtual false, abstract: false, final false
  static inline bool FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv,
                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyPrefixLookup, addr 0x26dac34, size 0x60, virtual false, abstract: false, final false
  static inline bool FilterApplyPrefixLookup(::System::Reflection::MemberInfo* memberInfo, ::StringW name, bool ignoreCase);

  /// @brief Method FilterApplyType, addr 0x26dae70, size 0x118, virtual false, abstract: false, final false
  static inline bool FilterApplyType(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns);

  /// @brief Method FilterHelper, addr 0x26daa88, size 0x120, virtual false, abstract: false, final false
  static inline void FilterHelper(::System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, bool allowPrefixLookup, ByRef<bool> prefixLookup, ByRef<bool> ignoreCase,
                                  ByRef<::System::__RuntimeType__MemberListType> listType);

  /// @brief Method FilterHelper, addr 0x26daba8, size 0x8c, virtual false, abstract: false, final false
  static inline void FilterHelper(::System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, ByRef<bool> ignoreCase, ByRef<::System::__RuntimeType__MemberListType> listType);

  /// @brief Method FilterPreCalculate, addr 0x26daa4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Reflection::BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic);

  /// @brief Method FormatTypeName, addr 0x26e13e4, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW FormatTypeName(bool serialization);

  /// @brief Method GetArrayRank, addr 0x26dea34, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetArrayRank();

  /// @brief Method GetAttributeFlagsImpl, addr 0x26de788, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetBaseType, addr 0x26de5a4, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetBaseType();

  /// @brief Method GetCachedName, addr 0x26e1570, size 0x58, virtual false, abstract: false, final false
  inline ::StringW GetCachedName(::System::TypeNameKind kind);

  /// @brief Method GetConstructorCandidates, addr 0x26db87c, size 0x27c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::ConstructorInfo*> GetConstructorCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                 ::System::Reflection::CallingConventions callConv,
                                                                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetConstructorImpl, addr 0x26dd358, size 0x224, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructors, addr 0x26dd13c, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetConstructors_internal, addr 0x26dbaf8, size 0x238, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeConstructorInfo*, ::Array<::System::Reflection::RuntimeConstructorInfo*>*> GetConstructors_internal(::System::Reflection::BindingFlags bindingAttr,
                                                                                                                                                   ::System::RuntimeType* reflectedType);

  /// @brief Method GetConstructors_native, addr 0x26e3108, size 0x4, virtual false, abstract: false, final false
  inline void* GetConstructors_native(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes, addr 0x26e10ac, size 0x19c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x26e100c, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDefaultConstructor, addr 0x26e1884, size 0x198, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeConstructorInfo* GetDefaultConstructor();

  /// @brief Method GetDefaultMemberName, addr 0x26e0ea8, size 0xec, virtual false, abstract: false, final false
  inline ::StringW GetDefaultMemberName();

  /// @brief Method GetElementType, addr 0x26deac0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEnumName, addr 0x26df360, size 0x1f0, virtual true, abstract: false, final false
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames, addr 0x26deac8, size 0x120, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnumNames();

  /// @brief Method GetEnumUnderlyingType, addr 0x26ded60, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues, addr 0x26debe8, size 0x178, virtual true, abstract: false, final false
  inline ::System::Array* GetEnumValues();

  /// @brief Method GetEvent, addr 0x26dd818, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEventCandidates, addr 0x26dc228, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::EventInfo*> GetEventCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetEvents, addr 0x26dd258, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents_internal, addr 0x26dc3f8, size 0x2ac, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeEventInfo*, ::Array<::System::Reflection::RuntimeEventInfo*>*>
  GetEvents_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetEvents_native, addr 0x26e3280, size 0x4, virtual false, abstract: false, final false
  inline void* GetEvents_native(void* name, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetField, addr 0x26dd9e8, size 0x2f4, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFieldCandidates, addr 0x26dc6a4, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::FieldInfo*> GetFieldCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetFields, addr 0x26dd2d8, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields_internal, addr 0x26dc878, size 0x2ec, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeFieldInfo*, ::Array<::System::Reflection::RuntimeFieldInfo*>*>
  GetFields_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetFields_native, addr 0x26e3284, size 0x4, virtual false, abstract: false, final false
  inline void* GetFields_native(void* name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetGUID, addr 0x26e310c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGUID(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> guid);

  /// @brief Method GetGenericArguments, addr 0x26df5c8, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericArgumentsInternal, addr 0x26df550, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> GetGenericArgumentsInternal();

  /// @brief Method GetGenericArgumentsInternal, addr 0x26df5c0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArgumentsInternal(bool runtimeArray);

  /// @brief Method GetGenericParameterAttributes, addr 0x26de9e0, size 0x44, virtual false, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes();

  /// @brief Method GetGenericParameterConstraints, addr 0x26e2ef0, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericParameterConstraints();

  /// @brief Method GetGenericParameterPosition, addr 0x26dfbfc, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetGenericParameterPosition();

  /// @brief Method GetGenericTypeDefinition, addr 0x26dfc00, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetHashCode, addr 0x26e32a8, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInterfaces, addr 0x26e3288, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMember, addr 0x26ddedc, size 0x4f0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                            ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodCandidates, addr 0x26db338, size 0x258, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, int32_t genericParamCount,
                                                                                                       bool allowPrefixLookup);

  /// @brief Method GetMethodCandidates, addr 0x26e3874, size 0x20c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetMethodImpl, addr 0x26e358c, size 0x30, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethodImplCommon, addr 0x26e35bc, size 0x2b8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImplCommon(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethods, addr 0x26dd0b0, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodsByName, addr 0x26db590, size 0x2ec, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeMethodInfo*, ::Array<::System::Reflection::RuntimeMethodInfo*>*>
  GetMethodsByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetMethodsByName_native, addr 0x26e3100, size 0x4, virtual false, abstract: false, final false
  inline void* GetMethodsByName_native(void* namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetNestedType, addr 0x26ddcdc, size 0x200, virtual true, abstract: false, final false
  inline ::System::Type* GetNestedType(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedTypeCandidates, addr 0x26dcb64, size 0x1bc, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Type*> GetNestedTypeCandidates(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetNestedTypes_internal, addr 0x26dcd20, size 0x390, virtual false, abstract: false, final false
  inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> GetNestedTypes_internal(::StringW displayName, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                    ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetNestedTypes_native, addr 0x26e328c, size 0x4, virtual false, abstract: false, final false
  inline void* GetNestedTypes_native(void* name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetObjectData, addr 0x26e0fa4, size 0x68, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetProperties, addr 0x26dd1d4, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertiesByName, addr 0x26dbf3c, size 0x2ec, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimePropertyInfo*, ::Array<::System::Reflection::RuntimePropertyInfo*>*>
  GetPropertiesByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetPropertiesByName_native, addr 0x26e3104, size 0x4, virtual false, abstract: false, final false
  inline void* GetPropertiesByName_native(void* name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetPropertyCandidates, addr 0x26dbd30, size 0x20c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::PropertyInfo*> GetPropertyCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetPropertyImpl, addr 0x26dd57c, size 0x29c, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetRuntimeAssembly, addr 0x26de3e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();

  /// @brief Method GetRuntimeModule, addr 0x26de3d4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method GetSerializationCtor, addr 0x26e1a1c, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor();

  /// @brief Method GetType, addr 0x26da56c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetTypeCodeImpl, addr 0x26e320c, size 0x54, virtual true, abstract: false, final false
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method GetTypeCodeImplInternal, addr 0x26e3260, size 0x4, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCodeImplInternal(::System::Type* type);

  /// @brief Method GetTypeFromCLSIDImpl, addr 0x26e31bc, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSIDImpl(::System::Guid clsid, ::StringW server, bool throwOnError);

  /// @brief Method HasElementTypeImpl, addr 0x26de950, size 0x8, virtual true, abstract: false, final false
  inline bool HasElementTypeImpl();

  /// @brief Method InvokeMember, addr 0x26dfcdc, size 0x11cc, virtual true, abstract: false, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> providedArgs,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParams);

  /// @brief Method IsArrayImpl, addr 0x26dea2c, size 0x8, virtual true, abstract: false, final false
  inline bool IsArrayImpl();

  /// @brief Method IsAssignableFrom, addr 0x26de418, size 0xd8, virtual true, abstract: false, final false
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method IsByRefImpl, addr 0x26de798, size 0x8, virtual true, abstract: false, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0x26de7b0, size 0xc, virtual true, abstract: false, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsContextfulImpl, addr 0x26de790, size 0x8, virtual true, abstract: false, final false
  inline bool IsContextfulImpl();

  /// @brief Method IsConvertibleToPrimitiveType, addr 0x26e22a4, size 0x994, virtual false, abstract: false, final false
  static inline ::System::Object* IsConvertibleToPrimitiveType(::System::Object* value, ::System::Type* targetType);

  /// @brief Method IsDefined, addr 0x26e1248, size 0x19c, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsEnumDefined, addr 0x26dee34, size 0x52c, virtual true, abstract: false, final false
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method IsEquivalentTo, addr 0x26de4f0, size 0xb0, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method IsGenericCOMObjectImpl, addr 0x26e1840, size 0x8, virtual false, abstract: false, final false
  inline bool IsGenericCOMObjectImpl();

  /// @brief Method IsInstanceOfType, addr 0x26de410, size 0x8, virtual true, abstract: false, final false
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsPointerImpl, addr 0x26de7a8, size 0x8, virtual true, abstract: false, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0x26de7a0, size 0x8, virtual true, abstract: false, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method IsSubclassOf, addr 0x26e3494, size 0xf8, virtual true, abstract: false, final false
  inline bool IsSubclassOf(::System::Type* type);

  /// @brief Method IsValueTypeImpl, addr 0x26de7bc, size 0x120, virtual true, abstract: false, final false
  inline bool IsValueTypeImpl();

  /// @brief Method MakeArrayType, addr 0x26e2c3c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType, addr 0x26e2c44, size 0x50, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType, addr 0x26e2c98, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakeGenericType, addr 0x26dfb60, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* MakeGenericType(::System::Type* gt, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method MakeGenericType, addr 0x26df658, size 0x508, virtual true, abstract: false, final false
  inline ::System::Type* MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> instantiation);

  /// @brief Method MakePointerType, addr 0x26e2d08, size 0xec, virtual true, abstract: false, final false
  inline ::System::Type* MakePointerType();

  /// @brief Method MakePointerType, addr 0x26e2d04, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* MakePointerType(::System::Type* type);

  static inline ::System::RuntimeType* New_ctor();

  /// @brief Method SanityCheckGenericArguments, addr 0x26da73c, size 0x224, virtual false, abstract: false, final false
  static inline void SanityCheckGenericArguments(::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericArguments,
                                                 ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericParamters);

  /// @brief Method SplitName, addr 0x26da960, size 0xec, virtual false, abstract: false, final false
  static inline void SplitName(::StringW fullname, ByRef<::StringW> name, ByRef<::StringW> ns);

  /// @brief Method ThrowIfTypeNeverValidGenericArgument, addr 0x26da5d8, size 0x164, virtual false, abstract: false, final false
  static inline void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* type);

  /// @brief Method ToString, addr 0x26e3264, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryConvertToType, addr 0x26e2048, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Object* TryConvertToType(::System::Object* value, ByRef<bool> failed);

  constexpr ::System::Object*& __cordl_internal_get_GenericCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_GenericCache() const;

  constexpr ::System::Reflection::RuntimeConstructorInfo*& __cordl_internal_get_m_serializationCtor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeConstructorInfo*> const& __cordl_internal_get_m_serializationCtor() const;

  constexpr ::System::MonoTypeInfo*& __cordl_internal_get_type_info();

  constexpr ::cordl_internals::to_const_pointer<::System::MonoTypeInfo*> const& __cordl_internal_get_type_info() const;

  constexpr void __cordl_internal_set_GenericCache(::System::Object* value);

  constexpr void __cordl_internal_set_m_serializationCtor(::System::Reflection::RuntimeConstructorInfo* value);

  constexpr void __cordl_internal_set_type_info(::System::MonoTypeInfo* value);

  /// @brief Method .ctor, addr 0x26db2f0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method getFullName, addr 0x26e3270, size 0xc, virtual false, abstract: false, final false
  inline ::StringW getFullName(bool full_name, bool assembly_qualified);

  static inline ::System::RuntimeType* getStaticF_DelegateType();

  static inline ::System::RuntimeType* getStaticF_EnumType();

  static inline ::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* getStaticF_MakeTypeBuilderInstantiation();

  static inline ::System::RuntimeType* getStaticF_ObjectType();

  static inline ::System::RuntimeType* getStaticF_StringType();

  static inline ::System::RuntimeType* getStaticF_ValueType();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_s_SICtorParamTypes();

  static inline ::System::RuntimeType* getStaticF_s_typedRef();

  /// @brief Method get_Assembly, addr 0x26de3dc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0x26e3290, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_BaseType, addr 0x26de5a0, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x26e2df4, size 0xfc, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringMethod, addr 0x26e327c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method get_DeclaringType, addr 0x26e329c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_FullName, addr 0x26e3374, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_GUID, addr 0x26e3110, size 0xac, virtual true, abstract: false, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_GenericParameterAttributes, addr 0x26de958, size 0x88, virtual true, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method get_GenericParameterPosition, addr 0x26dfb74, size 0x88, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_IsConstructedGenericType, addr 0x26dfc94, size 0x48, virtual true, abstract: false, final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsEnum, addr 0x26de8dc, size 0x74, virtual true, abstract: false, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsGenericParameter, addr 0x26dfb6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericType, addr 0x26dfc8c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x26dfb64, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsSZArray, addr 0x26e343c, size 0x58, virtual true, abstract: false, final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsSzArray, addr 0x26dea24, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSzArray();

  /// @brief Method get_MemberType, addr 0x26e15c8, size 0x44, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_MetadataToken, addr 0x26e1618, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x26de3cc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x26e32a0, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x26e32a4, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ReflectedType, addr 0x26e160c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_TypeHandle, addr 0x26de3ec, size 0x24, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method get_UnderlyingSystemType, addr 0x26de784, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method make_array_type, addr 0x26e2c38, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* make_array_type(int32_t rank);

  /// @brief Method make_byref_type, addr 0x26e2c94, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* make_byref_type();

  /// @brief Method op_Equality, addr 0x26cb5dc, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::RuntimeType* left, ::System::RuntimeType* right);

  /// @brief Method op_Inequality, addr 0x26ce190, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::RuntimeType* left, ::System::RuntimeType* right);

  static inline void setStaticF_DelegateType(::System::RuntimeType* value);

  static inline void setStaticF_EnumType(::System::RuntimeType* value);

  static inline void setStaticF_MakeTypeBuilderInstantiation(::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* value);

  static inline void setStaticF_ObjectType(::System::RuntimeType* value);

  static inline void setStaticF_StringType(::System::RuntimeType* value);

  static inline void setStaticF_ValueType(::System::RuntimeType* value);

  static inline void setStaticF_s_SICtorParamTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline void setStaticF_s_typedRef(::System::RuntimeType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeType(RuntimeType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeType(RuntimeType const&) = delete;

  /// @brief Field type_info, offset: 0x18, size: 0x8, def value: None
  ::System::MonoTypeInfo* ___type_info;

  /// @brief Field GenericCache, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___GenericCache;

  /// @brief Field m_serializationCtor, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::RuntimeConstructorInfo* ___m_serializationCtor;

  /// @brief Field BinderGetSetField value: static_cast<int32_t>(0xc00)
  static ::System::Reflection::BindingFlags const BinderGetSetField;

  /// @brief Field BinderGetSetProperty value: static_cast<int32_t>(0x3000)
  static ::System::Reflection::BindingFlags const BinderGetSetProperty;

  /// @brief Field BinderNonCreateInstance value: static_cast<int32_t>(0x3d00)
  static ::System::Reflection::BindingFlags const BinderNonCreateInstance;

  /// @brief Field BinderNonFieldGetSet value: static_cast<int32_t>(0xfff300)
  static ::System::Reflection::BindingFlags const BinderNonFieldGetSet;

  /// @brief Field BinderSetInvokeField value: static_cast<int32_t>(0x900)
  static ::System::Reflection::BindingFlags const BinderSetInvokeField;

  /// @brief Field BinderSetInvokeProperty value: static_cast<int32_t>(0x2100)
  static ::System::Reflection::BindingFlags const BinderSetInvokeProperty;

  /// @brief Field ClassicBindingMask value: static_cast<int32_t>(0xf100)
  static ::System::Reflection::BindingFlags const ClassicBindingMask;

  /// @brief Field GenericParameterCountAny offset 0xffffffff size 0x4
  static constexpr int32_t GenericParameterCountAny{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field InvocationMask value: static_cast<int32_t>(0xff00)
  static ::System::Reflection::BindingFlags const InvocationMask;

  /// @brief Field MemberBindingMask value: static_cast<int32_t>(0xff)
  static ::System::Reflection::BindingFlags const MemberBindingMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeType, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::RuntimeType, ___type_info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::RuntimeType, ___GenericCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::RuntimeType, ___m_serializationCtor) == 0x28, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__RuntimeType__MemberListType, "System", "RuntimeType/MemberListType");
NEED_NO_BOX(::System::RuntimeType);
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeType*, "System", "RuntimeType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::__RuntimeType__ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
