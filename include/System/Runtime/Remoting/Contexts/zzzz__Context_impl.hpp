#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\Contexts\Context.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextProperty_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.RegisterContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Contexts::Context*)>(&::System::Runtime::Remoting::Contexts::Context::RegisterContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b36774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                           { "RegisterContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.ReleaseContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Remoting::Contexts::Context*)>(&::System::Runtime::Remoting::Contexts::Context::ReleaseContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b3677c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                           { "ReleaseContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b36784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b36804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_DefaultContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::Runtime::Remoting::Contexts::Context::get_DefaultContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b2d358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_DefaultContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_ContextID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::get_ContextID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b36894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_ContextProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*> (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_ContextProperties)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b3689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_IsDefaultContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b36918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_IsDefaultContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_NeedsContextSink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b36928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_NeedsContextSink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.RegisterDynamicProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::System::ContextBoundObject*,
                                                                ::System::Runtime::Remoting::Contexts::Context*)>(&::System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b36a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                             { "RegisterDynamicProperty",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(), ::i2c::type_of<::System::ContextBoundObject*>(),
                                                                 ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.UnregisterDynamicProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b36f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
            { "UnregisterDynamicProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ContextBoundObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetDynamicPropertyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* (*)(::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
        &::System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5b36ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                            { "GetDynamicPropertyCollection", {}, { ::i2c::type_of<::System::ContextBoundObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.NotifyGlobalDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b37194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
            { "NotifyGlobalDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasGlobalDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b37878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasGlobalDynamicSinks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.NotifyDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b37920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
            { "NotifyDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasDynamicSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b379a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasDynamicSinks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasExitSinks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::get_HasExitSinks)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b33f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasExitSinks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::IContextProperty* (::System::Runtime::Remoting::Contexts::Context::*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::Context::GetProperty)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b379e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(::System::Runtime::Remoting::Contexts::IContextProperty*)>(
    &::System::Runtime::Remoting::Contexts::Context::SetProperty)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b37b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.Freeze
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::Freeze)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b37d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b37ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetServerContextSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5b37f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetServerContextSinkChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetClientContextSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b34040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetClientContextSinkChain", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateServerObjectSinkChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)(::System::MarshalByRefObject*, bool)>(
    &::System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5b2f0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                             { "CreateServerObjectSinkChain", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateEnvoySink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)(::System::MarshalByRefObject*)>(
    &::System::Runtime::Remoting::Contexts::Context::CreateEnvoySink)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b2ea7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "CreateEnvoySink", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SwitchToContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::SwitchToContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b38100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                           { "SwitchToContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateNewContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Contexts::Context::CreateNewContext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b38108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                             { "CreateNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.DoCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(::System::Runtime::Remoting::Contexts::CrossContextDelegate*)>(
    &::System::Runtime::Remoting::Contexts::Context::DoCallBack)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5b381ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                           { "DoCallBack", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_MyLocalStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStore* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_MyLocalStore)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b382ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_MyLocalStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.AllocateDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (*)()>(&::System::Runtime::Remoting::Contexts::Context::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b3845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "AllocateDataSlot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.AllocateNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b384c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "AllocateNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.FreeNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b38534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetNamedDataSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::LocalDataStoreSlot* (*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b385a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::LocalDataStoreSlot*)>(&::System::Runtime::Remoting::Contexts::Context::GetData)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b38614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::LocalDataStoreSlot*, ::System::Object*)>(&::System::Runtime::Remoting::Contexts::Context::SetData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b38658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_domain_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_id;
}
constexpr int32_t const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_domain_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_id;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_domain_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___domain_id = value;
}
constexpr int32_t& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_id;
}
constexpr int32_t const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_id;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_context_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context_id = value;
}
constexpr ::System::UIntPtr& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_static_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_data;
}
constexpr ::System::UIntPtr const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_static_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_data;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_static_data(::System::UIntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___static_data = value;
}
constexpr ::System::UIntPtr& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::UIntPtr const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_data(::System::UIntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_server_context_sink_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server_context_sink_chain;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_server_context_sink_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server_context_sink_chain;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_server_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___server_context_sink_chain = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_client_context_sink_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_context_sink_chain;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_client_context_sink_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_context_sink_chain;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_client_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___client_context_sink_chain = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_properties;
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* const&
System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_properties;
}
constexpr void
System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_context_properties(::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context_properties = value;
}
constexpr ::System::LocalDataStoreHolder*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get__localDataStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataStore;
}
constexpr ::System::LocalDataStoreHolder* const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get__localDataStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataStore;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set__localDataStore(::System::LocalDataStoreHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localDataStore = value;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_dynamic_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_dynamic_properties;
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_context_dynamic_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_dynamic_properties;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_context_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context_dynamic_properties = value;
}
constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject*& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_callback_object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_object;
}
constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject* const& System::Runtime::Remoting::Contexts::Context::__cordl_internal_get_callback_object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_object;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__cordl_internal_set_callback_object(::System::Runtime::Remoting::Contexts::ContextCallbackObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callback_object = value;
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_local_slots(::ArrayW<::System::Object*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "local_slots", ::System::Runtime::Remoting::Contexts::Context*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> System::Runtime::Remoting::Contexts::Context::getStaticF_local_slots() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "local_slots", ::System::Runtime::Remoting::Contexts::Context*>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_default_server_context_sink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::IMessageSink*, "default_server_context_sink", ::System::Runtime::Remoting::Contexts::Context*>(
      std::forward<::System::Runtime::Remoting::Messaging::IMessageSink*>(value));
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::getStaticF_default_server_context_sink() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::IMessageSink*, "default_server_context_sink", ::System::Runtime::Remoting::Contexts::Context*>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_global_count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "global_count", ::System::Runtime::Remoting::Contexts::Context*>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::Contexts::Context::getStaticF_global_count() {
  return ::cordl_internals::getStaticField<int32_t, "global_count", ::System::Runtime::Remoting::Contexts::Context*>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF__localDataStoreMgr(::System::LocalDataStoreMgr* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreMgr*, "_localDataStoreMgr", ::System::Runtime::Remoting::Contexts::Context*>(std::forward<::System::LocalDataStoreMgr*>(value));
}
inline ::System::LocalDataStoreMgr* System::Runtime::Remoting::Contexts::Context::getStaticF__localDataStoreMgr() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreMgr*, "_localDataStoreMgr", ::System::Runtime::Remoting::Contexts::Context*>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_global_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "global_dynamic_properties", ::System::Runtime::Remoting::Contexts::Context*>(
      std::forward<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(value));
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::Context::getStaticF_global_dynamic_properties() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "global_dynamic_properties", ::System::Runtime::Remoting::Contexts::Context*>();
}
inline void System::Runtime::Remoting::Contexts::Context::RegisterContext(::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                         { "RegisterContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx);
}
inline void System::Runtime::Remoting::Contexts::Context::ReleaseContext(::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                         { "ReleaseContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx);
}
inline void System::Runtime::Remoting::Contexts::Context::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Contexts::Context::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::get_DefaultContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_DefaultContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Contexts::Context::get_ContextID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*> System::Runtime::Remoting::Contexts::Context::get_ContextProperties() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*>>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_IsDefaultContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_NeedsContextSink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, ::System::ContextBoundObject* obj,
                                                                                  ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                           { "RegisterDynamicProperty",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(), ::i2c::type_of<::System::ContextBoundObject*>(),
                                                               ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prop, obj, ctx);
}
inline bool System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty(::StringW name, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
          { "UnregisterDynamicProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::ContextBoundObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, obj, ctx);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*
System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection(::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                          { "GetDynamicPropertyCollection", {}, { ::i2c::type_of<::System::ContextBoundObject*>(), ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(nullptr, ___internal_method, obj, ctx);
}
inline void System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
          { "NotifyGlobalDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, start, req_msg, client_site, async);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasGlobalDynamicSinks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                       { "NotifyDynamicSinks", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::Remoting::Messaging::IMessage*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, req_msg, client_site, async);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasDynamicSinks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasExitSinks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_HasExitSinks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::IContextProperty* System::Runtime::Remoting::Contexts::Context::GetProperty(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::IContextProperty*>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::Context::SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* prop) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop);
}
inline void System::Runtime::Remoting::Contexts::Context::Freeze() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Contexts::Context::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetServerContextSinkChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetClientContextSinkChain", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                           { "CreateServerObjectSinkChain", {}, { ::i2c::type_of<::System::MarshalByRefObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, obj, forceInternalExecute);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateEnvoySink(::System::MarshalByRefObject* serverObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "CreateEnvoySink", {}, { ::i2c::type_of<::System::MarshalByRefObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*>(this, ___internal_method, serverObject);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::SwitchToContext(::System::Runtime::Remoting::Contexts::Context* newContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                         { "SwitchToContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::Context*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method, newContext);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                           { "CreateNewContext", {}, { ::i2c::type_of<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Contexts::Context::DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                         { "DoCallBack", {}, { ::i2c::type_of<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deleg);
}
inline ::System::LocalDataStore* System::Runtime::Remoting::Contexts::Context::get_MyLocalStore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "get_MyLocalStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore*>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateDataSlot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "AllocateDataSlot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(nullptr, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "AllocateNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(nullptr, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "FreeNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetNamedDataSlot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*>(nullptr, ___internal_method, name);
}
inline ::System::Object* System::Runtime::Remoting::Contexts::Context::GetData(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(), { "GetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, slot);
}
inline void System::Runtime::Remoting::Contexts::Context::SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::Contexts::Context*>(),
                                                                                         { "SetData", {}, { ::i2c::type_of<::System::LocalDataStoreSlot*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slot, data);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Contexts::Context*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::Context::Context() {}
