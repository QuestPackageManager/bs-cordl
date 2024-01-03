#pragma once
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Reflection/zzzz__PInvokeAttributes_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__MethodAttributes_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__MethodImplAttributes_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "get_BindingFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Module
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24f3af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "get_ReflectedTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.FormatNameAndSig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)(bool)>(
    &::System::Reflection::RuntimeMethodInfo::FormatNameAndSig)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24f3b7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*, ::System::Object*)>(
    &::System::Reflection::RuntimeMethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24f3ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24f3cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24f3a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "GetRuntimeModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeMethodInfo::GetObjectData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24f3d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.SerializationToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24eedb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "SerializationToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(::System::RuntimeMethodHandle)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24f3ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleNoGenericCheck",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeMethodHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleNoGenericCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleNoGenericCheck", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeMethodHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(void*, void*)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e88d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleInternalType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodFromHandleInternalType_native
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (*)(void*, void*, bool)>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleInternalType_native", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Reflection::RuntimeMethodInfo::get_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_name", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_base_method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeMethodInfo* (*)(::System::Reflection::RuntimeMethodInfo*, bool)>(
    &::System::Reflection::RuntimeMethodInfo::get_base_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_base_method", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::RuntimeMethodInfo*)>(
    &::System::Reflection::RuntimeMethodInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_metadata_token", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetBaseDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetBaseDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetBaseMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetBaseMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetBaseMethod",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReturnParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ParameterInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ReturnParameter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3f34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ReturnType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24f3f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24f3f68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> (
    ::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetParameters)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24f3f94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParametersInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> (
    ::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24f4024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetParametersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24f4030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Reflection::RuntimeMethodInfo::*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ByRef<::System::Exception*>)>(
        &::System::Reflection::RuntimeMethodInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f4054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "InternalInvoke", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::RuntimeMethodInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeMethodInfo::Invoke)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x24f4058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.ConvertValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>,
    ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags)>(&::System::Reflection::RuntimeMethodInfo::ConvertValues)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x24f434c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "ConvertValues", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_MethodHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f4604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f460c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_CallingConvention
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CallingConventions (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24f4614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f4640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24f4648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_Name)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24f4674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeMethodInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f4688;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeMethodInfo::*)(bool)>(
    &::System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24f46f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeMethodInfo::*)(
    ::System::Type*, bool)>(&::System::Reflection::RuntimeMethodInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f4760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeMethodInfo::*)(
    ByRef<::System::Reflection::PInvokeAttributes>, ByRef<::StringW>, ByRef<::StringW>)>(&::System::Reflection::RuntimeMethodInfo::GetPInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f47d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetPInvoke", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::PInvokeAttributes>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x24f47d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (
    ::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x24f4940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "GetPseudoCustomAttributesData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetDllImportAttributeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CustomAttributeData* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData)> {
  constexpr static std::size_t size = 0x71c;
  constexpr static std::size_t addrs = 0x24f4b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "GetDllImportAttributeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.MakeGenericMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Reflection::RuntimeMethodInfo::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Reflection::RuntimeMethodInfo::MakeGenericMethod)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x24f5228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.MakeGenericMethod_impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (
    ::System::Reflection::RuntimeMethodInfo::*)(::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f5574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "MakeGenericMethod_impl", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f5578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition_impl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f557c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "GetGenericMethodDefinition_impl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.GetGenericMethodDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24f5580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsGenericMethodDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f55d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsGenericMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(&::System::Reflection::RuntimeMethodInfo::get_IsGenericMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f55d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24f55d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_core_clr_security_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Reflection::RuntimeMethodInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f56a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                               "get_core_clr_security_level", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeMethodInfo.get_IsSecurityCritical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeMethodInfo::*)()>(
    &::System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f56a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 32));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeMethodInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void*& System::Reflection::RuntimeMethodInfo::__get_mhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void* const& System::Reflection::RuntimeMethodInfo::__get_mhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_mhandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mhandle = value;
}
constexpr ::StringW& System::Reflection::RuntimeMethodInfo::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeMethodInfo::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Reflection::RuntimeMethodInfo::__get_reftype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Reflection::RuntimeMethodInfo::__get_reftype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr void System::Reflection::RuntimeMethodInfo::__set_reftype(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reftype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeMethodInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "get_BindingFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags, false>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeMethodInfo::get_Module() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeMethodInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "get_ReflectedTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::FormatNameAndSig(bool serialization) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, serialization);
}
inline ::System::Delegate* System::Reflection::RuntimeMethodInfo::CreateDelegate(::System::Type* delegateType, ::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, delegateType, target);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeMethodInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "GetRuntimeModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeMethodInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::SerializationToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "SerializationToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleNoGenericCheck",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeMethodHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleNoGenericCheck", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeMethodHandle>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, handle, reflectedType);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType(void* method_handle, void* type_handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleInternalType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, method_handle, type_handle);
}
inline ::System::Reflection::MethodBase* System::Reflection::RuntimeMethodInfo::GetMethodFromHandleInternalType_native(void* method_handle, void* type_handle, bool genericCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetMethodFromHandleInternalType_native", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*, false>(nullptr, ___internal_method, method_handle, type_handle, genericCheck);
}
inline ::System::Reflection::RuntimeMethodInfo* System::Reflection::RuntimeMethodInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::RuntimeMethodInfo*>());
}
inline void System::Reflection::RuntimeMethodInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::get_name(::System::Reflection::MethodBase* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_name", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, method);
}
inline ::System::Reflection::RuntimeMethodInfo* System::Reflection::RuntimeMethodInfo::get_base_method(::System::Reflection::RuntimeMethodInfo* method, bool definition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_base_method", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeMethodInfo*, false>(nullptr, ___internal_method, method, definition);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_metadata_token(::System::Reflection::RuntimeMethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "get_metadata_token", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeMethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetBaseDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetBaseMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetBaseMethod",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::RuntimeMethodInfo::get_ReturnParameter() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::RuntimeMethodInfo::GetMethodImplementationFlags() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> System::Reflection::RuntimeMethodInfo::GetParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> System::Reflection::RuntimeMethodInfo::GetParametersInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::GetParametersCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeMethodInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                                                               ByRef<::System::Exception*> exc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "InternalInvoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, parameters, exc);
}
inline ::System::Object* System::Reflection::RuntimeMethodInfo::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline void System::Reflection::RuntimeMethodInfo::ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args,
                                                                 ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pinfo,
                                                                 ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "ConvertValues", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, binder, args, pinfo, culture, invokeAttr);
}
inline ::System::RuntimeMethodHandle System::Reflection::RuntimeMethodInfo::get_MethodHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodAttributes System::Reflection::RuntimeMethodInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes, false>(this, ___internal_method);
}
inline ::System::Reflection::CallingConventions System::Reflection::RuntimeMethodInfo::get_CallingConvention() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeMethodInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeMethodInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeMethodInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline void System::Reflection::RuntimeMethodInfo::GetPInvoke(ByRef<::System::Reflection::PInvokeAttributes> flags, ByRef<::StringW> entryPoint, ByRef<::StringW> dllName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "GetPInvoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::PInvokeAttributes>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flags, entryPoint, dllName);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "GetPseudoCustomAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> System::Reflection::RuntimeMethodInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "GetPseudoCustomAttributesData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::CustomAttributeData* System::Reflection::RuntimeMethodInfo::GetDllImportAttributeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "GetDllImportAttributeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CustomAttributeData*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::MakeGenericMethod(::ArrayW<::System::Type*, ::Array<::System::Type*>*> methodInstantiation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, methodInstantiation);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::MakeGenericMethod_impl(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), "MakeGenericMethod_impl", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, types);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Reflection::RuntimeMethodInfo::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition_impl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "GetGenericMethodDefinition_impl", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::RuntimeMethodInfo::GetGenericMethodDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethodDefinition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsGenericMethod() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeMethodInfo::get_core_clr_security_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(),
                                                                             "get_core_clr_security_level", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Reflection::RuntimeMethodInfo::get_IsSecurityCritical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeMethodInfo*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeMethodInfo::RuntimeMethodInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
