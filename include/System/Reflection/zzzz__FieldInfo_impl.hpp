#pragma once
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CustomAttributeData_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Runtime/InteropServices/zzzz__MarshalAsAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TypedReference_def.hpp"
//  Writing Method size for method: ::System::Reflection::FieldInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25058b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25058c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldAttributes (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_FieldType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsInitOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsInitOnly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25058c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsInitOnly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsLiteral)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25058e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsLiteral",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsNotSerialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsNotSerialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2505908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsNotSerialized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2505928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsStatic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsPrivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsPrivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2505948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsPrivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_IsPublic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2505970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsPublic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_FieldHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeFieldHandle (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::FieldInfo::*)(::System::Object*)>(&::System::Reflection::FieldInfo::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2505998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25059a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(
    &::System::Reflection::FieldInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25059a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(
    &::System::Reflection::FieldInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25059d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::FieldInfo::*)(::System::Object*)>(
    &::System::Reflection::FieldInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::FieldInfo::*)(::System::Object*, ::System::Object*)>(
    &::System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2505a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::FieldInfo::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(&::System::Reflection::FieldInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.SetValueDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::FieldInfo::*)(::System::TypedReference, ::System::Object*)>(
    &::System::Reflection::FieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2505a9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetRawConstantValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2505aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.internal_from_handle_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (*)(void*, void*)>(&::System::Reflection::FieldInfo::internal_from_handle_type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2505b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "internal_from_handle_type", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldFromHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (*)(::System::RuntimeFieldHandle)>(
    &::System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2505b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "GetFieldFromHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeFieldHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldFromHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle)>(
    &::System::Reflection::FieldInfo::GetFieldFromHandle)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2505bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "GetFieldFromHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeFieldHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetFieldOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2505ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.get_marshal_info
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::MarshalAsAttribute* (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::get_marshal_info)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2505d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_marshal_info",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetPseudoCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::FieldInfo::*)()>(
    &::System::Reflection::FieldInfo::GetPseudoCustomAttributes)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2505d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                               "GetPseudoCustomAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::FieldInfo.GetPseudoCustomAttributesData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> (
    ::System::Reflection::FieldInfo::*)()>(&::System::Reflection::FieldInfo::GetPseudoCustomAttributesData)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x2505f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                               "GetPseudoCustomAttributesData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::FieldInfo*>());
}
inline void System::Reflection::FieldInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::FieldInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes, false>(this, ___internal_method);
}
inline ::System::Reflection::FieldAttributes System::Reflection::FieldInfo::get_Attributes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::FieldInfo::get_FieldType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsInitOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsInitOnly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsLiteral() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsLiteral",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsNotSerialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsNotSerialized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsStatic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsPrivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsPrivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::get_IsPublic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_IsPublic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::RuntimeFieldHandle System::Reflection::FieldInfo::get_FieldHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::FieldInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::FieldInfo::op_Equality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::FieldInfo::op_Inequality(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::System::Object* System::Reflection::FieldInfo::GetValue(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
inline void System::Reflection::FieldInfo::SetValue(::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, value);
}
inline void System::Reflection::FieldInfo::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                    ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Reflection::FieldInfo::SetValueDirect(::System::TypedReference obj, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, value);
}
inline ::System::Object* System::Reflection::FieldInfo::GetRawConstantValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::internal_from_handle_type(void* field_handle, void* type_handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "internal_from_handle_type", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(nullptr, ___internal_method, field_handle, type_handle);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::GetFieldFromHandle(::System::RuntimeFieldHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "GetFieldFromHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeFieldHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(nullptr, ___internal_method, handle);
}
inline ::System::Reflection::FieldInfo* System::Reflection::FieldInfo::GetFieldFromHandle(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "GetFieldFromHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeFieldHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(nullptr, ___internal_method, handle, declaringType);
}
inline int32_t System::Reflection::FieldInfo::GetFieldOffset() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::MarshalAsAttribute* System::Reflection::FieldInfo::get_marshal_info() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(), "get_marshal_info",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::MarshalAsAttribute*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::FieldInfo::GetPseudoCustomAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                             "GetPseudoCustomAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> System::Reflection::FieldInfo::GetPseudoCustomAttributesData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::FieldInfo*>::get(),
                                                                             "GetPseudoCustomAttributesData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::FieldInfo::FieldInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
