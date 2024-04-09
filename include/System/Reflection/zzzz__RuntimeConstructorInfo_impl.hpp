#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2770568;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x277056c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                               "GetRuntimeModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27705f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                               "get_BindingFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27705fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                               "get_ReflectedTypeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeConstructorInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2770680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.SerializationToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::SerializationToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x277075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                               "SerializationToString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.SerializationInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeConstructorInfo::SerializationInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2770770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "SerializationInvoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetMethodImplementationFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodImplAttributes (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2770888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> (
    ::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::GetParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27708b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParametersInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> (
    ::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::GetParametersInternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27708c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetParametersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::GetParametersCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27708cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, ByRef<::System::Exception*>)>(
        &::System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27708ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "InternalInvoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                     ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27708f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.DoInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                     ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeConstructorInfo::DoInvoke)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x27709f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "DoInvoke", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.InternalInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Reflection::RuntimeConstructorInfo::*)(::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>, bool)>(
        &::System::Reflection::RuntimeConstructorInfo::InternalInvoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2770be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "InternalInvoke", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::RuntimeConstructorInfo::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                                     ::System::Globalization::CultureInfo*)>(&::System::Reflection::RuntimeConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2770d48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_MethodHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeMethodHandle (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_MethodHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2770d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodAttributes (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2770d68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_CallingConvention
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CallingConventions (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_CallingConvention)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2770d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ContainsGenericParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2770d9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2770dc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2770dd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_Name)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2770dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeConstructorInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2770e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeConstructorInfo::*)(bool)>(
    &::System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2770e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeConstructorInfo::*)(
    ::System::Type*, bool)>(&::System::Reflection::RuntimeConstructorInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2770ee8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2770f58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_core_clr_security_level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2770fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                               "get_core_clr_security_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_IsSecurityCritical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2770fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeConstructorInfo::*)()>(
    &::System::Reflection::RuntimeConstructorInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2770fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::RuntimeConstructorInfo*)>(
    &::System::Reflection::RuntimeConstructorInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2770fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "get_metadata_token", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeConstructorInfo::*)()>(&::System::Reflection::RuntimeConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2770fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeConstructorInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::RuntimeConstructorInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void*& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_mhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void* const& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_mhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mhandle;
}
constexpr void System::Reflection::RuntimeConstructorInfo::__cordl_internal_set_mhandle(void* value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_reftype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Reflection::RuntimeConstructorInfo::__cordl_internal_get_reftype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reftype;
}
constexpr void System::Reflection::RuntimeConstructorInfo::__cordl_internal_set_reftype(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reftype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::Module* System::Reflection::RuntimeConstructorInfo::get_Module() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeConstructorInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                             "GetRuntimeModule", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*, false>(this, ___internal_method);
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeConstructorInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                             "get_BindingFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeConstructorInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                             "get_ReflectedTypeInternal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeConstructorInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::SerializationToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                             "SerializationToString", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeConstructorInfo::SerializationInvoke(::System::Object* target, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "SerializationInvoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, info, context);
}
inline ::System::Reflection::MethodImplAttributes System::Reflection::RuntimeConstructorInfo::GetMethodImplementationFlags() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodImplAttributes, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> System::Reflection::RuntimeConstructorInfo::GetParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> System::Reflection::RuntimeConstructorInfo::GetParametersInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::GetParametersCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters,
                                                                                    ByRef<::System::Exception*> exc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "InternalInvoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Exception*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, parameters, exc);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                            ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::DoInvoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                              ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "DoInvoke", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, invokeAttr, binder, parameters, culture);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::InternalInvoke(::System::Object* obj, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, bool wrapExceptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "InternalInvoke", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj, parameters, wrapExceptions);
}
inline ::System::Object* System::Reflection::RuntimeConstructorInfo::Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                            ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, invokeAttr, binder, parameters, culture);
}
inline ::System::RuntimeMethodHandle System::Reflection::RuntimeConstructorInfo::get_MethodHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeMethodHandle, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodAttributes System::Reflection::RuntimeConstructorInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodAttributes, false>(this, ___internal_method);
}
inline ::System::Reflection::CallingConventions System::Reflection::RuntimeConstructorInfo::get_CallingConvention() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::CallingConventions, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::get_ContainsGenericParameters() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeConstructorInfo::get_ReflectedType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeConstructorInfo::get_DeclaringType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::get_Name() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeConstructorInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline ::StringW System::Reflection::RuntimeConstructorInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_core_clr_security_level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(),
                                                                             "get_core_clr_security_level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Reflection::RuntimeConstructorInfo::get_IsSecurityCritical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_MetadataToken() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeConstructorInfo::get_metadata_token(::System::Reflection::RuntimeConstructorInfo* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), "get_metadata_token", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, method);
}
inline ::System::Reflection::RuntimeConstructorInfo* System::Reflection::RuntimeConstructorInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::RuntimeConstructorInfo*>());
}
inline void System::Reflection::RuntimeConstructorInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeConstructorInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeConstructorInfo::RuntimeConstructorInfo() {}
