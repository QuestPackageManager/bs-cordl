#pragma once
// IWYU pragma private; include "System/RuntimeType.hpp"
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
struct IntPtr;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
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
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2566 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__RuntimeType__MemberListType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__RuntimeType__MemberListType, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::ListBuilder`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2567 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
// Type: System::RuntimeType
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::RuntimeType*
class CORDL_TYPE RuntimeType : public ::System::Reflection::TypeInfo {
public:
  // Declarations
  template <typename T> using ListBuilder_1 = ::System::__RuntimeType__ListBuilder_1<T>;

  using MemberListType = ::System::__RuntimeType__MemberListType;

  __declspec(property(get = get_Assembly)) ::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_AssemblyQualifiedName)) ::StringW AssemblyQualifiedName;

  __declspec(property(get = get_BaseType)) ::System::Type* BaseType;

  __declspec(property(get = get_ContainsGenericParameters)) bool ContainsGenericParameters;

  __declspec(property(get = get_DeclaringMethod)) ::System::Reflection::MethodBase* DeclaringMethod;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  /// @brief Field DelegateType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DelegateType, put = setStaticF_DelegateType)) ::System::RuntimeType* DelegateType;

  /// @brief Field EnumType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EnumType, put = setStaticF_EnumType)) ::System::RuntimeType* EnumType;

  __declspec(property(get = get_FullName)) ::StringW FullName;

  __declspec(property(get = get_GUID)) ::System::Guid GUID;

  /// @brief Field GenericCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_GenericCache, put = __cordl_internal_set_GenericCache)) ::System::Object* GenericCache;

  __declspec(property(get = get_GenericParameterAttributes)) ::System::Reflection::GenericParameterAttributes GenericParameterAttributes;

  __declspec(property(get = get_GenericParameterPosition)) int32_t GenericParameterPosition;

  __declspec(property(get = get_IsConstructedGenericType)) bool IsConstructedGenericType;

  __declspec(property(get = get_IsEnum)) bool IsEnum;

  __declspec(property(get = get_IsGenericParameter)) bool IsGenericParameter;

  __declspec(property(get = get_IsGenericType)) bool IsGenericType;

  __declspec(property(get = get_IsGenericTypeDefinition)) bool IsGenericTypeDefinition;

  __declspec(property(get = get_IsSZArray)) bool IsSZArray;

  __declspec(property(get = get_IsSzArray)) bool IsSzArray;

  /// @brief Field MakeTypeBuilderInstantiation, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_MakeTypeBuilderInstantiation,
      put = setStaticF_MakeTypeBuilderInstantiation)) ::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* MakeTypeBuilderInstantiation;

  __declspec(property(get = get_MemberType)) ::System::Reflection::MemberTypes MemberType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  /// @brief Field ObjectType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ObjectType, put = setStaticF_ObjectType)) ::System::RuntimeType* ObjectType;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  /// @brief Field StringType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StringType, put = setStaticF_StringType)) ::System::RuntimeType* StringType;

  __declspec(property(get = get_TypeHandle)) ::System::RuntimeTypeHandle TypeHandle;

  __declspec(property(get = get_UnderlyingSystemType)) ::System::Type* UnderlyingSystemType;

  /// @brief Field ValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValueType, put = setStaticF_ValueType)) ::System::RuntimeType* ValueType;

  /// @brief Field m_serializationCtor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializationCtor, put = __cordl_internal_set_m_serializationCtor)) ::System::Reflection::RuntimeConstructorInfo* m_serializationCtor;

  /// @brief Field s_SICtorParamTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SICtorParamTypes, put = setStaticF_s_SICtorParamTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> s_SICtorParamTypes;

  /// @brief Field s_typedRef, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_typedRef, put = setStaticF_s_typedRef)) ::System::RuntimeType* s_typedRef;

  /// @brief Field type_info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type_info, put = __cordl_internal_set_type_info)) ::System::MonoTypeInfo* type_info;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckValue, addr 0x3db5fec, size 0x15c, virtual false, abstract: false, final false
  inline ::System::Object* CheckValue(::System::Object* value, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr);

  /// @brief Method Clone, addr 0x3db50f4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method CreateInstanceCheckThis, addr 0x3db5758, size 0x210, virtual false, abstract: false, final false
  inline void CreateInstanceCheckThis();

  /// @brief Method CreateInstanceDefaultCtor, addr 0x3da0384, size 0x124, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceDefaultCtor(bool publicOnly, bool skipCheckThis, bool fillCache, bool wrapExceptions, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method CreateInstanceForAnotherGenericParameter, addr 0x3db71e0, size 0x114, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type* genericType, ::System::RuntimeType* genericArgument);

  /// @brief Method CreateInstanceImpl, addr 0x3d9f838, size 0x98c, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                              ::System::Globalization::CultureInfo* culture, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> activationAttributes,
                                              ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method CreateInstanceInternal, addr 0x3db5fe8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* CreateInstanceInternal(::System::Type* type);

  /// @brief Method CreateInstanceMono, addr 0x3db5d1c, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceMono(bool nonPublic, bool wrapExceptions);

  /// @brief Method CreateInstanceSlow, addr 0x3db5970, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* CreateInstanceSlow(bool publicOnly, bool wrapExceptions, bool skipCheckThis, bool fillCache);

  /// @brief Method Equals, addr 0x3db50e8, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method FilterApplyBase, addr 0x3daec70, size 0x1ec, virtual false, abstract: false, final false
  static inline bool FilterApplyBase(::System::Reflection::MemberInfo* memberInfo, ::System::Reflection::BindingFlags bindingFlags, bool isPublic, bool isNonProtectedInternal, bool isStatic,
                                     ::StringW name, bool prefixLookup);

  /// @brief Method FilterApplyConstructorInfo, addr 0x3daf254, size 0x88, virtual false, abstract: false, final false
  static inline bool FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* constructor, ::System::Reflection::BindingFlags bindingFlags,
                                                ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyMethodBase, addr 0x3daeffc, size 0x258, virtual false, abstract: false, final false
  static inline bool FilterApplyMethodBase(::System::Reflection::MethodBase* methodBase, ::System::Reflection::BindingFlags methodFlags, ::System::Reflection::BindingFlags bindingFlags,
                                           ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyMethodInfo, addr 0x3daef74, size 0x88, virtual false, abstract: false, final false
  static inline bool FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* method, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::CallingConventions callConv,
                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argumentTypes);

  /// @brief Method FilterApplyPrefixLookup, addr 0x3daec10, size 0x60, virtual false, abstract: false, final false
  static inline bool FilterApplyPrefixLookup(::System::Reflection::MemberInfo* memberInfo, ::StringW name, bool ignoreCase);

  /// @brief Method FilterApplyType, addr 0x3daee5c, size 0x118, virtual false, abstract: false, final false
  static inline bool FilterApplyType(::System::Type* type, ::System::Reflection::BindingFlags bindingFlags, ::StringW name, bool prefixLookup, ::StringW ns);

  /// @brief Method FilterHelper, addr 0x3daea64, size 0x120, virtual false, abstract: false, final false
  static inline void FilterHelper(::System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, bool allowPrefixLookup, ByRef<bool> prefixLookup, ByRef<bool> ignoreCase,
                                  ByRef<::System::__RuntimeType__MemberListType> listType);

  /// @brief Method FilterHelper, addr 0x3daeb84, size 0x8c, virtual false, abstract: false, final false
  static inline void FilterHelper(::System::Reflection::BindingFlags bindingFlags, ByRef<::StringW> name, ByRef<bool> ignoreCase, ByRef<::System::__RuntimeType__MemberListType> listType);

  /// @brief Method FilterPreCalculate, addr 0x3daea28, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Reflection::BindingFlags FilterPreCalculate(bool isPublic, bool isInherited, bool isStatic);

  /// @brief Method FormatTypeName, addr 0x3db5524, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW FormatTypeName(bool serialization);

  /// @brief Method GetArrayRank, addr 0x3db2c44, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetArrayRank();

  /// @brief Method GetAttributeFlagsImpl, addr 0x3db29a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();

  /// @brief Method GetBaseType, addr 0x3db27bc, size 0x1e0, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetBaseType();

  /// @brief Method GetCachedName, addr 0x3db56b0, size 0x50, virtual false, abstract: false, final false
  inline ::StringW GetCachedName(::System::TypeNameKind kind);

  /// @brief Method GetConstructorCandidates, addr 0x3daf860, size 0x27c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::ConstructorInfo*> GetConstructorCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                                 ::System::Reflection::CallingConventions callConv,
                                                                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetConstructorImpl, addr 0x3db15cc, size 0x234, virtual true, abstract: false, final false
  inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                                   ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                                   ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetConstructors, addr 0x3db10c8, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ConstructorInfo*, ::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetConstructors_internal, addr 0x3dafadc, size 0x238, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeConstructorInfo*, ::Array<::System::Reflection::RuntimeConstructorInfo*>*> GetConstructors_internal(::System::Reflection::BindingFlags bindingAttr,
                                                                                                                                                   ::System::RuntimeType* reflectedType);

  /// @brief Method GetConstructors_native, addr 0x3db72fc, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetConstructors_native(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetCustomAttributes, addr 0x3db51fc, size 0x194, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3db515c, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDefaultConstructor, addr 0x3db59ac, size 0x18c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeConstructorInfo* GetDefaultConstructor();

  /// @brief Method GetDefaultMemberName, addr 0x3db4ffc, size 0xec, virtual false, abstract: false, final false
  inline ::StringW GetDefaultMemberName();

  /// @brief Method GetElementType, addr 0x3db2cc8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* GetElementType();

  /// @brief Method GetEnumName, addr 0x3db3548, size 0x1e8, virtual true, abstract: false, final false
  inline ::StringW GetEnumName(::System::Object* value);

  /// @brief Method GetEnumNames, addr 0x3db2cd0, size 0x11c, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetEnumNames();

  /// @brief Method GetEnumUnderlyingType, addr 0x3db2f60, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Type* GetEnumUnderlyingType();

  /// @brief Method GetEnumValues, addr 0x3db2dec, size 0x174, virtual true, abstract: false, final false
  inline ::System::Array* GetEnumValues();

  /// @brief Method GetEvent, addr 0x3db1a9c, size 0x1c0, virtual true, abstract: false, final false
  inline ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEventCandidates, addr 0x3db0208, size 0x1d0, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::EventInfo*> GetEventCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetEvents, addr 0x3db11e4, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::EventInfo*, ::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetEvents_internal, addr 0x3db03d8, size 0x260, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeEventInfo*, ::Array<::System::Reflection::RuntimeEventInfo*>*>
  GetEvents_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetEvents_native, addr 0x3db7470, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetEvents_native(::System::IntPtr name, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetField, addr 0x3db1c5c, size 0x2e8, virtual true, abstract: false, final false
  inline ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFieldCandidates, addr 0x3db0638, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::FieldInfo*> GetFieldCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetFields, addr 0x3db1264, size 0x80, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*, ::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetFields_internal, addr 0x3db080c, size 0x2e8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeFieldInfo*, ::Array<::System::Reflection::RuntimeFieldInfo*>*>
  GetFields_internal(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetFields_native, addr 0x3db7474, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetFields_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetGUID, addr 0x3db7300, size 0x4, virtual false, abstract: false, final false
  static inline void GetGUID(::System::Type* type, ::ArrayW<uint8_t, ::Array<uint8_t>*> guid);

  /// @brief Method GetGenericArguments, addr 0x3db37a8, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArguments();

  /// @brief Method GetGenericArgumentsInternal, addr 0x3db3730, size 0x70, virtual false, abstract: false, final false
  inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> GetGenericArgumentsInternal();

  /// @brief Method GetGenericArgumentsInternal, addr 0x3db37a0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericArgumentsInternal(bool runtimeArray);

  /// @brief Method GetGenericParameterAttributes, addr 0x3db2bf0, size 0x44, virtual false, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes();

  /// @brief Method GetGenericParameterConstraints, addr 0x3db70ec, size 0xf4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetGenericParameterConstraints();

  /// @brief Method GetGenericParameterPosition, addr 0x3db3dac, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetGenericParameterPosition();

  /// @brief Method GetGenericTypeDefinition, addr 0x3db3db0, size 0x84, virtual true, abstract: false, final false
  inline ::System::Type* GetGenericTypeDefinition();

  /// @brief Method GetHashCode, addr 0x3db7498, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInterfaces, addr 0x3db7478, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetInterfaces();

  /// @brief Method GetMember, addr 0x3db2134, size 0x4b0, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMember(::StringW name, ::System::Reflection::MemberTypes type,
                                                                                                            ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMembers, addr 0x3db12e4, size 0x2e8, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> GetMembers(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodCandidates, addr 0x3daf31c, size 0x25c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, int32_t genericParamCount,
                                                                                                       bool allowPrefixLookup);

  /// @brief Method GetMethodCandidates, addr 0x3db7a74, size 0x20c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                       ::System::Reflection::CallingConventions callConv,
                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetMethodImpl, addr 0x3db7778, size 0x30, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                         ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                         ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethodImplCommon, addr 0x3db77a8, size 0x2cc, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetMethodImplCommon(::StringW name, int32_t genericParameterCount, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder,
                                                               ::System::Reflection::CallingConventions callConv, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                               ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetMethods, addr 0x3db103c, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::MethodInfo*, ::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetMethodsByName, addr 0x3daf578, size 0x2e8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimeMethodInfo*, ::Array<::System::Reflection::RuntimeMethodInfo*>*>
  GetMethodsByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetMethodsByName_native, addr 0x3db72f4, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetMethodsByName_native(::System::IntPtr namePtr, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetNestedType, addr 0x3db1f44, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Type* GetNestedType(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetNestedTypeCandidates, addr 0x3db0af4, size 0x1bc, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Type*> GetNestedTypeCandidates(::StringW fullname, ::System::Reflection::BindingFlags bindingAttr, bool allowPrefixLookup);

  /// @brief Method GetNestedTypes_internal, addr 0x3db0cb0, size 0x38c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> GetNestedTypes_internal(::StringW displayName, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                    ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetNestedTypes_native, addr 0x3db747c, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetNestedTypes_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetObjectData, addr 0x3db50f8, size 0x64, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetProperties, addr 0x3db1160, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::PropertyInfo*, ::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags bindingAttr);

  /// @brief Method GetPropertiesByName, addr 0x3daff20, size 0x2e8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::RuntimePropertyInfo*, ::Array<::System::Reflection::RuntimePropertyInfo*>*>
  GetPropertiesByName(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType, ::System::RuntimeType* reflectedType);

  /// @brief Method GetPropertiesByName_native, addr 0x3db72f8, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetPropertiesByName_native(::System::IntPtr name, ::System::Reflection::BindingFlags bindingAttr, ::System::__RuntimeType__MemberListType listType);

  /// @brief Method GetPropertyCandidates, addr 0x3dafd14, size 0x20c, virtual false, abstract: false, final false
  inline ::System::__RuntimeType__ListBuilder_1<::System::Reflection::PropertyInfo*> GetPropertyCandidates(::StringW name, ::System::Reflection::BindingFlags bindingAttr,
                                                                                                           ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types, bool allowPrefixLookup);

  /// @brief Method GetPropertyImpl, addr 0x3db1800, size 0x29c, virtual true, abstract: false, final false
  inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType,
                                                             ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types,
                                                             ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers);

  /// @brief Method GetRuntimeAssembly, addr 0x3db25fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();

  /// @brief Method GetRuntimeModule, addr 0x3db25ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method GetSerializationCtor, addr 0x3db5b38, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor();

  /// @brief Method GetType, addr 0x3dae56c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::RuntimeType* GetType(::StringW typeName, bool throwOnError, bool ignoreCase, bool reflectionOnly, ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method GetTypeCodeImpl, addr 0x3db73fc, size 0x54, virtual true, abstract: false, final false
  inline ::System::TypeCode GetTypeCodeImpl();

  /// @brief Method GetTypeCodeImplInternal, addr 0x3db7450, size 0x4, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCodeImplInternal(::System::Type* type);

  /// @brief Method GetTypeFromCLSIDImpl, addr 0x3db73b0, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromCLSIDImpl(::System::Guid clsid, ::StringW server, bool throwOnError);

  /// @brief Method HasElementTypeImpl, addr 0x3db2b68, size 0x8, virtual true, abstract: false, final false
  inline bool HasElementTypeImpl();

  /// @brief Method InvokeMember, addr 0x3db3e84, size 0x1178, virtual true, abstract: false, final false
  inline ::System::Object* InvokeMember(::StringW name, ::System::Reflection::BindingFlags bindingFlags, ::System::Reflection::Binder* binder, ::System::Object* target,
                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*> providedArgs,
                                        ::ArrayW<::System::Reflection::ParameterModifier, ::Array<::System::Reflection::ParameterModifier>*> modifiers, ::System::Globalization::CultureInfo* culture,
                                        ::ArrayW<::StringW, ::Array<::StringW>*> namedParams);

  /// @brief Method IsArrayImpl, addr 0x3db2c3c, size 0x8, virtual true, abstract: false, final false
  inline bool IsArrayImpl();

  /// @brief Method IsAssignableFrom, addr 0x3db2630, size 0xd8, virtual true, abstract: false, final false
  inline bool IsAssignableFrom(::System::Type* c);

  /// @brief Method IsByRefImpl, addr 0x3db29b0, size 0x8, virtual true, abstract: false, final false
  inline bool IsByRefImpl();

  /// @brief Method IsCOMObjectImpl, addr 0x3db29c8, size 0xc, virtual true, abstract: false, final false
  inline bool IsCOMObjectImpl();

  /// @brief Method IsContextfulImpl, addr 0x3db29a8, size 0x8, virtual true, abstract: false, final false
  inline bool IsContextfulImpl();

  /// @brief Method IsConvertibleToPrimitiveType, addr 0x3db63a4, size 0xaa4, virtual false, abstract: false, final false
  static inline ::System::Object* IsConvertibleToPrimitiveType(::System::Object* value, ::System::Type* targetType);

  /// @brief Method IsDefined, addr 0x3db5390, size 0x194, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsEnumDefined, addr 0x3db3030, size 0x518, virtual true, abstract: false, final false
  inline bool IsEnumDefined(::System::Object* value);

  /// @brief Method IsEquivalentTo, addr 0x3db2708, size 0xb0, virtual true, abstract: false, final false
  inline bool IsEquivalentTo(::System::Type* other);

  /// @brief Method IsGenericCOMObjectImpl, addr 0x3db5968, size 0x8, virtual false, abstract: false, final false
  inline bool IsGenericCOMObjectImpl();

  /// @brief Method IsInstanceOfType, addr 0x3db2628, size 0x8, virtual true, abstract: false, final false
  inline bool IsInstanceOfType(::System::Object* o);

  /// @brief Method IsPointerImpl, addr 0x3db29c0, size 0x8, virtual true, abstract: false, final false
  inline bool IsPointerImpl();

  /// @brief Method IsPrimitiveImpl, addr 0x3db29b8, size 0x8, virtual true, abstract: false, final false
  inline bool IsPrimitiveImpl();

  /// @brief Method IsSubclassOf, addr 0x3db7684, size 0xf4, virtual true, abstract: false, final false
  inline bool IsSubclassOf(::System::Type* type);

  /// @brief Method IsValueTypeImpl, addr 0x3db29d4, size 0x120, virtual true, abstract: false, final false
  inline bool IsValueTypeImpl();

  /// @brief Method MakeArrayType, addr 0x3db6e4c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType();

  /// @brief Method MakeArrayType, addr 0x3db6e54, size 0x48, virtual true, abstract: false, final false
  inline ::System::Type* MakeArrayType(int32_t rank);

  /// @brief Method MakeByRefType, addr 0x3db6ea0, size 0x68, virtual true, abstract: false, final false
  inline ::System::Type* MakeByRefType();

  /// @brief Method MakeGenericType, addr 0x3db3d18, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* MakeGenericType(::System::Type* gt, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method MakeGenericType, addr 0x3db3848, size 0x4d0, virtual true, abstract: false, final false
  inline ::System::Type* MakeGenericType(::ArrayW<::System::Type*, ::Array<::System::Type*>*> instantiation);

  /// @brief Method MakePointerType, addr 0x3db6f0c, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Type* MakePointerType();

  /// @brief Method MakePointerType, addr 0x3db6f08, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Type* MakePointerType(::System::Type* type);

  static inline ::System::RuntimeType* New_ctor();

  /// @brief Method SanityCheckGenericArguments, addr 0x3dae730, size 0x214, virtual false, abstract: false, final false
  static inline void SanityCheckGenericArguments(::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericArguments,
                                                 ::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*> genericParamters);

  /// @brief Method SplitName, addr 0x3dae944, size 0xe4, virtual false, abstract: false, final false
  static inline void SplitName(::StringW fullname, ByRef<::StringW> name, ByRef<::StringW> ns);

  /// @brief Method ThrowIfTypeNeverValidGenericArgument, addr 0x3dae5d4, size 0x15c, virtual false, abstract: false, final false
  static inline void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* type);

  /// @brief Method ToString, addr 0x3db7454, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryConvertToType, addr 0x3db6148, size 0x25c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3daf2dc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method getFullName, addr 0x3db7460, size 0xc, virtual false, abstract: false, final false
  inline ::StringW getFullName(bool full_name, bool assembly_qualified);

  static inline ::System::RuntimeType* getStaticF_DelegateType();

  static inline ::System::RuntimeType* getStaticF_EnumType();

  static inline ::System::Func_3<::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::System::Type*>* getStaticF_MakeTypeBuilderInstantiation();

  static inline ::System::RuntimeType* getStaticF_ObjectType();

  static inline ::System::RuntimeType* getStaticF_StringType();

  static inline ::System::RuntimeType* getStaticF_ValueType();

  static inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> getStaticF_s_SICtorParamTypes();

  static inline ::System::RuntimeType* getStaticF_s_typedRef();

  /// @brief Method get_Assembly, addr 0x3db25f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_AssemblyQualifiedName, addr 0x3db7480, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_AssemblyQualifiedName();

  /// @brief Method get_BaseType, addr 0x3db27b8, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method get_ContainsGenericParameters, addr 0x3db6ff0, size 0xfc, virtual true, abstract: false, final false
  inline bool get_ContainsGenericParameters();

  /// @brief Method get_DeclaringMethod, addr 0x3db746c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodBase* get_DeclaringMethod();

  /// @brief Method get_DeclaringType, addr 0x3db748c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_FullName, addr 0x3db7564, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW get_FullName();

  /// @brief Method get_GUID, addr 0x3db7304, size 0xac, virtual true, abstract: false, final false
  inline ::System::Guid get_GUID();

  /// @brief Method get_GenericParameterAttributes, addr 0x3db2b70, size 0x80, virtual true, abstract: false, final false
  inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();

  /// @brief Method get_GenericParameterPosition, addr 0x3db3d2c, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_GenericParameterPosition();

  /// @brief Method get_IsConstructedGenericType, addr 0x3db3e3c, size 0x48, virtual true, abstract: false, final false
  inline bool get_IsConstructedGenericType();

  /// @brief Method get_IsEnum, addr 0x3db2af4, size 0x74, virtual true, abstract: false, final false
  inline bool get_IsEnum();

  /// @brief Method get_IsGenericParameter, addr 0x3db3d24, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericParameter();

  /// @brief Method get_IsGenericType, addr 0x3db3e34, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericType();

  /// @brief Method get_IsGenericTypeDefinition, addr 0x3db3d1c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsGenericTypeDefinition();

  /// @brief Method get_IsSZArray, addr 0x3db762c, size 0x58, virtual true, abstract: false, final false
  inline bool get_IsSZArray();

  /// @brief Method get_IsSzArray, addr 0x3db2c34, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSzArray();

  /// @brief Method get_MemberType, addr 0x3db5700, size 0x44, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method get_MetadataToken, addr 0x3db5750, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x3db25e4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x3db7490, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Namespace, addr 0x3db7494, size 0x4, virtual true, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_ReflectedType, addr 0x3db5744, size 0xc, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_TypeHandle, addr 0x3db2604, size 0x24, virtual true, abstract: false, final false
  inline ::System::RuntimeTypeHandle get_TypeHandle();

  /// @brief Method get_UnderlyingSystemType, addr 0x3db299c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Type* get_UnderlyingSystemType();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method make_array_type, addr 0x3db6e48, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* make_array_type(int32_t rank);

  /// @brief Method make_byref_type, addr 0x3db6e9c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Type* make_byref_type();

  /// @brief Method op_Equality, addr 0x3d9f82c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::RuntimeType* left, ::System::RuntimeType* right);

  /// @brief Method op_Inequality, addr 0x3da2318, size 0xc, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2568 };

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
