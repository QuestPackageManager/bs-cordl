#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MonoPropertyInfo_def.hpp"
#include "System/Reflection/zzzz__PInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimePropertyInfo)
namespace Mono {
struct RuntimePropertyHandle;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct MonoPropertyInfo;
}
namespace System::Reflection {
struct PInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
class __RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
template <typename T, typename R> class __RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
template <typename R> class __RuntimePropertyInfo__StaticGetter_1;
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
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
class __RuntimePropertyInfo__GetterAdapter;
}
namespace System::Reflection {
template <typename T, typename R> class __RuntimePropertyInfo__Getter_2;
}
namespace System::Reflection {
template <typename R> class __RuntimePropertyInfo__StaticGetter_1;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimePropertyInfo);
MARK_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__GetterAdapter);
MARK_GEN_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__Getter_2);
MARK_GEN_REF_PTR_T(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1);
// Type: ::GetterAdapter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3529))
// CS Name: ::RuntimePropertyInfo::GetterAdapter*
class CORDL_TYPE __RuntimePropertyInfo__GetterAdapter : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x24f944c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x24f9578, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* _this);

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__GetterAdapter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__RuntimePropertyInfo__GetterAdapter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
// Type: ::Getter`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// cpp template
template <typename T, typename R>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3530))
// CS Name: ::RuntimePropertyInfo::Getter`2<T,R>*
class CORDL_TYPE __RuntimePropertyInfo__Getter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke(T _this);

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__Getter_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Type: ::StaticGetter`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// cpp template
template <typename R>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3531))
// CS Name: ::RuntimePropertyInfo::StaticGetter`1<R>*
class CORDL_TYPE __RuntimePropertyInfo__StaticGetter_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__StaticGetter_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Type: System.Reflection::RuntimePropertyInfo
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(3488)), TypeDefinitionIndex(TypeDefinitionIndex(3527)),
// TypeDefinitionIndex(TypeDefinitionIndex(3528))] Self: TypeDefinitionIndex(TypeDefinitionIndex(3532)) CS Name: ::System.Reflection::RuntimePropertyInfo*
class CORDL_TYPE RuntimePropertyInfo : public ::System::Reflection::PropertyInfo {
public:
  // Declarations
  template <typename R> using StaticGetter_1 = ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>;

  template <typename T, typename R> using Getter_2 = ::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>;

  using GetterAdapter = ::System::Reflection::__RuntimePropertyInfo__GetterAdapter;

  /// @brief Field klass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_klass, put = __cordl_internal_set_klass)) void* klass;

  /// @brief Field prop, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prop, put = __cordl_internal_set_prop)) void* prop;

  /// @brief Field info, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info))::System::Reflection::MonoPropertyInfo info;

  /// @brief Field cached, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_cached, put = __cordl_internal_set_cached))::System::Reflection::PInfo cached;

  /// @brief Field cached_getter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cached_getter, put = __cordl_internal_set_cached_getter))::System::Reflection::__RuntimePropertyInfo__GetterAdapter* cached_getter;

  __declspec(property(get = get_BindingFlags))::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_Module))::System::Reflection::Module* Module;

  __declspec(property(get = get_ReflectedTypeInternal))::System::RuntimeType* ReflectedTypeInternal;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_PropertyType))::System::Type* PropertyType;

  __declspec(property(get = get_ReflectedType))::System::Type* ReflectedType;

  __declspec(property(get = get_DeclaringType))::System::Type* DeclaringType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  constexpr void*& __cordl_internal_get_klass();

  constexpr void* const& __cordl_internal_get_klass() const;

  constexpr void __cordl_internal_set_klass(void* value);

  constexpr void*& __cordl_internal_get_prop();

  constexpr void* const& __cordl_internal_get_prop() const;

  constexpr void __cordl_internal_set_prop(void* value);

  constexpr ::System::Reflection::MonoPropertyInfo& __cordl_internal_get_info();

  constexpr ::System::Reflection::MonoPropertyInfo const& __cordl_internal_get_info() const;

  constexpr void __cordl_internal_set_info(::System::Reflection::MonoPropertyInfo value);

  constexpr ::System::Reflection::PInfo& __cordl_internal_get_cached();

  constexpr ::System::Reflection::PInfo const& __cordl_internal_get_cached() const;

  constexpr void __cordl_internal_set_cached(::System::Reflection::PInfo value);

  constexpr ::System::Reflection::__RuntimePropertyInfo__GetterAdapter*& __cordl_internal_get_cached_getter();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__RuntimePropertyInfo__GetterAdapter*> const& __cordl_internal_get_cached_getter() const;

  constexpr void __cordl_internal_set_cached_getter(::System::Reflection::__RuntimePropertyInfo__GetterAdapter* value);

  /// @brief Method get_property_info, addr 0x24f8578, size 0x4, virtual false, abstract: false, final false
  static inline void get_property_info(::System::Reflection::RuntimePropertyInfo* prop, ByRef<::System::Reflection::MonoPropertyInfo> info, ::System::Reflection::PInfo req_info);

  /// @brief Method get_BindingFlags, addr 0x24f857c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_Module, addr 0x24f8584, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method GetDeclaringTypeInternal, addr 0x24f85a4, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetDeclaringTypeInternal();

  /// @brief Method get_ReflectedTypeInternal, addr 0x24f8628, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method GetRuntimeModule, addr 0x24f8588, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method ToString, addr 0x24f86ac, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method FormatNameAndSig, addr 0x24f86b4, size 0x170, virtual false, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetObjectData, addr 0x24f8824, size 0xd0, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializationToString, addr 0x24f88f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method CachePropertyInfo, addr 0x24f88fc, size 0x40, virtual false, abstract: false, final false
  inline void CachePropertyInfo(::System::Reflection::PInfo flags);

  /// @brief Method get_CanRead, addr 0x24f893c, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x24f897c, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_PropertyType, addr 0x24f89bc, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_ReflectedType, addr 0x24f8a6c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_DeclaringType, addr 0x24f8aa4, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_Name, addr 0x24f8adc, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method GetGetMethod, addr 0x24f8b14, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);

  /// @brief Method GetIndexParameters, addr 0x24f8b98, size 0x1c4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters();

  /// @brief Method GetSetMethod, addr 0x24f8d5c, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);

  /// @brief Method IsDefined, addr 0x24f8de0, size 0x6c, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x24f8e4c, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x24f8ea8, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename R> static inline ::System::Object* GetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>* getter, ::System::Object* obj);

  /// @brief Method StaticGetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename R> static inline ::System::Object* StaticGetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>* getter, ::System::Object* obj);

  /// @brief Method GetValue, addr 0x24f8f14, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index);

  /// @brief Method GetValue, addr 0x24f8f34, size 0x204, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method SetValue, addr 0x24f9138, size 0x204, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method get_MetadataToken, addr 0x24f933c, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_metadata_token, addr 0x24f9340, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimePropertyInfo* monoProperty);

  /// @brief Method internal_from_handle_type, addr 0x24f9344, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* internal_from_handle_type(void* event_handle, void* type_handle);

  /// @brief Method GetPropertyFromHandle, addr 0x24f9348, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType);

  static inline ::System::Reflection::RuntimePropertyInfo* New_ctor();

  /// @brief Method .ctor, addr 0x24f9444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePropertyInfo(RuntimePropertyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePropertyInfo(RuntimePropertyInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyInfo();

public:
  /// @brief Field klass, offset: 0x10, size: 0x8, def value: None
  void* ___klass;

  /// @brief Field prop, offset: 0x18, size: 0x8, def value: None
  void* ___prop;

  /// @brief Field info, offset: 0x20, size: 0x30, def value: None
  ::System::Reflection::MonoPropertyInfo ___info;

  /// @brief Field cached, offset: 0x50, size: 0x4, def value: None
  ::System::Reflection::PInfo ___cached;

  /// @brief Field cached_getter, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* ___cached_getter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimePropertyInfo, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___klass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___prop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___cached) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___cached_getter) == 0x58, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimePropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
NEED_NO_BOX(::System::Reflection::__RuntimePropertyInfo__GetterAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__RuntimePropertyInfo__GetterAdapter*, "System.Reflection", "RuntimePropertyInfo/GetterAdapter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::__RuntimePropertyInfo__Getter_2, "System.Reflection", "RuntimePropertyInfo/Getter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1, "System.Reflection", "RuntimePropertyInfo/StaticGetter`1");
