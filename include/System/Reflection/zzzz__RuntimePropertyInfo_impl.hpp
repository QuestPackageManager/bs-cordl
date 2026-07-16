#pragma once
// IWYU pragma private; include "System/Reflection/RuntimePropertyInfo.hpp"
#include "System/Reflection/zzzz__MonoPropertyInfo_impl.hpp"
#include "System/Reflection/zzzz__PInfo_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "Mono/zzzz__RuntimePropertyHandle_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__MonoPropertyInfo_def.hpp"
#include "System/Reflection/zzzz__PInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Reflection/zzzz__RuntimePropertyInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo_GetterAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimePropertyInfo_GetterAdapter::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Reflection::RuntimePropertyInfo_GetterAdapter::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b8f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo_GetterAdapter.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimePropertyInfo_GetterAdapter::*)(::System::Object*)>(
    &::System::Reflection::RuntimePropertyInfo_GetterAdapter::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8f738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(),
                                                                                          { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Reflection::RuntimePropertyInfo_GetterAdapter::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* System::Reflection::RuntimePropertyInfo_GetterAdapter::Invoke(::System::Object* _this) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, _this);
}
inline ::System::Reflection::RuntimePropertyInfo_GetterAdapter* System::Reflection::RuntimePropertyInfo_GetterAdapter::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimePropertyInfo_GetterAdapter*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimePropertyInfo_GetterAdapter::RuntimePropertyInfo_GetterAdapter() {}
template <typename T, typename R> inline void System::Reflection::RuntimePropertyInfo_Getter_2<T, R>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T, typename R> inline R System::Reflection::RuntimePropertyInfo_Getter_2<T, R>::Invoke(T _this) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<R>(this, ___internal_method, _this);
}
template <typename T, typename R>
inline ::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>* System::Reflection::RuntimePropertyInfo_Getter_2<T, R>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>*>(object, method));
}
// Ctor Parameters []
template <typename T, typename R> constexpr ::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>::RuntimePropertyInfo_Getter_2() {}
template <typename R> inline void System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename R> inline R System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<R>(this, ___internal_method);
}
template <typename R>
inline ::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>* System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>*>(object, method));
}
// Ctor Parameters []
template <typename R> constexpr ::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>::RuntimePropertyInfo_StaticGetter_1() {}
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_property_info
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::RuntimePropertyInfo*, ::by_ref<::System::Reflection::MonoPropertyInfo>, ::System::Reflection::PInfo)>(
    &::System::Reflection::RuntimePropertyInfo::get_property_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8e78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                             { "get_property_info",
                                                               {},
                                                               { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>(), ::i2c::type_of<::by_ref<::System::Reflection::MonoPropertyInfo>>(),
                                                                 ::i2c::type_of<::System::Reflection::PInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimePropertyInfo::*)()>(
    &::System::Reflection::RuntimePropertyInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8e790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "get_BindingFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8e798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetDeclaringTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::GetDeclaringTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8e7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "GetDeclaringTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimePropertyInfo::*)()>(
    &::System::Reflection::RuntimePropertyInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8e84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimePropertyInfo::*)()>(
    &::System::Reflection::RuntimePropertyInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b8e79c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "GetRuntimeModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8e8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.FormatNameAndSig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimePropertyInfo::*)(bool)>(&::System::Reflection::RuntimePropertyInfo::FormatNameAndSig)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b8e8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "FormatNameAndSig", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimePropertyInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimePropertyInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b8ea70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.SerializationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8eb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "SerializationToString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.CachePropertyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimePropertyInfo::*)(::System::Reflection::PInfo)>(
    &::System::Reflection::RuntimePropertyInfo::CachePropertyInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b8eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "CachePropertyInfo", {}, { ::i2c::type_of<::System::Reflection::PInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_CanRead)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b8eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_CanWrite)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b8ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_PropertyType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b8ec1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b8ecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b8ecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_Name)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b8ed34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetGetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimePropertyInfo::*)(bool)>(
    &::System::Reflection::RuntimePropertyInfo::GetGetMethod)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b8ed88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetIndexParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::RuntimePropertyInfo::*)()>(
    &::System::Reflection::RuntimePropertyInfo::GetIndexParameters)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5b8ee0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimePropertyInfo::*)(bool)>(
    &::System::Reflection::RuntimePropertyInfo::GetSetMethod)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b8efa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimePropertyInfo::*)(::System::Type*, bool)>(&::System::Reflection::RuntimePropertyInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b8f02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimePropertyInfo::*)(bool)>(
    &::System::Reflection::RuntimePropertyInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b8f09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimePropertyInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimePropertyInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b8f0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimePropertyInfo::*)(::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::Reflection::RuntimePropertyInfo::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b8f16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::RuntimePropertyInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                 ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimePropertyInfo::GetValue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b8f18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimePropertyInfo::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimePropertyInfo::SetValue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b8f354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::RuntimePropertyInfo*)>(&::System::Reflection::RuntimePropertyInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8f558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                                                           { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.internal_from_handle_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::System::IntPtr, ::System::IntPtr)>(
    &::System::Reflection::RuntimePropertyInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8f56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                             { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo.GetPropertyFromHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::Mono::RuntimePropertyHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::RuntimePropertyInfo::GetPropertyFromHandle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b8f570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                             { "GetPropertyFromHandle", {}, { ::i2c::type_of<::Mono::RuntimePropertyHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimePropertyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimePropertyInfo::*)()>(&::System::Reflection::RuntimePropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8f5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_klass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_klass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr void System::Reflection::RuntimePropertyInfo::__cordl_internal_set_klass(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___klass = value;
}
constexpr ::System::IntPtr& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_prop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prop;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_prop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prop;
}
constexpr void System::Reflection::RuntimePropertyInfo::__cordl_internal_set_prop(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prop = value;
}
constexpr ::System::Reflection::MonoPropertyInfo& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::System::Reflection::MonoPropertyInfo const& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void System::Reflection::RuntimePropertyInfo::__cordl_internal_set_info(::System::Reflection::MonoPropertyInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::System::Reflection::PInfo& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_cached() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached;
}
constexpr ::System::Reflection::PInfo const& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_cached() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached;
}
constexpr void System::Reflection::RuntimePropertyInfo::__cordl_internal_set_cached(::System::Reflection::PInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cached = value;
}
constexpr ::System::Reflection::RuntimePropertyInfo_GetterAdapter*& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_cached_getter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_getter;
}
constexpr ::System::Reflection::RuntimePropertyInfo_GetterAdapter* const& System::Reflection::RuntimePropertyInfo::__cordl_internal_get_cached_getter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cached_getter;
}
constexpr void System::Reflection::RuntimePropertyInfo::__cordl_internal_set_cached_getter(::System::Reflection::RuntimePropertyInfo_GetterAdapter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cached_getter = value;
}
inline void System::Reflection::RuntimePropertyInfo::get_property_info(::System::Reflection::RuntimePropertyInfo* prop, ::by_ref<::System::Reflection::MonoPropertyInfo> info,
                                                                       ::System::Reflection::PInfo req_info) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                           { "get_property_info",
                                                             {},
                                                             { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>(), ::i2c::type_of<::by_ref<::System::Reflection::MonoPropertyInfo>>(),
                                                               ::i2c::type_of<::System::Reflection::PInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prop, info, req_info);
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimePropertyInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "get_BindingFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::RuntimePropertyInfo::get_Module() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimePropertyInfo::GetDeclaringTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "GetDeclaringTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimePropertyInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimePropertyInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "GetRuntimeModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimePropertyInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimePropertyInfo::FormatNameAndSig(bool serialization) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "FormatNameAndSig", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serialization);
}
inline void System::Reflection::RuntimePropertyInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Reflection::RuntimePropertyInfo::SerializationToString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "SerializationToString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::RuntimePropertyInfo::CachePropertyInfo(::System::Reflection::PInfo flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "CachePropertyInfo", {}, { ::i2c::type_of<::System::Reflection::PInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags);
}
inline bool System::Reflection::RuntimePropertyInfo::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::RuntimePropertyInfo::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimePropertyInfo::get_PropertyType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimePropertyInfo::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimePropertyInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimePropertyInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimePropertyInfo::GetGetMethod(bool nonPublic) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::RuntimePropertyInfo::GetIndexParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimePropertyInfo::GetSetMethod(bool nonPublic) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline bool System::Reflection::RuntimePropertyInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimePropertyInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimePropertyInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
template <typename T, typename R>
inline ::System::Object* System::Reflection::RuntimePropertyInfo::GetterAdapterFrame(::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>* getter, ::System::Object* obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                           { "GetterAdapterFrame",
                                                             { ::i2c::class_of<T>(), ::i2c::class_of<R>() },
                                                             { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo_Getter_2<T, R>*>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<R>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, getter, obj);
}
template <typename R>
inline ::System::Object* System::Reflection::RuntimePropertyInfo::StaticGetterAdapterFrame(::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>* getter, ::System::Object* obj) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
          { "StaticGetterAdapterFrame", { ::i2c::class_of<R>() }, { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo_StaticGetter_1<R>*>(), ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<R>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, getter, obj);
}
inline ::System::Object* System::Reflection::RuntimePropertyInfo::GetValue(::System::Object* obj, ::ArrayW<::System::Object*> index) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, index);
}
inline ::System::Object* System::Reflection::RuntimePropertyInfo::GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                           ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, index, culture);
}
inline void System::Reflection::RuntimePropertyInfo::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                              ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, index, culture);
}
inline int32_t System::Reflection::RuntimePropertyInfo::get_MetadataToken() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimePropertyInfo::get_metadata_token(::System::Reflection::RuntimePropertyInfo* monoProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimePropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, monoProperty);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::RuntimePropertyInfo::internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                           { "internal_from_handle_type", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, event_handle, type_handle);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::RuntimePropertyInfo::GetPropertyFromHandle(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(),
                                                           { "GetPropertyFromHandle", {}, { ::i2c::type_of<::Mono::RuntimePropertyHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, handle, reflectedType);
}
inline void System::Reflection::RuntimePropertyInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimePropertyInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::RuntimePropertyInfo* System::Reflection::RuntimePropertyInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimePropertyInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimePropertyInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::RuntimePropertyInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimePropertyInfo::RuntimePropertyInfo() {}
