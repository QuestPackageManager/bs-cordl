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
class RuntimePropertyInfo_GetterAdapter;
}
namespace System::Reflection {
template <typename T, typename R> class RuntimePropertyInfo_Getter_2;
}
namespace System::Reflection {
template <typename R> class RuntimePropertyInfo_StaticGetter_1;
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
class RuntimePropertyInfo_GetterAdapter;
}
namespace System::Reflection {
template <typename T, typename R> class RuntimePropertyInfo_Getter_2;
}
namespace System::Reflection {
template <typename R> class RuntimePropertyInfo_StaticGetter_1;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimePropertyInfo);
MARK_REF_PTR_T(::System::Reflection::RuntimePropertyInfo_GetterAdapter);
MARK_GEN_REF_PTR_T(::System::Reflection::RuntimePropertyInfo_Getter_2);
MARK_GEN_REF_PTR_T(::System::Reflection::RuntimePropertyInfo_StaticGetter_1);
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimePropertyInfo/GetterAdapter
class CORDL_TYPE RuntimePropertyInfo_GetterAdapter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x59e1a70, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::System::Object* _this);

  static inline ::System::Reflection::RuntimePropertyInfo_GetterAdapter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x59e192c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyInfo_GetterAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_GetterAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePropertyInfo_GetterAdapter(RuntimePropertyInfo_GetterAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_GetterAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePropertyInfo_GetterAdapter(RuntimePropertyInfo_GetterAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimePropertyInfo_GetterAdapter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// cpp template
template <typename T, typename R>
// Is value type: false
// CS Name: System.Reflection.RuntimePropertyInfo/Getter`2<T,R>
class CORDL_TYPE RuntimePropertyInfo_Getter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke(T _this);

  static inline ::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyInfo_Getter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_Getter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePropertyInfo_Getter_2(RuntimePropertyInfo_Getter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_Getter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePropertyInfo_Getter_2(RuntimePropertyInfo_Getter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// cpp template
template <typename R>
// Is value type: false
// CS Name: System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>
class CORDL_TYPE RuntimePropertyInfo_StaticGetter_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline R Invoke();

  static inline ::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimePropertyInfo_StaticGetter_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_StaticGetter_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimePropertyInfo_StaticGetter_1(RuntimePropertyInfo_StaticGetter_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimePropertyInfo_StaticGetter_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimePropertyInfo_StaticGetter_1(RuntimePropertyInfo_StaticGetter_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3558 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
// Dependencies System.IntPtr, System.Reflection.MonoPropertyInfo, System.Reflection.PInfo, System.Reflection.PropertyInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimePropertyInfo
class CORDL_TYPE RuntimePropertyInfo : public ::System::Reflection::PropertyInfo {
public:
  // Declarations
  using GetterAdapter = ::System::Reflection::RuntimePropertyInfo_GetterAdapter;

  template <typename T, typename R> using Getter_2 = ::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>;

  template <typename R> using StaticGetter_1 = ::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>;

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
  __declspec(property(get = __cordl_internal_get_cached_getter, put = __cordl_internal_set_cached_getter)) ::System::Reflection::RuntimePropertyInfo_GetterAdapter* cached_getter;

  /// @brief Field info, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::System::Reflection::MonoPropertyInfo info;

  /// @brief Field klass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_klass, put = __cordl_internal_set_klass)) ::System::IntPtr klass;

  /// @brief Field prop, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prop, put = __cordl_internal_set_prop)) ::System::IntPtr prop;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CachePropertyInfo, addr 0x59e0e7c, size 0x40, virtual false, abstract: false, final false
  inline void CachePropertyInfo(::System::Reflection::PInfo flags);

  /// @brief Method FormatNameAndSig, addr 0x59e0c14, size 0x194, virtual false, abstract: false, final false
  inline ::StringW FormatNameAndSig(bool serialization);

  /// @brief Method GetCustomAttributes, addr 0x59e1434, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x59e13d4, size 0x60, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDeclaringTypeInternal, addr 0x59e0afc, size 0x88, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetDeclaringTypeInternal();

  /// @brief Method GetGetMethod, addr 0x59e10c0, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);

  /// @brief Method GetIndexParameters, addr 0x59e1144, size 0x19c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetIndexParameters();

  /// @brief Method GetObjectData, addr 0x59e0da8, size 0xcc, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetPropertyFromHandle, addr 0x59e18a8, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetRuntimeModule, addr 0x59e0ad4, size 0x28, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method GetSetMethod, addr 0x59e12e0, size 0x84, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);

  /// @brief Method GetValue, addr 0x59e14a4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index);

  /// @brief Method GetValue, addr 0x59e14c4, size 0x1c8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method GetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename R> static inline ::System::Object* GetterAdapterFrame(::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>* getter, ::System::Object* obj);

  /// @brief Method IsDefined, addr 0x59e1364, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::RuntimePropertyInfo* New_ctor();

  /// @brief Method SerializationToString, addr 0x59e0e74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW SerializationToString();

  /// @brief Method SetValue, addr 0x59e168c, size 0x1f0, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> index, ::System::Globalization::CultureInfo* culture);

  /// @brief Method StaticGetterAdapterFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename R> static inline ::System::Object* StaticGetterAdapterFrame(::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>* getter, ::System::Object* obj);

  /// @brief Method ToString, addr 0x59e0c0c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Reflection::PInfo const& __cordl_internal_get_cached() const;

  constexpr ::System::Reflection::PInfo& __cordl_internal_get_cached();

  constexpr ::System::Reflection::RuntimePropertyInfo_GetterAdapter* const& __cordl_internal_get_cached_getter() const;

  constexpr ::System::Reflection::RuntimePropertyInfo_GetterAdapter*& __cordl_internal_get_cached_getter();

  constexpr ::System::Reflection::MonoPropertyInfo const& __cordl_internal_get_info() const;

  constexpr ::System::Reflection::MonoPropertyInfo& __cordl_internal_get_info();

  constexpr ::System::IntPtr const& __cordl_internal_get_klass() const;

  constexpr ::System::IntPtr& __cordl_internal_get_klass();

  constexpr ::System::IntPtr const& __cordl_internal_get_prop() const;

  constexpr ::System::IntPtr& __cordl_internal_get_prop();

  constexpr void __cordl_internal_set_cached(::System::Reflection::PInfo value);

  constexpr void __cordl_internal_set_cached_getter(::System::Reflection::RuntimePropertyInfo_GetterAdapter* value);

  constexpr void __cordl_internal_set_info(::System::Reflection::MonoPropertyInfo value);

  constexpr void __cordl_internal_set_klass(::System::IntPtr value);

  constexpr void __cordl_internal_set_prop(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x59e1928, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingFlags, addr 0x59e0ac8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_CanRead, addr 0x59e0ebc, size 0x4c, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite, addr 0x59e0f08, size 0x4c, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_DeclaringType, addr 0x59e102c, size 0x40, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_MetadataToken, addr 0x59e187c, size 0x14, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x59e0ad0, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x59e106c, size 0x54, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_PropertyType, addr 0x59e0f54, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_ReflectedType, addr 0x59e0ff0, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x59e0b84, size 0x88, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_metadata_token, addr 0x59e1890, size 0x14, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimePropertyInfo* monoProperty);

  /// @brief Method get_property_info, addr 0x59e0ac4, size 0x4, virtual false, abstract: false, final false
  static inline void get_property_info(::System::Reflection::RuntimePropertyInfo* prop, ::ByRef<::System::Reflection::MonoPropertyInfo> info, ::System::Reflection::PInfo req_info);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method internal_from_handle_type, addr 0x59e18a4, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3559 };

  /// @brief Field klass, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___klass;

  /// @brief Field prop, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___prop;

  /// @brief Field info, offset: 0x20, size: 0x30, def value: None
  ::System::Reflection::MonoPropertyInfo ___info;

  /// @brief Field cached, offset: 0x50, size: 0x4, def value: None
  ::System::Reflection::PInfo ___cached;

  /// @brief Field cached_getter, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::RuntimePropertyInfo_GetterAdapter* ___cached_getter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___klass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___prop) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___cached) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimePropertyInfo, ___cached_getter) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimePropertyInfo, 0x60>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimePropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimePropertyInfo*, "System.Reflection", "RuntimePropertyInfo");
NEED_NO_BOX(::System::Reflection::RuntimePropertyInfo_GetterAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimePropertyInfo_GetterAdapter*, "System.Reflection", "RuntimePropertyInfo/GetterAdapter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::RuntimePropertyInfo_Getter_2, "System.Reflection", "RuntimePropertyInfo/Getter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Reflection::RuntimePropertyInfo_StaticGetter_1, "System.Reflection", "RuntimePropertyInfo/StaticGetter`1");
