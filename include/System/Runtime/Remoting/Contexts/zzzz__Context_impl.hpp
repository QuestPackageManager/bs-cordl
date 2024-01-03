#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessageSink_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__CrossContextDelegate_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IContextProperty_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/zzzz__ContextBoundObject_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__ContextCallbackObject_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.RegisterContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::RegisterContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x249c4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "RegisterContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.ReleaseContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::ReleaseContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x249c4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "ReleaseContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(&::System::Runtime::Remoting::Contexts::Context::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x249c4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::Finalize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x249c570;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_DefaultContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_DefaultContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2493da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_DefaultContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_ContextID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_ContextID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_ContextProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*, ::Array<::System::Runtime::Remoting::Contexts::IContextProperty*>*> (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_ContextProperties)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x249c648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_IsDefaultContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x249c6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_IsDefaultContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_NeedsContextSink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x249c6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_NeedsContextSink", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.RegisterDynamicProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
        &::System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x249c7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "RegisterDynamicProperty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.UnregisterDynamicProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x249cd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "UnregisterDynamicProperty", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetDynamicPropertyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* (*)(::System::ContextBoundObject*, ::System::Runtime::Remoting::Contexts::Context*)>(
        &::System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x249c854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetDynamicPropertyCollection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.NotifyGlobalDynamicSinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(
    &::System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x249cf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "NotifyGlobalDynamicSinks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasGlobalDynamicSinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x249d6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_HasGlobalDynamicSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.NotifyDynamicSinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(
    bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&::System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x249d77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "NotifyDynamicSinks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasDynamicSinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x249d800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_HasDynamicSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_HasExitSinks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_HasExitSinks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2499cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_HasExitSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::IContextProperty* (
    ::System::Runtime::Remoting::Contexts::Context::*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::GetProperty)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x249d840;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(::System::Runtime::Remoting::Contexts::IContextProperty*)>(
    &::System::Runtime::Remoting::Contexts::Context::SetProperty)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x249da28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.Freeze
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::Freeze)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x249dbd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::ToString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x249dd80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetServerContextSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x249dddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "GetServerContextSinkChain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetClientContextSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2499d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "GetClientContextSinkChain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateServerObjectSinkChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (
    ::System::Runtime::Remoting::Contexts::Context::*)(::System::MarshalByRefObject*, bool)>(&::System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x24938d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateServerObjectSinkChain", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateEnvoySink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (
    ::System::Runtime::Remoting::Contexts::Context::*)(::System::MarshalByRefObject*)>(&::System::Runtime::Remoting::Contexts::Context::CreateEnvoySink)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2493240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateEnvoySink", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SwitchToContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Contexts::Context*)>(
    &::System::Runtime::Remoting::Contexts::Context::SwitchToContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249dfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "SwitchToContext", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.CreateNewContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Runtime::Remoting::Contexts::Context* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&::System::Runtime::Remoting::Contexts::Context::CreateNewContext)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x249dfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateNewContext", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.DoCallBack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Remoting::Contexts::Context::*)(::System::Runtime::Remoting::Contexts::CrossContextDelegate*)>(&::System::Runtime::Remoting::Contexts::Context::DoCallBack)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x249e814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "DoCallBack", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.get_MyLocalStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStore* (::System::Runtime::Remoting::Contexts::Context::*)()>(
    &::System::Runtime::Remoting::Contexts::Context::get_MyLocalStore)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x249e994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "get_MyLocalStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.AllocateDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (*)()>(&::System::Runtime::Remoting::Contexts::Context::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249eb08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                               "AllocateDataSlot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.AllocateNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (*)(::StringW)>(
    &::System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x249eb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "AllocateNamedDataSlot",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.FreeNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x249ebd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "FreeNamedDataSlot",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetNamedDataSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot* (*)(::StringW)>(&::System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x249ec44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetNamedDataSlot",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::LocalDataStoreSlot*)>(&::System::Runtime::Remoting::Contexts::Context::GetData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x249ecb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::Context.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::LocalDataStoreSlot*, ::System::Object*)>(
    &::System::Runtime::Remoting::Contexts::Context::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x249ece0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Remoting::Contexts::Context::__get_domain_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_id;
}
constexpr int32_t const& System::Runtime::Remoting::Contexts::Context::__get_domain_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___domain_id;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_domain_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___domain_id = value;
}
constexpr int32_t& System::Runtime::Remoting::Contexts::Context::__get_context_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_id;
}
constexpr int32_t const& System::Runtime::Remoting::Contexts::Context::__get_context_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_id;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context_id = value;
}
constexpr void*& System::Runtime::Remoting::Contexts::Context::__get_static_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_data;
}
constexpr void* const& System::Runtime::Remoting::Contexts::Context::__get_static_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___static_data;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_static_data(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___static_data = value;
}
constexpr void*& System::Runtime::Remoting::Contexts::Context::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void* const& System::Runtime::Remoting::Contexts::Context::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_data(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Contexts::Context::__get_server_context_sink_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server_context_sink_chain;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& System::Runtime::Remoting::Contexts::Context::__get_server_context_sink_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___server_context_sink_chain;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_server_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___server_context_sink_chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink*& System::Runtime::Remoting::Contexts::Context::__get_client_context_sink_chain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_context_sink_chain;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::IMessageSink*> const& System::Runtime::Remoting::Contexts::Context::__get_client_context_sink_chain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___client_context_sink_chain;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_client_context_sink_chain(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___client_context_sink_chain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>*& System::Runtime::Remoting::Contexts::Context::__get_context_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>*> const&
System::Runtime::Remoting::Contexts::Context::__get_context_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_properties;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_properties(::System::Collections::Generic::List_1<::System::Runtime::Remoting::Contexts::IContextProperty*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context_properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::LocalDataStoreHolder*& System::Runtime::Remoting::Contexts::Context::__get__localDataStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataStore;
}
constexpr ::cordl_internals::to_const_pointer<::System::LocalDataStoreHolder*> const& System::Runtime::Remoting::Contexts::Context::__get__localDataStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localDataStore;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set__localDataStore(::System::LocalDataStoreHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localDataStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*& System::Runtime::Remoting::Contexts::Context::__get_context_dynamic_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_dynamic_properties;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*> const&
System::Runtime::Remoting::Contexts::Context::__get_context_dynamic_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context_dynamic_properties;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_context_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context_dynamic_properties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Remoting::Contexts::ContextCallbackObject*& System::Runtime::Remoting::Contexts::Context::__get_callback_object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_object;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::ContextCallbackObject*> const& System::Runtime::Remoting::Contexts::Context::__get_callback_object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback_object;
}
constexpr void System::Runtime::Remoting::Contexts::Context::__set_callback_object(::System::Runtime::Remoting::Contexts::ContextCallbackObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback_object)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_local_slots(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "local_slots",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>(
      std::forward<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>(value));
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Runtime::Remoting::Contexts::Context::getStaticF_local_slots() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, "local_slots",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_default_server_context_sink(::System::Runtime::Remoting::Messaging::IMessageSink* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Messaging::IMessageSink*, "default_server_context_sink",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>(
      std::forward<::System::Runtime::Remoting::Messaging::IMessageSink*>(value));
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::getStaticF_default_server_context_sink() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Messaging::IMessageSink*, "default_server_context_sink",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_global_count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "global_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Remoting::Contexts::Context::getStaticF_global_count() {
  return ::cordl_internals::getStaticField<int32_t, "global_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF__localDataStoreMgr(::System::LocalDataStoreMgr* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreMgr*, "_localDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>(
      std::forward<::System::LocalDataStoreMgr*>(value));
}
inline ::System::LocalDataStoreMgr* System::Runtime::Remoting::Contexts::Context::getStaticF__localDataStoreMgr() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreMgr*, "_localDataStoreMgr",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>();
}
inline void System::Runtime::Remoting::Contexts::Context::setStaticF_global_dynamic_properties(::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "global_dynamic_properties",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>(
      std::forward<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>(value));
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::Context::getStaticF_global_dynamic_properties() {
  return ::cordl_internals::getStaticField<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "global_dynamic_properties",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get>();
}
inline void System::Runtime::Remoting::Contexts::Context::RegisterContext(::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "RegisterContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctx);
}
inline void System::Runtime::Remoting::Contexts::Context::ReleaseContext(::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "ReleaseContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ctx);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::Context*>());
}
inline void System::Runtime::Remoting::Contexts::Context::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Contexts::Context::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::get_DefaultContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_DefaultContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method);
}
inline int32_t System::Runtime::Remoting::Contexts::Context::get_ContextID() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*, ::Array<::System::Runtime::Remoting::Contexts::IContextProperty*>*>
System::Runtime::Remoting::Contexts::Context::get_ContextProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Runtime::Remoting::Contexts::IContextProperty*, ::Array<::System::Runtime::Remoting::Contexts::IContextProperty*>*>, false>(
      this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_IsDefaultContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_IsDefaultContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_NeedsContextSink() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_NeedsContextSink", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty* prop, ::System::ContextBoundObject* obj,
                                                                                  ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "RegisterDynamicProperty", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, prop, obj, ctx);
}
inline bool System::Runtime::Remoting::Contexts::Context::UnregisterDynamicProperty(::StringW name, ::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "UnregisterDynamicProperty", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, obj, ctx);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*
System::Runtime::Remoting::Contexts::Context::GetDynamicPropertyCollection(::System::ContextBoundObject* obj, ::System::Runtime::Remoting::Contexts::Context* ctx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetDynamicPropertyCollection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ContextBoundObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, false>(nullptr, ___internal_method, obj, ctx);
}
inline void System::Runtime::Remoting::Contexts::Context::NotifyGlobalDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "NotifyGlobalDynamicSinks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, start, req_msg, client_site, async);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasGlobalDynamicSinks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_HasGlobalDynamicSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Remoting::Contexts::Context::NotifyDynamicSinks(bool start, ::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "NotifyDynamicSinks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, req_msg, client_site, async);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasDynamicSinks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_HasDynamicSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::Context::get_HasExitSinks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_HasExitSinks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::IContextProperty* System::Runtime::Remoting::Contexts::Context::GetProperty(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::IContextProperty*, false>(this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::Context::SetProperty(::System::Runtime::Remoting::Contexts::IContextProperty* prop) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prop);
}
inline void System::Runtime::Remoting::Contexts::Context::Freeze() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Contexts::Context::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetServerContextSinkChain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "GetServerContextSinkChain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::GetClientContextSinkChain() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "GetClientContextSinkChain", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateServerObjectSinkChain(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateServerObjectSinkChain", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method, obj, forceInternalExecute);
}
inline ::System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Contexts::Context::CreateEnvoySink(::System::MarshalByRefObject* serverObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateEnvoySink", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MarshalByRefObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::IMessageSink*, false>(this, ___internal_method, serverObject);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::SwitchToContext(::System::Runtime::Remoting::Contexts::Context* newContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "SwitchToContext", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::Context*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method, newContext);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Runtime::Remoting::Contexts::Context::CreateNewContext(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "CreateNewContext", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method, msg);
}
inline void System::Runtime::Remoting::Contexts::Context::DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "DoCallBack", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::CrossContextDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deleg);
}
inline ::System::LocalDataStore* System::Runtime::Remoting::Contexts::Context::get_MyLocalStore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "get_MyLocalStore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore*, false>(this, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateDataSlot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(),
                                                                             "AllocateDataSlot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(nullptr, ___internal_method);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::AllocateNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "AllocateNamedDataSlot",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(nullptr, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::Context::FreeNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "FreeNamedDataSlot",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::System::LocalDataStoreSlot* System::Runtime::Remoting::Contexts::Context::GetNamedDataSlot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetNamedDataSlot",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot*, false>(nullptr, ___internal_method, name);
}
inline ::System::Object* System::Runtime::Remoting::Contexts::Context::GetData(::System::LocalDataStoreSlot* slot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "GetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, slot);
}
inline void System::Runtime::Remoting::Contexts::Context::SetData(::System::LocalDataStoreSlot* slot, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::Context*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slot, data);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Contexts::Context::Context() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
