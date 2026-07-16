#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeMethodInfo.hpp"
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__PInvokeAttributes_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_BindingFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Module
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8ac3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b8acdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.FormatNameAndSig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)(bool)>(&::System::Reflection::RuntimeMethodInfo::FormatNameAndSig)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b8ad64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*)>(&::System::Reflection::RuntimeMethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b8b108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*, ::System::Object*)>(
    &::System::Reflection::RuntimeMethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b8b124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b8b140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b8ac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetRuntimeModule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeMethodInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b8b1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                         { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.SerializationToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::SerializationToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b8b300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "SerializationToString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::RuntimeMethodHandle)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                                                           { "GetMethodFromHandleNoGenericCheck", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                { "GetMethodFromHandleNoGenericCheck", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::IntPtr, ::System::IntPtr)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                             { "GetMethodFromHandleInternalType", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType_native
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::System::IntPtr, ::System::IntPtr, bool)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8b3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                { "GetMethodFromHandleInternalType_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8b3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Reflection::RuntimeMethodInfo::get_name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b8b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_name", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_base_method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::RuntimeMethodInfo* (*)(::System::Reflection::RuntimeMethodInfo*, bool)>(
    &::System::Reflection::RuntimeMethodInfo::get_base_method)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8b3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                             { "get_base_method", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::RuntimeMethodInfo*)>(&::System::Reflection::RuntimeMethodInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8b3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetBaseDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetBaseDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetBaseMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetBaseMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8b404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetBaseMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReturnParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ParameterInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ReturnParameter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8b40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_ReturnType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8b410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8b43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8b450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetParameters)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b8b47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParametersInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParametersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b8b51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::RuntimeMethodInfo::*)(::System::Object*, ::ArrayW<::System::Object*>, ::by_ref<::System::Exception*>)>(
    &::System::Reflection::RuntimeMethodInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8b540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                            { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Reflection::RuntimeMethodInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*>,
                                                                               ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeMethodInfo::Invoke)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5b8b544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.ConvertValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Reflection::ParameterInfo*>,
                                                                ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags)>(&::System::Reflection::RuntimeMethodInfo::ConvertValues)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5b8b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                            { "ConvertValues",
                              {},
                              { ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                                ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_MethodHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b8bad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_CallingConvention
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CallingConventions (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8bae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b8bb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_Name)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b8bb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*, bool)>(&::System::Reflection::RuntimeMethodInfo::IsDefined)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8bb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeMethodInfo::*)(bool)>(&::System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b8bbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b8bc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)(::by_ref<::System::Reflection::PInvokeAttributes>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Reflection::RuntimeMethodInfo::GetPInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b8bccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                         { "GetPInvoke", {}, { ::i2c::type_of<::by_ref<::System::Reflection::PInvokeAttributes>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5b8bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b8be58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetDllImportAttributeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::CustomAttributeData* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5b8c034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetDllImportAttributeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.MakeGenericMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)(::ArrayW<::System::Type*>)>(
    &::System::Reflection::RuntimeMethodInfo::MakeGenericMethod)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5b8c6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.MakeGenericMethod_impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)(::ArrayW<::System::Type*>)>(
    &::System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8c9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "MakeGenericMethod_impl", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8c9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition_impl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8c9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetGenericMethodDefinition_impl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b8c9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsGenericMethodDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b8c9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsGenericMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_IsGenericMethod)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b8ca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b8ca38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_core_clr_security_level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Reflection::RuntimeMethodInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8cb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_core_clr_security_level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsSecurityCritical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b8cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 35 }));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_mhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr ::System::IntPtr const& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_mhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void System::Reflection::RuntimeMethodInfo::__cordl_internal_set_mhandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mhandle = value;
}
constexpr ::StringW& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeMethodInfo::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Type*& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_reftype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr ::System::Type* const& System::Reflection::RuntimeMethodInfo::__cordl_internal_get_reftype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr void System::Reflection::RuntimeMethodInfo::__cordl_internal_set_reftype(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reftype = value;
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeMethodInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_BindingFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeMethodInfo::get_Module() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_ReflectedTypeInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::FormatNameAndSig(bool serialization) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serialization);
}
inline ::System::Delegate* System::Reflection::RuntimeMethodInfo::CreateDelegate(::System::Type* delegateType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, delegateType);
}
inline ::System::Delegate* System::Reflection::RuntimeMethodInfo::CreateDelegate(::System::Type* delegateType, ::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, delegateType, target);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeMethodInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetRuntimeModule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*>(this, ___internal_method);
}
inline void System::Reflection::RuntimeMethodInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::SerializationToString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "SerializationToString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetMethodFromHandleNoGenericCheck", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                              { "GetMethodFromHandleNoGenericCheck", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, handle, reflectedType);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType(::System::IntPtr method_handle, ::System::IntPtr type_handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                           { "GetMethodFromHandleInternalType", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, method_handle, type_handle);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native(::System::IntPtr method_handle, ::System::IntPtr type_handle,
                                                                                                                       bool genericCheck) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                              { "GetMethodFromHandleInternalType_native", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, method_handle, type_handle, genericCheck);
}
inline void System::Reflection::RuntimeMethodInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::get_name(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_name", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, method);
}
inline ::System::Reflection::RuntimeMethodInfo* System::Reflection::RuntimeMethodInfo::get_base_method(::System::Reflection::RuntimeMethodInfo* method, bool definition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                                                           { "get_base_method", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeMethodInfo*>(nullptr, ___internal_method, method, definition);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_metadata_token(::System::Reflection::RuntimeMethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_metadata_token", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetBaseDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetBaseMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetBaseMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeMethodInfo::get_ReturnParameter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::RuntimeMethodInfo::GetParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::RuntimeMethodInfo::GetParametersInternal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::GetParametersCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeMethodInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*> parameters, ::by_ref<::System::Exception*> exc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                          { "InternalInvoke", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::by_ref<::System::Exception*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, parameters, exc);
}
inline ::System::Object* System::Reflection::RuntimeMethodInfo::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                       ::ArrayW<::System::Object*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline void System::Reflection::RuntimeMethodInfo::ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> args, ::ArrayW<::System::Reflection::ParameterInfo*> pinfo,
                                                                 ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                          { "ConvertValues",
                            {},
                            { ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(),
                              ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Reflection::BindingFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, binder, args, pinfo, culture, invokeAttr);
}
inline ::System::RuntimeMethodHandle System::Reflection::RuntimeMethodInfo::get_MethodHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle>(this, ___internal_method);
}
inline ::System::Reflection::MethodAttributes System::Reflection::RuntimeMethodInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes>(this, ___internal_method);
}
inline ::System::Reflection::CallingConventions System::Reflection::RuntimeMethodInfo::get_CallingConvention() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline void System::Reflection::RuntimeMethodInfo::GetPInvoke(::by_ref<::System::Reflection::PInvokeAttributes> flags, ::by_ref<::StringW> entryPoint, ::by_ref<::StringW> dllName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(),
                       { "GetPInvoke", {}, { ::i2c::type_of<::by_ref<::System::Reflection::PInvokeAttributes>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flags, entryPoint, dllName);
}
inline ::ArrayW<::System::Object*> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetPseudoCustomAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetPseudoCustomAttributesData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*>>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetDllImportAttributeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CustomAttributeData*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::MakeGenericMethod(::ArrayW<::System::Type*> methodInstantiation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, methodInstantiation);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl(::ArrayW<::System::Type*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "MakeGenericMethod_impl", {}, { ::i2c::type_of<::ArrayW<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, types);
}
inline ::ArrayW<::System::Type*> System::Reflection::RuntimeMethodInfo::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "GetGenericMethodDefinition_impl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_core_clr_security_level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), { "get_core_clr_security_level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::RuntimeMethodInfo*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeMethodInfo* System::Reflection::RuntimeMethodInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::RuntimeMethodInfo*>());
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeMethodInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::RuntimeMethodInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeMethodInfo::RuntimeMethodInfo() {}
