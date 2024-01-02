#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__InternalThread_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/Threading/zzzz__ThreadStart_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Threading::Thread.AsyncLocalSetCurrentCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>)>(
    &::System::Threading::Thread::AsyncLocalSetCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2619660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "AsyncLocalSetCurrentCulture", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ThreadStart*)>(&::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26196c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadStart*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ParameterizedThreadStart*)>(
    &::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2619868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ParameterizedThreadStart*, int32_t)>(
    &::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x26198e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26199d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Object*)>(&::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2619aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(ByRef<::System::Threading::StackCrawlMark>)>(
    &::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x26199ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetExecutionContextReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__ExecutionContext__Reader (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::GetExecutionContextReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2616d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetExecutionContextReader",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_ExecutionContextBelongsToCurrentScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2617cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                               "get_ExecutionContextBelongsToCurrentScope", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_ExecutionContextBelongsToCurrentScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(bool)>(
    &::System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2617cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_ExecutionContextBelongsToCurrentScope",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetMutableExecutionContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::GetMutableExecutionContext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2617560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                               "GetMutableExecutionContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetExecutionContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ExecutionContext*, bool)>(
    &::System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2617d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetExecutionContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::__ExecutionContext__Reader, bool)>(
    &::System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2616d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_Priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ThreadPriority (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_Priority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_Priority",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_Priority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ThreadPriority)>(
    &::System::Threading::Thread::set_Priority)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_Priority", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetPriorityNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetPriorityNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetPriorityNative",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetPriorityNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(int32_t)>(&::System::Threading::Thread::SetPriorityNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetPriorityNative", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.JoinInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)(int32_t)>(&::System::Threading::Thread::JoinInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "JoinInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Join
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Join)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2619bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Join",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SleepInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::SleepInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SleepInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Sleep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::Sleep)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2616650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Sleep", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.YieldInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Thread::YieldInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "YieldInternal",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Yield
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Thread::Yield)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26166cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Yield",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetStartHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Delegate*, int32_t)>(&::System::Threading::Thread::SetStartHelper)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2619740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetStartHelper", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentUICulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2619cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentUICulture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentUICultureNoAppX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::GetCurrentUICultureNoAppX)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2619d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentUICultureNoAppX",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2619dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentCulture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_CurrentCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Globalization::CultureInfo*)>(
    &::System::Threading::Thread::set_CurrentCulture)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2619ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_CurrentCulture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentCultureNoAppX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::GetCurrentCultureNoAppX)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2619df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentCultureNoAppX",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.nativeInitCultureAccessors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::Thread::nativeInitCultureAccessors)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x261a08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                               "nativeInitCultureAccessors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.MemoryBarrier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::Thread::MemoryBarrier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "MemoryBarrier",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ConstructInternalThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::ConstructInternalThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ConstructInternalThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::InternalThread* (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::get_Internal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x261a138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_Internal",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::Threading::Thread::get_CurrentContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261a15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentContext",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentThread_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Threading::Thread*>)>(&::System::Threading::Thread::GetCurrentThread_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentThread_icall", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Thread*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Thread* (*)()>(&::System::Threading::Thread::GetCurrentThread)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x261a168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Thread* (*)()>(&::System::Threading::Thread::get_CurrentThread)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26166d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentThreadId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Threading::Thread::get_CurrentThreadId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x261a184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentThreadId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetDomainID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Threading::Thread::GetDomainID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetDomainID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Thread_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)(::System::MulticastDelegate*)>(&::System::Threading::Thread::Thread_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Thread_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MulticastDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Finalize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261a1b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsThreadPoolThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsThreadPoolThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_IsThreadPoolThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsThreadPoolThreadInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsThreadPoolThreadInternal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x261a1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                               "get_IsThreadPoolThreadInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsAlive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsAlive)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x261a1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_IsAlive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_IsBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(bool)>(&::System::Threading::Thread::set_IsBackground)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x261a230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_IsBackground", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetName_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::InternalThread*, ::cordl_internals::Ptr<char16_t>, int32_t)>(
    &::System::Threading::Thread::SetName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetName_icall", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetName_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::InternalThread*, ::StringW)>(&::System::Threading::Thread::SetName_internal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x261a2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetName_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::StringW)>(&::System::Threading::Thread::set_Name)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x261a338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_Name", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Abort_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::InternalThread*, ::System::Object*)>(&::System::Threading::Thread::Abort_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Abort_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Abort)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x261a370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Abort",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SpinWait_nop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::Thread::SpinWait_nop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SpinWait_nop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SpinWait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::SpinWait)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2616628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SpinWait", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.StartInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::Object*, ByRef<::System::Threading::StackCrawlMark>)>(
    &::System::Threading::Thread::StartInternal)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2619b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "StartInternal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState)>(
    &::System::Threading::Thread::SetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ClrState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState)>(
    &::System::Threading::Thread::ClrState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ClrState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ThreadState (*)(::System::Threading::InternalThread*)>(&::System::Threading::Thread::GetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SystemMaxStackStize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Threading::Thread::SystemMaxStackStize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SystemMaxStackStize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetProcessDefaultStackSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Threading::Thread::GetProcessDefaultStackSize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2619c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetProcessDefaultStackSize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Thread::*)(::System::MulticastDelegate*, int32_t)>(
    &::System::Threading::Thread::SetStart)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2619cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetStart", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MulticastDelegate*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_ManagedThreadId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_ManagedThreadId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x261672c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_ManagedThreadId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.BeginCriticalRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::Thread::BeginCriticalRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2615ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "BeginCriticalRegion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.EndCriticalRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Threading::Thread::EndCriticalRegion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2616434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "EndCriticalRegion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261a3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ValidateThreadState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ThreadState (::System::Threading::Thread::*)()>(
    &::System::Threading::Thread::ValidateThreadState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x261a278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ValidateThreadState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::InternalThread*& System::Threading::Thread::__get_internal_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_thread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::InternalThread*> const& System::Threading::Thread::__get_internal_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_thread;
}
constexpr void System::Threading::Thread::__set_internal_thread(::System::Threading::InternalThread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___internal_thread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::Thread::__get_m_ThreadStartArg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadStartArg;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::Thread::__get_m_ThreadStartArg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadStartArg;
}
constexpr void System::Threading::Thread::__set_m_ThreadStartArg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ThreadStartArg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::Thread::__get_pending_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::Thread::__get_pending_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_exception;
}
constexpr void System::Threading::Thread::__set_pending_exception(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pending_exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::MulticastDelegate*& System::Threading::Thread::__get_m_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::MulticastDelegate*> const& System::Threading::Thread::__get_m_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr void System::Threading::Thread::__set_m_Delegate(::System::MulticastDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::Thread::__get_m_ExecutionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Threading::Thread::__get_m_ExecutionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContext;
}
constexpr void System::Threading::Thread::__set_m_ExecutionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ExecutionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Threading::Thread::__get_m_ExecutionContextBelongsToOuterScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContextBelongsToOuterScope;
}
constexpr bool const& System::Threading::Thread::__get_m_ExecutionContextBelongsToOuterScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContextBelongsToOuterScope;
}
constexpr void System::Threading::Thread::__set_m_ExecutionContextBelongsToOuterScope(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionContextBelongsToOuterScope = value;
}
constexpr ::System::Security::Principal::IPrincipal*& System::Threading::Thread::__get_principal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IPrincipal*> const& System::Threading::Thread::__get_principal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal;
}
constexpr void System::Threading::Thread::__set_principal(::System::Security::Principal::IPrincipal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___principal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Threading::Thread::__get_principal_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal_version;
}
constexpr int32_t const& System::Threading::Thread::__get_principal_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal_version;
}
constexpr void System::Threading::Thread::__set_principal_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___principal_version = value;
}
inline void System::Threading::Thread::setStaticF_s_LocalDataStoreMgr(::System::LocalDataStoreMgr* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreMgr*, "s_LocalDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::LocalDataStoreMgr*>(value));
}
inline ::System::LocalDataStoreMgr* System::Threading::Thread::getStaticF_s_LocalDataStoreMgr() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreMgr*, "s_LocalDataStoreMgr", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_s_LocalDataStore(::System::LocalDataStoreHolder* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreHolder*, "s_LocalDataStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::LocalDataStoreHolder*>(value));
}
inline ::System::LocalDataStoreHolder* System::Threading::Thread::getStaticF_s_LocalDataStore() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreHolder*, "s_LocalDataStore", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_m_CurrentCulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "m_CurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::getStaticF_m_CurrentCulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "m_CurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_m_CurrentUICulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "m_CurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::getStaticF_m_CurrentUICulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "m_CurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_s_asyncLocalCurrentCulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentCulture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* System::Threading::Thread::getStaticF_s_asyncLocalCurrentCulture() {
  return ::cordl_internals::getStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentCulture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_s_asyncLocalCurrentUICulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentUICulture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* System::Threading::Thread::getStaticF_s_asyncLocalCurrentUICulture() {
  return ::cordl_internals::getStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentUICulture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::setStaticF_current_thread(::System::Threading::Thread* value) {
  ::cordl_internals::setStaticField<::System::Threading::Thread*, "current_thread", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>(
      std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* System::Threading::Thread::getStaticF_current_thread() {
  return ::cordl_internals::getStaticField<::System::Threading::Thread*, "current_thread", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get>();
}
inline void System::Threading::Thread::AsyncLocalSetCurrentCulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "AsyncLocalSetCurrentCulture", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, args);
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ThreadStart* start) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Thread*>(start));
}
inline void System::Threading::Thread::_ctor(::System::Threading::ThreadStart* start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadStart*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start);
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ParameterizedThreadStart* start) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Thread*>(start));
}
inline void System::Threading::Thread::_ctor(::System::Threading::ParameterizedThreadStart* start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start);
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Thread*>(start, maxStackSize));
}
inline void System::Threading::Thread::_ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ParameterizedThreadStart*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, maxStackSize);
}
inline void System::Threading::Thread::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Thread::Start(::System::Object* parameter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter);
}
inline void System::Threading::Thread::Start(ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Start", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stackMark);
}
inline ::System::Threading::__ExecutionContext__Reader System::Threading::Thread::GetExecutionContextReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetExecutionContextReader",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::__ExecutionContext__Reader, false>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                             "get_ExecutionContextBelongsToCurrentScope", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_ExecutionContextBelongsToCurrentScope",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::ExecutionContext* System::Threading::Thread::GetMutableExecutionContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetMutableExecutionContext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*, false>(this, ___internal_method);
}
inline void System::Threading::Thread::SetExecutionContext(::System::Threading::ExecutionContext* value, bool belongsToCurrentScope) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, belongsToCurrentScope);
}
inline void System::Threading::Thread::SetExecutionContext(::System::Threading::__ExecutionContext__Reader value, bool belongsToCurrentScope) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetExecutionContext", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ExecutionContext__Reader>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, belongsToCurrentScope);
}
inline ::System::Threading::ThreadPriority System::Threading::Thread::get_Priority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_Priority",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadPriority, false>(this, ___internal_method);
}
inline void System::Threading::Thread::set_Priority(::System::Threading::ThreadPriority value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_Priority", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Threading::Thread::GetPriorityNative() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetPriorityNative",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Threading::Thread::SetPriorityNative(int32_t priority) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetPriorityNative", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, priority);
}
inline bool System::Threading::Thread::JoinInternal(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "JoinInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::Thread::Join() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Join",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Thread::SleepInternal(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SleepInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::Thread::Sleep(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Sleep", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::Thread::YieldInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "YieldInternal",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Threading::Thread::Yield() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Yield",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::SetStartHelper(::System::Delegate* start, int32_t maxStackSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetStartHelper", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, maxStackSize);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentUICulture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentUICulture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentUICultureNoAppX() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentUICultureNoAppX",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentCulture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentCulture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void System::Threading::Thread::set_CurrentCulture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_CurrentCulture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentCultureNoAppX() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentCultureNoAppX",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void System::Threading::Thread::nativeInitCultureAccessors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "nativeInitCultureAccessors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::MemoryBarrier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "MemoryBarrier",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::ConstructInternalThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ConstructInternalThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::InternalThread* System::Threading::Thread::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_Internal",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::InternalThread*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Threading::Thread::get_CurrentContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentContext",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::GetCurrentThread_icall(ByRef<::System::Threading::Thread*> thread) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentThread_icall", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::Thread*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread);
}
inline ::System::Threading::Thread* System::Threading::Thread::GetCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetCurrentThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Thread* System::Threading::Thread::get_CurrentThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::get_CurrentThreadId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_CurrentThreadId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetDomainID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetDomainID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Threading::Thread::Thread_internal(::System::MulticastDelegate* start) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Thread_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MulticastDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, start);
}
inline void System::Threading::Thread::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsThreadPoolThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_IsThreadPoolThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsThreadPoolThreadInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(),
                                                                             "get_IsThreadPoolThreadInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsAlive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_IsAlive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Thread::set_IsBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_IsBackground", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Threading::Thread::SetName_icall(::System::Threading::InternalThread* thread, ::cordl_internals::Ptr<char16_t> name, int32_t nameLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetName_icall", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, name, nameLength);
}
inline void System::Threading::Thread::SetName_internal(::System::Threading::InternalThread* thread, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetName_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, name);
}
inline void System::Threading::Thread::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "set_Name", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Threading::Thread::Abort_internal(::System::Threading::InternalThread* thread, ::System::Object* stateInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Abort_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, stateInfo);
}
inline void System::Threading::Thread::Abort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "Abort",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Thread::SpinWait_nop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SpinWait_nop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::SpinWait(int32_t iterations) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SpinWait", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, iterations);
}
inline void System::Threading::Thread::StartInternal(::System::Object* principal, ByRef<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "StartInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::StackCrawlMark>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, principal, stackMark);
}
inline void System::Threading::Thread::SetState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState set) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, set);
}
inline void System::Threading::Thread::ClrState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState clr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ClrState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread, clr);
}
inline ::System::Threading::ThreadState System::Threading::Thread::GetState(::System::Threading::InternalThread* thread) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::InternalThread*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadState, false>(nullptr, ___internal_method, thread);
}
inline int32_t System::Threading::Thread::SystemMaxStackStize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SystemMaxStackStize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetProcessDefaultStackSize(int32_t maxStackSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "GetProcessDefaultStackSize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, maxStackSize);
}
inline void System::Threading::Thread::SetStart(::System::MulticastDelegate* start, int32_t maxStackSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "SetStart", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MulticastDelegate*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, maxStackSize);
}
inline int32_t System::Threading::Thread::get_ManagedThreadId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "get_ManagedThreadId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Threading::Thread::BeginCriticalRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "BeginCriticalRegion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::EndCriticalRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "EndCriticalRegion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Threading::ThreadState System::Threading::Thread::ValidateThreadState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Thread*>::get(), "ValidateThreadState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadState, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Thread::Thread() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
