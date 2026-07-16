#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeConstructorInfo.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8cb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b8cb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "GetRuntimeModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8cbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_BindingFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8cbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeConstructorInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b8cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.SerializationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8cd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "SerializationToString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.SerializationInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeConstructorInfo::SerializationInvoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b8cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                             { "SerializationInvoke",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8ce58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8ce84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParametersInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8ce90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParametersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b8ce9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::ArrayW<::System::Object*>, ::by_ref<::System::Exception*>)>(&::System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8cebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                            { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                    ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b8cec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.DoInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                                    ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeConstructorInfo::DoInvoke)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5b8cfc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                { "DoInvoke",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                    ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::ArrayW<::System::Object*>, bool)>(
    &::System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b8d184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*,
                                                                                                                           ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b8d2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_MethodHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8d308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_CallingConvention
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CallingConventions (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8d314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8d340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8d374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_Name)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b8d3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeConstructorInfo::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8d3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeConstructorInfo::*)(bool)>(
    &::System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8d448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeConstructorInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8d4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_core_clr_security_level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_core_clr_security_level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_IsSecurityCritical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8d59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8d5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::RuntimeConstructorInfo*)>(&::System::Reflection::RuntimeConstructorInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8d5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                                                           { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b8d5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_mhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_mhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void System::Reflection::RuntimeConstructorInfo::__cordl_internal_set_mhandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mhandle = value;
}
constexpr ::StringW& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeConstructorInfo::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Type*& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_reftype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr ::System::Type* const& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_reftype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr void System::Reflection::RuntimeConstructorInfo::__cordl_internal_set_reftype(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reftype = value;
}
inline ::System::Reflection::Module* System::Reflection::RuntimeConstructorInfo::get_Module() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeConstructorInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "GetRuntimeModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(this, ___internal_method);
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeConstructorInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_BindingFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline void System::Reflection::RuntimeConstructorInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::SerializationToString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "SerializationToString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Reflection::RuntimeConstructorInfo::SerializationInvoke(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                           { "SerializationInvoke",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, info, context);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::RuntimeConstructorInfo::GetParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::RuntimeConstructorInfo::GetParametersInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::GetParametersCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*> parameters, ::by_ref<::System::Exception*> exc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                          { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, parameters, exc);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                            ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::DoInvoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                              ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                              { "DoInvoke",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(),
                                                  ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*> parameters, bool wrapExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                           { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, parameters, wrapExceptions);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> parameters,
                                                                            ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, invokeAttr, binder, parameters, culture);
}
inline ::System::RuntimeMethodHandle System::Reflection::RuntimeConstructorInfo::get_MethodHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline ::System::Reflection::MethodAttributes System::Reflection::RuntimeConstructorInfo::get_Attributes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Reflection::CallingConventions System::Reflection::RuntimeConstructorInfo::get_CallingConvention() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeConstructorInfo::get_ReflectedType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeConstructorInfo::get_DeclaringType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { "get_core_clr_security_level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_MetadataToken() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_metadata_token(::System::Reflection::RuntimeConstructorInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(),
                                                                                         { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, method);
}
inline void System::Reflection::RuntimeConstructorInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeConstructorInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::Reflection::RuntimeConstructorInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeConstructorInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeConstructorInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::RuntimeConstructorInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeConstructorInfo::RuntimeConstructorInfo() {}
