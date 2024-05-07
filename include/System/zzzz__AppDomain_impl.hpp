#pragma once
// IWYU pragma private; include "System/AppDomain.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__AppDomain_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__FirstChanceExceptionEventArgs_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodCallMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Security/Policy/zzzz__Evidence_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/zzzz__AssemblyLoadEventHandler_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ResolveEventHandler_def.hpp"
#include "System/zzzz__UnhandledExceptionEventHandler_def.hpp"
//  Writing Method size for method: ::System::AppDomain.IsAppXModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::AppDomain::IsAppXModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "IsAppXModel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)()>(&::System::AppDomain::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getFriendlyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::getFriendlyName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getFriendlyName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getCurDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)()>(&::System::AppDomain::getCurDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getCurDomain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_CurrentDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)()>(&::System::AppDomain::get_CurrentDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_CurrentDomain",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetAssemblies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> (::System::AppDomain::*)(bool)>(
    &::System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetAssemblies", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetAssemblies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> (::System::AppDomain::*)()>(
    &::System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetAssemblies",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::GetData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InitializeLifetimeService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::AppDomain::*)()>(&::System::AppDomain::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.LoadAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::LoadAssembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadAssembly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2979c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool, ByRef<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2979c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetDomainByID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)(int32_t)>(&::System::AppDomain::InternalSetDomainByID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetDomainByID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)(::System::AppDomain*)>(&::System::AppDomain::InternalSetDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetDomain", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AppDomain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalPushDomainRefByID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::AppDomain::InternalPushDomainRefByID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalPushDomainRefByID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalPopDomainRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::AppDomain::InternalPopDomainRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalPopDomainRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::AppDomain::InternalSetContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetContext", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::AppDomain::InternalGetContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetDefaultContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::AppDomain::InternalGetDefaultContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetDefaultContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetProcessGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::AppDomain::InternalGetProcessGuid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetProcessGuid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InvokeInDomainByID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Object* (*)(int32_t, ::System::Reflection::MethodInfo*, ::System::Object*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::AppDomain::InvokeInDomainByID)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2979da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InvokeInDomainByID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetProcessGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::AppDomain::GetProcessGuid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2979f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetProcessGuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalIsFinalizingForUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::AppDomain::InternalIsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalIsFinalizingForUnload", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.IsFinalizingForUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::IsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2979fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "IsFinalizingForUnload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getDomainID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::AppDomain::*)()>(&::System::AppDomain::getDomainID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2979fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getDomainID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2979fd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoAssemblyLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::Reflection::Assembly*)>(&::System::AppDomain::DoAssemblyLoad)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2979fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoAssemblyLoad", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoAssemblyResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Reflection::Assembly*, bool)>(
    &::System::AppDomain::DoAssemblyResolve)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x297a074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoAssemblyResolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoTypeResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::DoTypeResolve)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x297a384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoTypeResolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)()>(&::System::AppDomain::DoDomainUnload)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x297a654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoDomainUnload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetMarshalledDomainObjRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::AppDomain::*)()>(&::System::AppDomain::GetMarshalledDomainObjRef)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x297a678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetMarshalledDomainObjRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ProcessMessageInDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::AppDomain::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>,
                                              ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>)>(&::System::AppDomain::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x297a750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "ProcessMessageInDomain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_DomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::add_DomainUnload)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x297a880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_DomainUnload", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_DomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::remove_DomainUnload)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x297aa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_DomainUnload", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_UnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::UnhandledExceptionEventHandler*)>(
    &::System::AppDomain::add_UnhandledException)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x297ac94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_UnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::UnhandledExceptionEventHandler*)>(
    &::System::AppDomain::remove_UnhandledException)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x297ad2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_IsHomogenous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::get_IsHomogenous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297adc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_IsHomogenous",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_IsFullyTrusted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297adcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_IsFullyTrusted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr void*& System::AppDomain::__cordl_internal_get__mono_app_domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_app_domain;
}
constexpr void* const& System::AppDomain::__cordl_internal_get__mono_app_domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_app_domain;
}
constexpr void System::AppDomain::__cordl_internal_set__mono_app_domain(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mono_app_domain = value;
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__evidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomain::__cordl_internal_get__evidence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr void System::AppDomain::__cordl_internal_set__evidence(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____evidence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__granted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomain::__cordl_internal_get__granted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____granted;
}
constexpr void System::AppDomain::__cordl_internal_set__granted(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____granted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::AppDomain::__cordl_internal_get__principalPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____principalPolicy;
}
constexpr int32_t const& System::AppDomain::__cordl_internal_get__principalPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____principalPolicy;
}
constexpr void System::AppDomain::__cordl_internal_set__principalPolicy(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____principalPolicy = value;
}
constexpr ::System::AssemblyLoadEventHandler*& System::AppDomain::__cordl_internal_get_AssemblyLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyLoad;
}
constexpr ::cordl_internals::to_const_pointer<::System::AssemblyLoadEventHandler*> const& System::AppDomain::__cordl_internal_get_AssemblyLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyLoad;
}
constexpr void System::AppDomain::__cordl_internal_set_AssemblyLoad(::System::AssemblyLoadEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AssemblyLoad)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ResolveEventHandler*& System::AppDomain::__cordl_internal_get_AssemblyResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyResolve;
}
constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& System::AppDomain::__cordl_internal_get_AssemblyResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssemblyResolve;
}
constexpr void System::AppDomain::__cordl_internal_set_AssemblyResolve(::System::ResolveEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AssemblyResolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& System::AppDomain::__cordl_internal_get_DomainUnload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DomainUnload;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& System::AppDomain::__cordl_internal_get_DomainUnload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DomainUnload;
}
constexpr void System::AppDomain::__cordl_internal_set_DomainUnload(::System::EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DomainUnload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler*& System::AppDomain::__cordl_internal_get_ProcessExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProcessExit;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& System::AppDomain::__cordl_internal_get_ProcessExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ProcessExit;
}
constexpr void System::AppDomain::__cordl_internal_set_ProcessExit(::System::EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ProcessExit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ResolveEventHandler*& System::AppDomain::__cordl_internal_get_ResourceResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceResolve;
}
constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& System::AppDomain::__cordl_internal_get_ResourceResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ResourceResolve;
}
constexpr void System::AppDomain::__cordl_internal_set_ResourceResolve(::System::ResolveEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ResourceResolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ResolveEventHandler*& System::AppDomain::__cordl_internal_get_TypeResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeResolve;
}
constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& System::AppDomain::__cordl_internal_get_TypeResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TypeResolve;
}
constexpr void System::AppDomain::__cordl_internal_set_TypeResolve(::System::ResolveEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TypeResolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::UnhandledExceptionEventHandler*& System::AppDomain::__cordl_internal_get_UnhandledException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnhandledException;
}
constexpr ::cordl_internals::to_const_pointer<::System::UnhandledExceptionEventHandler*> const& System::AppDomain::__cordl_internal_get_UnhandledException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnhandledException;
}
constexpr void System::AppDomain::__cordl_internal_set_UnhandledException(::System::UnhandledExceptionEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___UnhandledException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*& System::AppDomain::__cordl_internal_get_FirstChanceException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FirstChanceException;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>*> const&
System::AppDomain::__cordl_internal_get_FirstChanceException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FirstChanceException;
}
constexpr void System::AppDomain::__cordl_internal_set_FirstChanceException(::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FirstChanceException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__domain_manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain_manager;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomain::__cordl_internal_get__domain_manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____domain_manager;
}
constexpr void System::AppDomain::__cordl_internal_set__domain_manager(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____domain_manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ResolveEventHandler*& System::AppDomain::__cordl_internal_get_ReflectionOnlyAssemblyResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReflectionOnlyAssemblyResolve;
}
constexpr ::cordl_internals::to_const_pointer<::System::ResolveEventHandler*> const& System::AppDomain::__cordl_internal_get_ReflectionOnlyAssemblyResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReflectionOnlyAssemblyResolve;
}
constexpr void System::AppDomain::__cordl_internal_set_ReflectionOnlyAssemblyResolve(::System::ResolveEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReflectionOnlyAssemblyResolve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__activation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomain::__cordl_internal_get__activation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activation;
}
constexpr void System::AppDomain::__cordl_internal_set__activation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__applicationIdentity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationIdentity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::AppDomain::__cordl_internal_get__applicationIdentity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applicationIdentity;
}
constexpr void System::AppDomain::__cordl_internal_set__applicationIdentity(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applicationIdentity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::AppDomain::__cordl_internal_get_compatibility_switch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatibility_switch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& System::AppDomain::__cordl_internal_get_compatibility_switch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compatibility_switch;
}
constexpr void System::AppDomain::__cordl_internal_set_compatibility_switch(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___compatibility_switch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::AppDomain::setStaticF__process_guid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_process_guid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::AppDomain::getStaticF__process_guid() {
  return ::cordl_internals::getStaticField<::StringW, "_process_guid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>();
}
inline void System::AppDomain::setStaticF_type_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "type_resolve_in_progress",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_type_resolve_in_progress() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "type_resolve_in_progress",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>();
}
inline void System::AppDomain::setStaticF_assembly_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_assembly_resolve_in_progress() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>();
}
inline void System::AppDomain::setStaticF_assembly_resolve_in_progress_refonly(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress_refonly",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_assembly_resolve_in_progress_refonly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress_refonly",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get>();
}
inline bool System::AppDomain::IsAppXModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "IsAppXModel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::AppDomain*>());
}
inline void System::AppDomain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::AppDomain::getFriendlyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getFriendlyName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::getCurDomain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getCurDomain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*, false>(nullptr, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::get_CurrentDomain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_CurrentDomain",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> System::AppDomain::GetAssemblies(bool refOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetAssemblies", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, false>(this, ___internal_method, refOnly);
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> System::AppDomain::GetAssemblies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetAssemblies",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, false>(this, ___internal_method);
}
inline ::System::Object* System::AppDomain::GetData(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
inline ::System::Object* System::AppDomain::InitializeLifetimeService() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::AppDomain::LoadAssembly(::StringW assemblyRef, ::System::Security::Policy::Evidence* securityEvidence, bool refOnly,
                                                                       ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadAssembly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyRef, securityEvidence, refOnly, stackMark);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, bool refonly,
                                                               ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyString, assemblySecurity, refonly, stackMark);
}
inline ::System::AppDomain* System::AppDomain::InternalSetDomainByID(int32_t domain_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetDomainByID", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*, false>(nullptr, ___internal_method, domain_id);
}
inline ::System::AppDomain* System::AppDomain::InternalSetDomain(::System::AppDomain* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetDomain", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AppDomain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*, false>(nullptr, ___internal_method, context);
}
inline void System::AppDomain::InternalPushDomainRefByID(int32_t domain_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalPushDomainRefByID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, domain_id);
}
inline void System::AppDomain::InternalPopDomainRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalPopDomainRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalSetContext(::System::Runtime::Remoting::Contexts::Context* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalSetContext", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method, context);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetDefaultContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetDefaultContext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method);
}
inline ::StringW System::AppDomain::InternalGetProcessGuid(::StringW newguid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetProcessGuid", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, newguid);
}
inline ::System::Object* System::AppDomain::InvokeInDomainByID(int32_t domain_id, ::System::Reflection::MethodInfo* method, ::System::Object* obj,
                                                               ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InvokeInDomainByID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, domain_id, method, obj, args);
}
inline ::StringW System::AppDomain::GetProcessGuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetProcessGuid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool System::AppDomain::InternalIsFinalizingForUnload(int32_t domain_id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalIsFinalizingForUnload",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, domain_id);
}
inline bool System::AppDomain::IsFinalizingForUnload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "IsFinalizingForUnload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::AppDomain::getDomainID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getDomainID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::AppDomain::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::AppDomain::DoAssemblyLoad(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoAssemblyLoad", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assembly);
}
inline ::System::Reflection::Assembly* System::AppDomain::DoAssemblyResolve(::StringW name, ::System::Reflection::Assembly* requestingAssembly, bool refonly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoAssemblyResolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, name, requestingAssembly, refonly);
}
inline ::System::Reflection::Assembly* System::AppDomain::DoTypeResolve(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoTypeResolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, name);
}
inline void System::AppDomain::DoDomainUnload() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoDomainUnload",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::AppDomain::GetMarshalledDomainObjRef() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetMarshalledDomainObjRef",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::AppDomain::ProcessMessageInDomain(::ArrayW<uint8_t, ::Array<uint8_t>*> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg,
                                                      ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> arrResponse, ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> cadMrm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "ProcessMessageInDomain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrRequest, cadMsg, arrResponse, cadMrm);
}
inline void System::AppDomain::add_DomainUnload(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_DomainUnload", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_DomainUnload(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_DomainUnload", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::AppDomain::add_UnhandledException(::System::UnhandledExceptionEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_UnhandledException(::System::UnhandledExceptionEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::AppDomain::get_IsHomogenous() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_IsHomogenous",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::AppDomain::get_IsFullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_IsFullyTrusted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::AppDomain::AppDomain() {}
