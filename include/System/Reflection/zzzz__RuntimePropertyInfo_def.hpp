#pragma once
// IWYU pragma private; include "System/Reflection/RuntimePropertyInfo.hpp"
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
struct IntPtr;
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
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::RuntimePropertyInfo::GetterAdapter*
class CORDL_TYPE __RuntimePropertyInfo__GetterAdapter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3cbeddc, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* _this);

  static inline ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3cbecdc, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__GetterAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__GetterAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__GetterAdapter(__RuntimePropertyInfo__GetterAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__RuntimePropertyInfo__GetterAdapter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
// Type: ::Getter`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// cpp template
template <typename T, typename R>
// Is value type: false
// CS Name: ::RuntimePropertyInfo::Getter`2<T,R>*
class CORDL_TYPE __RuntimePropertyInfo__Getter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke(T _this);

  static inline ::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__Getter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__Getter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__Getter_2(__RuntimePropertyInfo__Getter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Type: ::StaticGetter`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// cpp template
template <typename R>
// Is value type: false
// CS Name: ::RuntimePropertyInfo::StaticGetter`1<R>*
class CORDL_TYPE __RuntimePropertyInfo__StaticGetter_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke();

  static inline ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimePropertyInfo__StaticGetter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimePropertyInfo__StaticGetter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimePropertyInfo__StaticGetter_1(__RuntimePropertyInfo__StaticGetter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3534 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Type: System.Reflection::RuntimePropertyInfo
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::RuntimePropertyInfo*
class CORDL_TYPE RuntimePropertyInfo : public ::System::Reflection::PropertyInfo {
public:
  // Declarations
  using GetterAdapter = ::System::Reflection::__RuntimePropertyInfo__GetterAdapter;

  template <typename T, typename R> using Getter_2 = ::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>;

  template <typename R> using StaticGetter_1 = ::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>;

  __declspec(property(get = get_BindingFlags)) ::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  __declspec(property(get = get_ReflectedTypeInternal)) ::System::RuntimeType* ReflectedTypeInternal;

  /// @brief Field cached, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_cached, put = __cordl_internal_set_cached)) ::System::Reflection::PInfo cached;

  /// @brief Field cached_getter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cached_getter, put = __cordl_internal_set_cached_getter)) ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* cached_getter;

  /// @brief Field info, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::System::Reflection::MonoPropertyInfo info;

  /// @brief Field klass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_klass, put = __cordl_internal_set_klass)) ::System::IntPtr klass;

  /// @brief Field prop, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prop, put = __cordl_internal_set_prop)) ::System::IntPtr prop;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CachePropertyInfo, addr 0x3cbe1e8, size 0x40, virtual false, abstract: false, final false
  inline void CachePropertyInfo(::System::Reflection::PInfo flags);

  /// @brief Method FormatNameAndSig, addr 0x3cbdfa4, size 0x170, virtual false, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetCustomAttributes, addr 0x3cbe794, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3cbe738, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDeclaringTypeInternal, addr 0x3cbde94, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetDeclaringTypeInternal();

  /// @brief Method GetGetMethod, addr 0x3cbe400, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);

  /// @brief Method GetIndexParameters, addr 0x3cbe484, size 0x1c4, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters();

  /// @brief Method GetObjectData, addr 0x3cbe114, size 0xcc, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPropertyFromHandle, addr 0x3cbec1c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetRuntimeModule, addr 0x3cbde78, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method GetSetMethod, addr 0x3cbe648, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);

  /// @brief Method GetValue, addr 0x3cbe800, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index);

  /// @brief Method GetValue, addr 0x3cbe820, size 0x1f4, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method GetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename R> static inline ::System::Object* GetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__Getter_2<T, R>* getter, ::System::Object* obj);

  /// @brief Method IsDefined, addr 0x3cbe6cc, size 0x6c, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::RuntimePropertyInfo* New_ctor();

  /// @brief Method SerializationToString, addr 0x3cbe1e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method SetValue, addr 0x3cbea14, size 0x1fc, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method StaticGetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename R> static inline ::System::Object* StaticGetterAdapterFrame(::System::Reflection::__RuntimePropertyInfo__StaticGetter_1<R>* getter, ::System::Object* obj);

  /// @brief Method ToString, addr 0x3cbdf9c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Reflection::PInfo const& __cordl_internal_get_cached() const;

  constexpr ::System::Reflection::PInfo& __cordl_internal_get_cached();

  constexpr ::System::Reflection::__RuntimePropertyInfo__GetterAdapter*& __cordl_internal_get_cached_getter();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__RuntimePropertyInfo__GetterAdapter*> const& __cordl_internal_get_cached_getter() const;

  constexpr ::System::Reflection::MonoPropertyInfo const& __cordl_internal_get_info() const;

  constexpr ::System::Reflection::MonoPropertyInfo& __cordl_internal_get_info();

  constexpr ::System::IntPtr const& __cordl_internal_get_klass() const;

  constexpr ::System::IntPtr& __cordl_internal_get_klass();

  constexpr ::System::IntPtr const& __cordl_internal_get_prop() const;

  constexpr ::System::IntPtr& __cordl_internal_get_prop();

  constexpr void __cordl_internal_set_cached(::System::Reflection::PInfo value);

  constexpr void __cordl_internal_set_cached_getter(::System::Reflection::__RuntimePropertyInfo__GetterAdapter* value);

  constexpr void __cordl_internal_set_info(::System::Reflection::MonoPropertyInfo value);

  constexpr void __cordl_internal_set_klass(::System::IntPtr value);

  constexpr void __cordl_internal_set_prop(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3cbecd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingFlags, addr 0x3cbde6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CanRead, addr 0x3cbe228, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x3cbe268, size 0x40, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_DeclaringType, addr 0x3cbe390, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_MetadataToken, addr 0x3cbec10, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x3cbde74, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x3cbe3c8, size 0x38, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PropertyType, addr 0x3cbe2a8, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_ReflectedType, addr 0x3cbe358, size 0x38, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x3cbdf18, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_metadata_token, addr 0x3cbec14, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimePropertyInfo* monoProperty);

  /// @brief Method get_property_info, addr 0x3cbde68, size 0x4, virtual false, abstract: false, final false
  static inline void get_property_info(::System::Reflection::RuntimePropertyInfo* prop, ByRef<::System::Reflection::MonoPropertyInfo> info, ::System::Reflection::PInfo req_info);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method internal_from_handle_type, addr 0x3cbec18, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePropertyInfo(RuntimePropertyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePropertyInfo(RuntimePropertyInfo const&) = delete;

  /// @brief Field klass, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___klass;

  /// @brief Field prop, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___prop;

  /// @brief Field info, offset: 0x20, size: 0x30, def value: None
  ::System::Reflection::MonoPropertyInfo ___info;

  /// @brief Field cached, offset: 0x50, size: 0x4, def value: None
  ::System::Reflection::PInfo ___cached;

  /// @brief Field cached_getter, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::__RuntimePropertyInfo__GetterAdapter* ___cached_getter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3535 };

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
