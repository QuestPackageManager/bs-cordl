#pragma once
// IWYU pragma private; include "System/AppDomain.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__AppDomain_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
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
  constexpr static std::size_t addrs = 0x5adc3ec;

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
  constexpr static std::size_t addrs = 0x5adc3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getFriendlyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::getFriendlyName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adc3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getFriendlyName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_FriendlyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::get_FriendlyName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adc420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_FriendlyName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getCurDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)()>(&::System::AppDomain::getCurDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adc444;

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
  constexpr static std::size_t addrs = 0x5adc448;

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
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adc44c;

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
  constexpr static std::size_t addrs = 0x5adc450;

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
  constexpr static std::size_t addrs = 0x5adc458;

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
  constexpr static std::size_t addrs = 0x5adc45c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.LoadAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::LoadAssembly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5adc464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadAssembly", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.LoadSatellite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (
    ::System::AppDomain::*)(::System::Reflection::AssemblyName*, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::LoadSatellite)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5adc468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadSatellite", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5adc560;

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
    ::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool, ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5adc57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetDomainByID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AppDomain* (*)(int32_t)>(&::System::AppDomain::InternalSetDomainByID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc67c;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc684;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc68c;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc694;

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
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc69c;

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
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adc6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetDefaultContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::AppDomain::InternalGetDefaultContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adc6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "InternalGetDefaultContext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetProcessGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::AppDomain::InternalGetProcessGuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc6ec;

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
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5adc6f4;

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
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5adc75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetProcessGuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalIsFinalizingForUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::AppDomain::InternalIsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adc7cc;

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
  constexpr static std::size_t addrs = 0x5adc7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "IsFinalizingForUnload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getDomainID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::AppDomain::*)()>(&::System::AppDomain::getDomainID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5adc7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "getDomainID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5adc7fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoAssemblyLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::Reflection::Assembly*)>(&::System::AppDomain::DoAssemblyLoad)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5adc820;

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
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5adc8b4;

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
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5adccc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoTypeResolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoResourceResolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Reflection::Assembly*)>(
    &::System::AppDomain::DoResourceResolve)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5add048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoResourceResolve", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)()>(&::System::AppDomain::DoDomainUnload)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5add180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoDomainUnload",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetMarshalledDomainObjRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::AppDomain::*)()>(&::System::AppDomain::GetMarshalledDomainObjRef)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "GetMarshalledDomainObjRef",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ProcessMessageInDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::AppDomain::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>,
                                              ::ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>)>(&::System::AppDomain::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5add24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "ProcessMessageInDomain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_DomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::add_DomainUnload)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add380;

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
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_DomainUnload", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_ProcessExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::add_ProcessExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_ProcessExit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_ProcessExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::remove_ProcessExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_ProcessExit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_UnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomain::*)(::System::UnhandledExceptionEventHandler*)>(
    &::System::AppDomain::add_UnhandledException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add894;

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
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5add93c;

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
  constexpr static std::size_t addrs = 0x5add9e4;

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
  constexpr static std::size_t addrs = 0x5add9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_IsFullyTrusted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::AppDomain::__cordl_internal_get__mono_app_domain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_app_domain;
}
constexpr ::System::IntPtr const& System::AppDomain::__cordl_internal_get__mono_app_domain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mono_app_domain;
}
constexpr void System::AppDomain::__cordl_internal_set__mono_app_domain(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mono_app_domain = value;
}
constexpr ::System::Object*& System::AppDomain::__cordl_internal_get__evidence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evidence;
}
constexpr ::System::Object* const& System::AppDomain::__cordl_internal_get__evidence() const {
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
constexpr ::System::Object* const& System::AppDomain::__cordl_internal_get__granted() const {
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
constexpr ::System::AssemblyLoadEventHandler* const& System::AppDomain::__cordl_internal_get_AssemblyLoad() const {
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
constexpr ::System::ResolveEventHandler* const& System::AppDomain::__cordl_internal_get_AssemblyResolve() const {
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
constexpr ::System::EventHandler* const& System::AppDomain::__cordl_internal_get_DomainUnload() const {
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
constexpr ::System::EventHandler* const& System::AppDomain::__cordl_internal_get_ProcessExit() const {
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
constexpr ::System::ResolveEventHandler* const& System::AppDomain::__cordl_internal_get_ResourceResolve() const {
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
constexpr ::System::ResolveEventHandler* const& System::AppDomain::__cordl_internal_get_TypeResolve() const {
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
constexpr ::System::UnhandledExceptionEventHandler* const& System::AppDomain::__cordl_internal_get_UnhandledException() const {
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
constexpr ::System::EventHandler_1<::System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs*>* const& System::AppDomain::__cordl_internal_get_FirstChanceException() const {
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
constexpr ::System::Object* const& System::AppDomain::__cordl_internal_get__domain_manager() const {
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
constexpr ::System::ResolveEventHandler* const& System::AppDomain::__cordl_internal_get_ReflectionOnlyAssemblyResolve() const {
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
constexpr ::System::Object* const& System::AppDomain::__cordl_internal_get__activation() const {
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
constexpr ::System::Object* const& System::AppDomain::__cordl_internal_get__applicationIdentity() const {
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
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::AppDomain::__cordl_internal_get_compatibility_switch() const {
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
inline ::StringW System::AppDomain::get_FriendlyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "get_FriendlyName",
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
                                                                       ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadAssembly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyRef, securityEvidence, refOnly, stackMark);
}
inline ::System::Reflection::Assembly* System::AppDomain::LoadSatellite(::System::Reflection::AssemblyName* assemblyRef, bool throwOnError, ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "LoadSatellite", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyRef, throwOnError, stackMark);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, bool refonly,
                                                               ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Policy::Evidence*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::StackCrawlMark>>::get() })));
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
inline ::System::Reflection::Assembly* System::AppDomain::DoResourceResolve(::StringW name, ::System::Reflection::Assembly* requesting) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "DoResourceResolve", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method, name, requesting);
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
                                                      ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> arrResponse, ::ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> cadMrm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "ProcessMessageInDomain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>::get() })));
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
inline void System::AppDomain::add_ProcessExit(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "add_ProcessExit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_ProcessExit(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomain*>::get(), "remove_ProcessExit", std::span<Il2CppClass const* const, 0>(),
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
inline ::System::AppDomain* System::AppDomain::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::AppDomain*>());
}
// Ctor Parameters []
constexpr ::System::AppDomain::AppDomain() {}
