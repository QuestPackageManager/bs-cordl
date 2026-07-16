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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::AppDomain::IsAppXModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "IsAppXModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)()>(&::System::AppDomain::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getFriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::getFriendlyName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getFriendlyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_FriendlyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::get_FriendlyName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_FriendlyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getCurDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AppDomain* (*)()>(&::System::AppDomain::getCurDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getCurDomain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_CurrentDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AppDomain* (*)()>(&::System::AppDomain::get_CurrentDomain)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_CurrentDomain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (::System::AppDomain::*)(bool)>(&::System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetAssemblies", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetAssemblies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::Assembly*> (::System::AppDomain::*)()>(&::System::AppDomain::GetAssemblies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetAssemblies", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::GetData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InitializeLifetimeService
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::AppDomain::*)()>(&::System::AppDomain::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { ::i2c::class_of<::System::AppDomain*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.LoadAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool,
                                                                                                                ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::LoadAssembly)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c8a1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "LoadAssembly",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.LoadSatellite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::System::Reflection::AssemblyName*, bool,
                                                                                                                ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::LoadSatellite)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c8a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::AppDomain*>(),
                         { "LoadSatellite", {}, { ::i2c::type_of<::System::Reflection::AssemblyName*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c8a2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Security::Policy::Evidence*, bool,
                                                                                                                ::by_ref<::System::Threading::StackCrawlMark>)>(&::System::AppDomain::Load)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c8a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "Load",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetDomainByID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AppDomain* (*)(int32_t)>(&::System::AppDomain::InternalSetDomainByID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetDomainByID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::AppDomain* (*)(::System::AppDomain*)>(&::System::AppDomain::InternalSetDomain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetDomain", {}, { ::i2c::type_of<::System::AppDomain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalPushDomainRefByID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::AppDomain::InternalPushDomainRefByID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalPushDomainRefByID", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalPopDomainRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::AppDomain::InternalPopDomainRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalPopDomainRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalSetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::AppDomain::InternalSetContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::AppDomain::InternalGetContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetDefaultContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::AppDomain::InternalGetDefaultContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a40c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetDefaultContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalGetProcessGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::AppDomain::InternalGetProcessGuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetProcessGuid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InvokeInDomainByID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(int32_t, ::System::Reflection::MethodInfo*, ::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::AppDomain::InvokeInDomainByID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c8a438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InvokeInDomainByID",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                                                                          ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetProcessGuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::AppDomain::GetProcessGuid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c8a4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetProcessGuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.InternalIsFinalizingForUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::AppDomain::InternalIsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8a510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalIsFinalizingForUnload", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.IsFinalizingForUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::IsFinalizingForUnload)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c8a518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "IsFinalizingForUnload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.getDomainID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::AppDomain::*)()>(&::System::AppDomain::getDomainID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c8a52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getDomainID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::AppDomain::*)()>(&::System::AppDomain::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8a540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { ::i2c::class_of<::System::AppDomain*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoAssemblyLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::Reflection::Assembly*)>(&::System::AppDomain::DoAssemblyLoad)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c8a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoAssemblyLoad", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoAssemblyResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Reflection::Assembly*, bool)>(
    &::System::AppDomain::DoAssemblyResolve)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5c8a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(),
                                                             { "DoAssemblyResolve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoTypeResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW)>(&::System::AppDomain::DoTypeResolve)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5c8aa08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoTypeResolve", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoResourceResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::AppDomain::*)(::StringW, ::System::Reflection::Assembly*)>(&::System::AppDomain::DoResourceResolve)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c8ad8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoResourceResolve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.DoDomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)()>(&::System::AppDomain::DoDomainUnload)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c8aec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoDomainUnload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.GetMarshalledDomainObjRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::AppDomain::*)()>(&::System::AppDomain::GetMarshalledDomainObjRef)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8aee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetMarshalledDomainObjRef", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.ProcessMessageInDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::ArrayW<uint8_t>, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*, ::by_ref<::ArrayW<uint8_t>>,
                                                                                     ::by_ref<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>)>(
    &::System::AppDomain::ProcessMessageInDomain)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c8af90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(),
                                                { "ProcessMessageInDomain",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                    ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_DomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::add_DomainUnload)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_DomainUnload", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_DomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::remove_DomainUnload)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_DomainUnload", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_ProcessExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::add_ProcessExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_ProcessExit", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_ProcessExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::EventHandler*)>(&::System::AppDomain::remove_ProcessExit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_ProcessExit", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.add_UnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::UnhandledExceptionEventHandler*)>(&::System::AppDomain::add_UnhandledException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_UnhandledException", {}, { ::i2c::type_of<::System::UnhandledExceptionEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.remove_UnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AppDomain::*)(::System::UnhandledExceptionEventHandler*)>(&::System::AppDomain::remove_UnhandledException)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c8b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_UnhandledException", {}, { ::i2c::type_of<::System::UnhandledExceptionEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_IsHomogenous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::get_IsHomogenous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8b728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_IsHomogenous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AppDomain.get_IsFullyTrusted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::AppDomain::*)()>(&::System::AppDomain::get_IsFullyTrusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c8b730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_IsFullyTrusted", {}, {} })));
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
  this->____evidence = value;
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
  this->____granted = value;
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
  this->___AssemblyLoad = value;
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
  this->___AssemblyResolve = value;
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
  this->___DomainUnload = value;
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
  this->___ProcessExit = value;
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
  this->___ResourceResolve = value;
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
  this->___TypeResolve = value;
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
  this->___UnhandledException = value;
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
  this->___FirstChanceException = value;
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
  this->____domain_manager = value;
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
  this->___ReflectionOnlyAssemblyResolve = value;
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
  this->____activation = value;
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
  this->____applicationIdentity = value;
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
  this->___compatibility_switch = value;
}
inline void System::AppDomain::setStaticF__process_guid(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "_process_guid", ::System::AppDomain*>(std::forward<::StringW>(value));
}
inline ::StringW System::AppDomain::getStaticF__process_guid() {
  return ::cordl_internals::getStaticField<::StringW, "_process_guid", ::System::AppDomain*>();
}
inline void System::AppDomain::setStaticF_type_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "type_resolve_in_progress", ::System::AppDomain*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_type_resolve_in_progress() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "type_resolve_in_progress", ::System::AppDomain*>();
}
inline void System::AppDomain::setStaticF_assembly_resolve_in_progress(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress", ::System::AppDomain*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_assembly_resolve_in_progress() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress", ::System::AppDomain*>();
}
inline void System::AppDomain::setStaticF_assembly_resolve_in_progress_refonly(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress_refonly", ::System::AppDomain*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* System::AppDomain::getStaticF_assembly_resolve_in_progress_refonly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*, "assembly_resolve_in_progress_refonly", ::System::AppDomain*>();
}
inline bool System::AppDomain::IsAppXModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "IsAppXModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::AppDomain::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::AppDomain::getFriendlyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getFriendlyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::AppDomain::get_FriendlyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_FriendlyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::getCurDomain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getCurDomain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*>(nullptr, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::get_CurrentDomain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_CurrentDomain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Reflection::Assembly*> System::AppDomain::GetAssemblies(bool refOnly) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetAssemblies", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(this, ___internal_method, refOnly);
}
inline ::ArrayW<::System::Reflection::Assembly*> System::AppDomain::GetAssemblies() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetAssemblies", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*>>(this, ___internal_method);
}
inline ::System::Object* System::AppDomain::GetData(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Object* System::AppDomain::InitializeLifetimeService() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AppDomain*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::AppDomain::LoadAssembly(::StringW assemblyRef, ::System::Security::Policy::Evidence* securityEvidence, bool refOnly,
                                                                       ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "LoadAssembly",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                                        ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, assemblyRef, securityEvidence, refOnly, stackMark);
}
inline ::System::Reflection::Assembly* System::AppDomain::LoadSatellite(::System::Reflection::AssemblyName* assemblyRef, bool throwOnError, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::AppDomain*>(),
                       { "LoadSatellite", {}, { ::i2c::type_of<::System::Reflection::AssemblyName*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, assemblyRef, throwOnError, stackMark);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "Load", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, assemblyString);
}
inline ::System::Reflection::Assembly* System::AppDomain::Load(::StringW assemblyString, ::System::Security::Policy::Evidence* assemblySecurity, bool refonly,
                                                               ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "Load",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Policy::Evidence*>(),
                                                                                                        ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, assemblyString, assemblySecurity, refonly, stackMark);
}
inline ::System::AppDomain* System::AppDomain::InternalSetDomainByID(int32_t domain_id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetDomainByID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*>(nullptr, ___internal_method, domain_id);
}
inline ::System::AppDomain* System::AppDomain::InternalSetDomain(::System::AppDomain* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetDomain", {}, { ::i2c::type_of<::System::AppDomain*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::AppDomain*>(nullptr, ___internal_method, context);
}
inline void System::AppDomain::InternalPushDomainRefByID(int32_t domain_id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalPushDomainRefByID", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, domain_id);
}
inline void System::AppDomain::InternalPopDomainRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalPopDomainRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalSetContext(::System::Runtime::Remoting::Contexts::Context* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalSetContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method, context);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::AppDomain::InternalGetDefaultContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetDefaultContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method);
}
inline ::StringW System::AppDomain::InternalGetProcessGuid(::StringW newguid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalGetProcessGuid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, newguid);
}
inline ::System::Object* System::AppDomain::InvokeInDomainByID(int32_t domain_id, ::System::Reflection::MethodInfo* method, ::System::Object* obj, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InvokeInDomainByID",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                                                                        ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, domain_id, method, obj, args);
}
inline ::StringW System::AppDomain::GetProcessGuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetProcessGuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::AppDomain::InternalIsFinalizingForUnload(int32_t domain_id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "InternalIsFinalizingForUnload", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, domain_id);
}
inline bool System::AppDomain::IsFinalizingForUnload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "IsFinalizingForUnload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::AppDomain::getDomainID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "getDomainID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::AppDomain::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::AppDomain*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::AppDomain::DoAssemblyLoad(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoAssemblyLoad", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assembly);
}
inline ::System::Reflection::Assembly* System::AppDomain::DoAssemblyResolve(::StringW name, ::System::Reflection::Assembly* requestingAssembly, bool refonly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(),
                                                           { "DoAssemblyResolve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, name, requestingAssembly, refonly);
}
inline ::System::Reflection::Assembly* System::AppDomain::DoTypeResolve(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoTypeResolve", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, name);
}
inline ::System::Reflection::Assembly* System::AppDomain::DoResourceResolve(::StringW name, ::System::Reflection::Assembly* requesting) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoResourceResolve", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method, name, requesting);
}
inline void System::AppDomain::DoDomainUnload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "DoDomainUnload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::AppDomain::GetMarshalledDomainObjRef() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "GetMarshalledDomainObjRef", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::AppDomain::ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg, ::by_ref<::ArrayW<uint8_t>> arrResponse,
                                                      ::by_ref<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*> cadMrm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(),
                                              { "ProcessMessageInDomain",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::CADMethodCallMessage*>(),
                                                  ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arrRequest, cadMsg, arrResponse, cadMrm);
}
inline void System::AppDomain::add_DomainUnload(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_DomainUnload", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_DomainUnload(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_DomainUnload", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::AppDomain::add_ProcessExit(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_ProcessExit", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_ProcessExit(::System::EventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_ProcessExit", {}, { ::i2c::type_of<::System::EventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::AppDomain::add_UnhandledException(::System::UnhandledExceptionEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "add_UnhandledException", {}, { ::i2c::type_of<::System::UnhandledExceptionEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::AppDomain::remove_UnhandledException(::System::UnhandledExceptionEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "remove_UnhandledException", {}, { ::i2c::type_of<::System::UnhandledExceptionEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::AppDomain::get_IsHomogenous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_IsHomogenous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::AppDomain::get_IsFullyTrusted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AppDomain*>(), { "get_IsFullyTrusted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::AppDomain* System::AppDomain::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AppDomain*>());
}
// Ctor Parameters []
constexpr ::System::AppDomain::AppDomain() {}
