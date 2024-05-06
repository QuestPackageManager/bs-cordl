#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Delegate.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::get_Method)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297dabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "get_Method",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetVirtualMethod_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::GetVirtualMethod_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297dac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "GetVirtualMethod_internal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.get_Target
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Delegate::*)()>(&::System::Delegate::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "get_Target",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, bool)>(
    &::System::Delegate::CreateDelegate_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297dad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.arg_type_match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Delegate::arg_type_match)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x297dadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "arg_type_match", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.arg_type_match_this
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*, bool)>(&::System::Delegate::arg_type_match_this)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x297dc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "arg_type_match_this", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.return_type_match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Delegate::return_type_match)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x297ddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "return_type_match", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, bool, bool)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0x297dfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297e7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Reflection::MethodInfo*, bool)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x297e7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Reflection::MethodInfo*)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x297e7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297e810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetCandidateMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::System::Type*, ::StringW, ::System::Reflection::BindingFlags, bool, bool)>(&::System::Delegate::GetCandidateMethod)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x297e828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "GetCandidateMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Type*, ::StringW, bool, bool)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x297ec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Type*, ::StringW)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297edb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW, bool, bool)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x297edbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW, bool)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.DynamicInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Delegate::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Delegate::DynamicInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297ee9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "DynamicInvoke", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.InitializeDelegateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Delegate::*)()>(&::System::Delegate::InitializeDelegateData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x297eea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "InitializeDelegateData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.DynamicInvokeImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Delegate::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::Delegate::DynamicInvokeImpl)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x297ef90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Delegate::*)()>(&::System::Delegate::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297f250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Delegate::*)(::System::Object*)>(&::System::Delegate::Equals)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x297f258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Delegate::*)()>(&::System::Delegate::GetHashCode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x297f3fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetMethodImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::GetMethodImpl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x297f474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Delegate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Delegate::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297f57c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetInvocationList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> (::System::Delegate::*)()>(
    &::System::Delegate::GetInvocationList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x297f7c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::Combine)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x297a918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>)>(
    &::System::Delegate::Combine)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x297f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CombineImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::Delegate::*)(::System::Delegate*)>(&::System::Delegate::CombineImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x297f8bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::Remove)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x297ab24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.RemoveImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::Delegate::*)(::System::Delegate*)>(&::System::Delegate::RemoveImpl)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x297f918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x297f93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x297f964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.AllocDelegateLike_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::MulticastDelegate* (*)(::System::Delegate*)>(&::System::Delegate::AllocDelegateLike_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297f99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "AllocDelegateLike_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Delegate::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Delegate::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Delegate::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Delegate::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void*& System::Delegate::__cordl_internal_get_method_ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_ptr;
}
constexpr void* const& System::Delegate::__cordl_internal_get_method_ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_ptr;
}
constexpr void System::Delegate::__cordl_internal_set_method_ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_ptr = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_invoke_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invoke_impl;
}
constexpr void* const& System::Delegate::__cordl_internal_get_invoke_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invoke_impl;
}
constexpr void System::Delegate::__cordl_internal_set_invoke_impl(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invoke_impl = value;
}
constexpr ::System::Object*& System::Delegate::__cordl_internal_get_m_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_target;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Delegate::__cordl_internal_get_m_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_target;
}
constexpr void System::Delegate::__cordl_internal_set_m_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_target)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr void*& System::Delegate::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void* const& System::Delegate::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Delegate::__cordl_internal_set_method(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_delegate_trampoline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegate_trampoline;
}
constexpr void* const& System::Delegate::__cordl_internal_get_delegate_trampoline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegate_trampoline;
}
constexpr void System::Delegate::__cordl_internal_set_delegate_trampoline(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegate_trampoline = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_extra_arg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_arg;
}
constexpr void* const& System::Delegate::__cordl_internal_get_extra_arg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_arg;
}
constexpr void System::Delegate::__cordl_internal_set_extra_arg(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extra_arg = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_method_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_code;
}
constexpr void* const& System::Delegate::__cordl_internal_get_method_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_code;
}
constexpr void System::Delegate::__cordl_internal_set_method_code(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_code = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_interp_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_method;
}
constexpr void* const& System::Delegate::__cordl_internal_get_interp_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_method;
}
constexpr void System::Delegate::__cordl_internal_set_interp_method(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interp_method = value;
}
constexpr void*& System::Delegate::__cordl_internal_get_interp_invoke_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_invoke_impl;
}
constexpr void* const& System::Delegate::__cordl_internal_get_interp_invoke_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_invoke_impl;
}
constexpr void System::Delegate::__cordl_internal_set_interp_invoke_impl(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interp_invoke_impl = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Delegate::__cordl_internal_get_method_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_info;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& System::Delegate::__cordl_internal_get_method_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_info;
}
constexpr void System::Delegate::__cordl_internal_set_method_info(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method_info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::MethodInfo*& System::Delegate::__cordl_internal_get_original_method_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original_method_info;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& System::Delegate::__cordl_internal_get_original_method_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original_method_info;
}
constexpr void System::Delegate::__cordl_internal_set_original_method_info(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___original_method_info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DelegateData*& System::Delegate::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::System::DelegateData*> const& System::Delegate::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Delegate::__cordl_internal_set_data(::System::DelegateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Delegate::__cordl_internal_get_method_is_virtual() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_is_virtual;
}
constexpr bool const& System::Delegate::__cordl_internal_get_method_is_virtual() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_is_virtual;
}
constexpr void System::Delegate::__cordl_internal_set_method_is_virtual(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_is_virtual = value;
}
inline ::System::Reflection::MethodInfo* System::Delegate::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "get_Method",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetVirtualMethod_internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "GetVirtualMethod_internal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline ::System::Object* System::Delegate::get_Target() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "get_Target",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate_internal(::System::Type* type, ::System::Object* target, ::System::Reflection::MethodInfo* info, bool throwOnBindFailure) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate_internal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, info, throwOnBindFailure);
}
inline bool System::Delegate::arg_type_match(::System::Type* delArgType, ::System::Type* argType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "arg_type_match", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, delArgType, argType);
}
inline bool System::Delegate::arg_type_match_this(::System::Type* delArgType, ::System::Type* argType, bool boxedThis) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "arg_type_match_this", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, delArgType, argType, boxedThis);
}
inline bool System::Delegate::return_type_match(::System::Type* delReturnType, ::System::Type* returnType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "return_type_match", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, delReturnType, returnType);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure,
                                                            bool allowClosed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, firstArgument, method, throwOnBindFailure, allowClosed);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, firstArgument, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, method, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetCandidateMethod(::System::Type* type, ::System::Type* target, ::StringW method, ::System::Reflection::BindingFlags bflags,
                                                                              bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "GetCandidateMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(nullptr, ___internal_method, type, target, method, bflags, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, method, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, method, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "CreateDelegate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, type, target, method, ignoreCase);
}
inline ::System::Object* System::Delegate::DynamicInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "DynamicInvoke", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, args);
}
inline void System::Delegate::InitializeDelegateData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "InitializeDelegateData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Delegate::DynamicInvokeImpl(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, args);
}
inline ::System::Object* System::Delegate::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::Delegate::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Delegate::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetMethodImpl() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method);
}
inline void System::Delegate::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> System::Delegate::GetInvocationList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>, false>(this, ___internal_method);
}
inline ::System::Delegate* System::Delegate::Combine(::System::Delegate* a, ::System::Delegate* b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, a, b);
}
inline ::System::Delegate* System::Delegate::Combine(::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*> delegates) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Delegate*, ::Array<::System::Delegate*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, delegates);
}
inline ::System::Delegate* System::Delegate::CombineImpl(::System::Delegate* d) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, d);
}
inline ::System::Delegate* System::Delegate::Remove(::System::Delegate* source, ::System::Delegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(nullptr, ___internal_method, source, value);
}
inline ::System::Delegate* System::Delegate::RemoveImpl(::System::Delegate* d) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(this, ___internal_method, d);
}
inline bool System::Delegate::op_Equality(::System::Delegate* d1, ::System::Delegate* d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Delegate::op_Inequality(::System::Delegate* d1, ::System::Delegate* d2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
inline ::System::MulticastDelegate* System::Delegate::AllocDelegateLike_internal(::System::Delegate* d) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Delegate*>::get(), "AllocDelegateLike_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::MulticastDelegate*, false>(nullptr, ___internal_method, d);
}
// Ctor Parameters []
constexpr ::System::Delegate::Delegate() {}
