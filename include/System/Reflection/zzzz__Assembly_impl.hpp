#pragma once
// IWYU pragma private; include "System/Reflection/Assembly.hpp"
#include "System/Reflection/zzzz__ICustomAttributeProvider_impl.hpp"
#include "System/Runtime/InteropServices/zzzz___Assembly_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Assembly_ResolveEventHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Assembly_ResolveEventHolder::*)()>(
    &::System::Reflection::Assembly_ResolveEventHolder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly_ResolveEventHolder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Reflection::Assembly_ResolveEventHolder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly_ResolveEventHolder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly_ResolveEventHolder* System::Reflection::Assembly_ResolveEventHolder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::Assembly_ResolveEventHolder*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly_ResolveEventHolder::Assembly_ResolveEventHolder() {}
//  Writing Method size for method: ::System::Reflection::Assembly.get_CodeBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_FullName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_MonoAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b1b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_Location
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_Location)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b1f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Assembly::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::Assembly::GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Type*, bool)>(&::System::Reflection::Assembly::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b260;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::Assembly::*)(bool)>(
    &::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::Assembly::*)(::System::Type*, bool)>(
    &::System::Reflection::Assembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b2d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Reflection::Assembly::*)(bool)>(
    &::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b308;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (::System::Reflection::Assembly::*)()>(
    &::System::Reflection::Assembly::GetTypes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3d2b310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW)>(&::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3d2b324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.InternalGetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::System::Reflection::Module*, ::StringW, bool, bool)>(
    &::System::Reflection::Assembly::InternalGetType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d2b33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "InternalGetType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)(bool)>(
    &::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b348;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::Assembly::*)()>(
    &::System::Reflection::Assembly::GetName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3d2b380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::System::Type*)>(&::System::Reflection::Assembly::GetAssembly)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3d2b39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetAssembly", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::Load)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3d2b460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.ReflectionOnlyLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::ReflectionOnlyLoad)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3d2b488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "ReflectionOnlyLoad", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(&::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3d2b4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.load_with_partial_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(
    &::System::Reflection::Assembly::load_with_partial_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d2b4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "load_with_partial_name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*)>(
    &::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.LoadWithPartialName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW, ::System::Security::Policy::Evidence*, bool)>(
    &::System::Reflection::Assembly::LoadWithPartialName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3d2b4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModulesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3d2b550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetExecutingAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetExecutingAssembly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3d2b588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetExecutingAssembly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetCallingAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)()>(&::System::Reflection::Assembly::GetCallingAssembly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3d1d48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetCallingAssembly",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b5c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Assembly::*)(::System::Object*)>(&::System::Reflection::Assembly::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.CreateNIE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&::System::Reflection::Assembly::CreateNIE)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3d2b5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "CreateNIE",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.get_IsFullyTrusted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "get_IsFullyTrusted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::Assembly::*)(::StringW, bool, bool)>(
    &::System::Reflection::Assembly::GetType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3d2b64c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Reflection::Assembly::*)(::StringW)>(
    &::System::Reflection::Assembly::GetModule)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3d2b670;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.GetModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> (::System::Reflection::Assembly::*)(bool)>(&::System::Reflection::Assembly::GetModules)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3d2b694;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(
    &::System::Reflection::Assembly::op_Equality)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3d1d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*)>(
    &::System::Reflection::Assembly::op_Inequality)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3d2b6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Assembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Assembly::*)()>(&::System::Reflection::Assembly::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3d2b710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW System::Reflection::Assembly::get_CodeBase() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::get_FullName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::IntPtr System::Reflection::Assembly::get_MonoAssembly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::get_Location() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Reflection::Assembly::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline bool System::Reflection::Assembly::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::Assembly::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::Assembly::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Reflection::Assembly::GetTypes(bool exportedOnly) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method, exportedOnly);
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Reflection::Assembly::GetTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, name);
}
inline ::System::Type* System::Reflection::Assembly::InternalGetType(::System::Reflection::Module* _cordl_module, ::StringW name, bool throwOnError, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "InternalGetType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, _cordl_module, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName(bool copiedName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*, false>(this, ___internal_method, copiedName);
}
inline ::System::Reflection::AssemblyName* System::Reflection::Assembly::GetName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::Assembly::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetAssembly(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetAssembly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::Load(::StringW assemblyString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::ReflectionOnlyLoad(::StringW assemblyString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "ReflectionOnlyLoad", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, partialName);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::load_with_partial_name(::StringW name, ::System::Security::Policy::Evidence* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "load_with_partial_name", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, name, e);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, partialName, securityEvidence);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::LoadWithPartialName(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence, bool oldBehavior) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "LoadWithPartialName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, partialName, securityEvidence, oldBehavior);
}
inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> System::Reflection::Assembly::GetModulesInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*>, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetExecutingAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetExecutingAssembly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::GetCallingAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "GetCallingAssembly",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method);
}
inline int32_t System::Reflection::Assembly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::Assembly::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::System::Exception* System::Reflection::Assembly::CreateNIE() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "CreateNIE",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method);
}
inline bool System::Reflection::Assembly::get_IsFullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "get_IsFullyTrusted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Assembly::GetType(::StringW name, bool throwOnError, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::Module* System::Reflection::Assembly::GetModule(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> System::Reflection::Assembly::GetModules(bool getResourceModules) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*>, false>(this, ___internal_method, getResourceModules);
}
inline bool System::Reflection::Assembly::op_Equality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::Assembly::op_Inequality(::System::Reflection::Assembly* left, ::System::Reflection::Assembly* right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline void System::Reflection::Assembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Assembly*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Reflection::Assembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::Assembly*>());
}
/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr System::Reflection::Assembly::operator ::System::Reflection::ICustomAttributeProvider*() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* System::Reflection::Assembly::i___System__Reflection__ICustomAttributeProvider() noexcept {
  return static_cast<::System::Reflection::ICustomAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::Assembly::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Reflection::Assembly::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
constexpr System::Reflection::Assembly::operator ::System::Runtime::InteropServices::_Assembly*() noexcept {
  return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
constexpr ::System::Runtime::InteropServices::_Assembly* System::Reflection::Assembly::i___System__Runtime__InteropServices___Assembly() noexcept {
  return static_cast<::System::Runtime::InteropServices::_Assembly*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::Assembly::Assembly() {}
