#pragma once
#include "System/Reflection/zzzz__Assembly_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Reflection/zzzz__RuntimeAssembly_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x25e2ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeAssembly::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeAssembly::GetObjectData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x25e2b54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::RuntimeAssembly* (*)(::StringW, ::System::Security::Policy::Evidence*, ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25e2be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "LoadWithPartialNameInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.LoadWithPartialNameInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::RuntimeAssembly* (*)(::System::Reflection::AssemblyName*, ::System::Security::Policy::Evidence*, ByRef<::System::Threading::StackCrawlMark>)>(
        &::System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25e2c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "LoadWithPartialNameInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::AssemblyName* (::System::Reflection::RuntimeAssembly::*)(bool)>(
    &::System::Reflection::RuntimeAssembly::GetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e2c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeAssembly::*)(::StringW, bool, bool)>(
    &::System::Reflection::RuntimeAssembly::GetType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25e2c98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeAssembly::*)(::StringW)>(
    &::System::Reflection::RuntimeAssembly::GetModule)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x25e2d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> (
    ::System::Reflection::RuntimeAssembly::*)(bool)>(&::System::Reflection::RuntimeAssembly::GetModules)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25e2e8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetAotId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)()>(&::System::Reflection::RuntimeAssembly::GetAotId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x25e3020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetAotId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_code_base
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::Assembly*, bool)>(&::System::Reflection::RuntimeAssembly::get_code_base)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e307c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "get_code_base", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_fullname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::Assembly*)>(&::System::Reflection::RuntimeAssembly::get_fullname)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e3084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "get_fullname", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetAotIdInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Reflection::RuntimeAssembly::GetAotIdInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e3078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetAotIdInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCodeBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::Assembly*, bool)>(&::System::Reflection::RuntimeAssembly::GetCodeBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e3088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetCodeBase", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_CodeBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_CodeBase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e3090;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_FullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_FullName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e3098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.get_MonoAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::get_MonoAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e309c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetManifestResourceInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Reflection::RuntimeAssembly::*)(::StringW, ByRef<int32_t>, ByRef<::System::Reflection::Module*>)>(
    &::System::Reflection::RuntimeAssembly::GetManifestResourceInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e30a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetManifestResourceInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::Module*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeAssembly::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25e30a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeAssembly::*)(bool)>(
    &::System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x25e3118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeAssembly::*)(
    ::System::Type*, bool)>(&::System::Reflection::RuntimeAssembly::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25e3180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetModulesInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> (
    ::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::GetModulesInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25e31f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e31f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeAssembly::*)(::System::Object*)>(&::System::Reflection::RuntimeAssembly::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25e31fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeAssembly.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeAssembly::*)()>(&::System::Reflection::RuntimeAssembly::ToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25e329c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 3));
    return ___internal_method;
  }
};
constexpr void*& System::Reflection::RuntimeAssembly::__cordl_internal_get__mono_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_assembly;
}
constexpr void* const& System::Reflection::RuntimeAssembly::__cordl_internal_get__mono_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_assembly;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__mono_assembly(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mono_assembly = value;
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__evidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__evidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__evidence(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evidence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::__Assembly__ResolveEventHolder*& System::Reflection::RuntimeAssembly::__cordl_internal_get_resolve_event_holder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolve_event_holder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__Assembly__ResolveEventHolder*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get_resolve_event_holder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolve_event_holder;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_resolve_event_holder(::System::Reflection::__Assembly__ResolveEventHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resolve_event_holder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__minimum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimum;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__minimum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimum;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__minimum(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____minimum)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__optional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optional;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__optional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optional;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__optional(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__refuse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refuse;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__refuse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refuse;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__refuse(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refuse)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__granted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__granted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__granted(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____granted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Reflection::RuntimeAssembly::__cordl_internal_get__denied() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____denied;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Reflection::RuntimeAssembly::__cordl_internal_get__denied() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____denied;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set__denied(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____denied)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Reflection::RuntimeAssembly::__cordl_internal_get_fromByteArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromByteArray;
}
constexpr bool const& System::Reflection::RuntimeAssembly::__cordl_internal_get_fromByteArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromByteArray;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_fromByteArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromByteArray = value;
}
constexpr ::StringW& System::Reflection::RuntimeAssembly::__cordl_internal_get_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr ::StringW const& System::Reflection::RuntimeAssembly::__cordl_internal_get_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr void System::Reflection::RuntimeAssembly::__cordl_internal_set_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Reflection::RuntimeAssembly*>());
}
inline void System::Reflection::RuntimeAssembly::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeAssembly::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(::StringW partialName, ::System::Security::Policy::Evidence* securityEvidence,
                                                                                                               ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "LoadWithPartialNameInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(nullptr, ___internal_method, partialName, securityEvidence, stackMark);
}
inline ::System::Reflection::RuntimeAssembly* System::Reflection::RuntimeAssembly::LoadWithPartialNameInternal(::System::Reflection::AssemblyName* an,
                                                                                                               ::System::Security::Policy::Evidence* securityEvidence,
                                                                                                               ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "LoadWithPartialNameInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeAssembly*, false>(nullptr, ___internal_method, an, securityEvidence, stackMark);
}
inline ::System::Reflection::AssemblyName* System::Reflection::RuntimeAssembly::GetName(bool copiedName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::AssemblyName*, false>(this, ___internal_method, copiedName);
}
inline ::System::Type* System::Reflection::RuntimeAssembly::GetType(::StringW name, bool throwOnError, bool ignoreCase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, name, throwOnError, ignoreCase);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeAssembly::GetModule(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> System::Reflection::RuntimeAssembly::GetModules(bool getResourceModules) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*>, false>(this, ___internal_method, getResourceModules);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Reflection::RuntimeAssembly::GetAotId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetAotId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_code_base(::System::Reflection::Assembly* a, bool escaped) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "get_code_base", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a, escaped);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_fullname(::System::Reflection::Assembly* a) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "get_fullname", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a);
}
inline bool System::Reflection::RuntimeAssembly::GetAotIdInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> aotid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetAotIdInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, aotid);
}
inline ::StringW System::Reflection::RuntimeAssembly::GetCodeBase(::System::Reflection::Assembly* a, bool escaped) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetCodeBase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, a, escaped);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_CodeBase() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeAssembly::get_FullName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void* System::Reflection::RuntimeAssembly::get_MonoAssembly() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline void* System::Reflection::RuntimeAssembly::GetManifestResourceInternal(::StringW name, ByRef<int32_t> size, ByRef<::System::Reflection::Module*> _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), "GetManifestResourceInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Reflection::Module*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, name, size, _cordl_module);
}
inline bool System::Reflection::RuntimeAssembly::IsDefined(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeAssembly::GetCustomAttributes(bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeAssembly::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*> System::Reflection::RuntimeAssembly::GetModulesInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Module*, ::Array<::System::Reflection::Module*>*>, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeAssembly::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeAssembly::Equals(::System::Object* o) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::StringW System::Reflection::RuntimeAssembly::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeAssembly*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeAssembly::RuntimeAssembly() {}
