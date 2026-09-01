#pragma once
// IWYU pragma private; include "System\Threading\Thread.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__Context_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/Threading/zzzz__AsyncLocalValueChangedArgs_1_def.hpp"
#include "System/Threading/zzzz__AsyncLocal_1_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__InternalThread_def.hpp"
#include "System/Threading/zzzz__ParameterizedThreadStart_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/Threading/zzzz__ThreadStart_def.hpp"
#include "System/Threading/zzzz__ThreadState_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Thread.AsyncLocalSetCurrentCulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>)>(
    &::System::Threading::Thread::AsyncLocalSetCurrentCulture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cb2e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                         { "AsyncLocalSetCurrentCulture", {}, { ::i2c::type_of<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.AsyncLocalSetCurrentUICulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>)>(
    &::System::Threading::Thread::AsyncLocalSetCurrentUICulture)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cb2ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                         { "AsyncLocalSetCurrentUICulture", {}, { ::i2c::type_of<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ThreadStart*)>(&::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb2f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ThreadStart*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ParameterizedThreadStart*)>(&::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cb313c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ParameterizedThreadStart*, int32_t)>(&::System::Threading::Thread::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cb3194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cb3254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Object*)>(&::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cb3348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::by_ref<::System::Threading::StackCrawlMark>)>(&::System::Threading::Thread::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5cb3270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, { ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetExecutionContextReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext_Reader (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetExecutionContextReader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb3478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetExecutionContextReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_ExecutionContextBelongsToCurrentScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb3480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_ExecutionContextBelongsToCurrentScope", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_ExecutionContextBelongsToCurrentScope
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(bool)>(&::System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb3490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_ExecutionContextBelongsToCurrentScope", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetMutableExecutionContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetMutableExecutionContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetMutableExecutionContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetExecutionContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ExecutionContext*, bool)>(&::System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetExecutionContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ExecutionContext_Reader, bool)>(&::System::Threading::Thread::SetExecutionContext)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb351c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                             { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext_Reader>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_Priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ThreadPriority (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_Priority)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_Priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_Priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Threading::ThreadPriority)>(&::System::Threading::Thread::set_Priority)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb3584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_Priority", {}, { ::i2c::type_of<::System::Threading::ThreadPriority>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetPriorityNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetPriorityNative)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb3558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetPriorityNative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetPriorityNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(int32_t)>(&::System::Threading::Thread::SetPriorityNative)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb35ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetPriorityNative", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.JoinInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)(int32_t)>(&::System::Threading::Thread::JoinInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb35d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "JoinInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Join
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Join)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb35d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Join", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SleepInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::SleepInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb35e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SleepInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Sleep
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::Sleep)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cb35e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Sleep", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.YieldInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Thread::YieldInternal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cb3654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "YieldInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Yield
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::Thread::Yield)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cb366c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Yield", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetStartHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Delegate*, int32_t)>(&::System::Threading::Thread::SetStartHelper)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5cb2fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetStartHelper", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentUICulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cb3754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentUICulture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_CurrentUICulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Globalization::CultureInfo*)>(&::System::Threading::Thread::set_CurrentUICulture)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5cb3894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_CurrentUICulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentUICultureNoAppX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetCurrentUICultureNoAppX)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cb3790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentUICultureNoAppX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentCulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cb3c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentCulture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_CurrentCulture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Globalization::CultureInfo*)>(&::System::Threading::Thread::set_CurrentCulture)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5cb3d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_CurrentCulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentCultureNoAppX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetCurrentCultureNoAppX)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5cb3c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentCultureNoAppX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.nativeInitCultureAccessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Thread::nativeInitCultureAccessors)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5cb3b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "nativeInitCultureAccessors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.MemoryBarrier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Thread::MemoryBarrier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb3fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "MemoryBarrier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ConstructInternalThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::ConstructInternalThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb3fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "ConstructInternalThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::InternalThread* (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_Internal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb3fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Contexts::Context* (*)()>(&::System::Threading::Thread::get_CurrentContext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb3fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentThread_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Threading::Thread*>)>(&::System::Threading::Thread::GetCurrentThread_icall)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb4004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentThread_icall", {}, { ::i2c::type_of<::by_ref<::System::Threading::Thread*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetCurrentThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Thread* (*)()>(&::System::Threading::Thread::GetCurrentThread)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb402c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Thread* (*)()>(&::System::Threading::Thread::get_CurrentThread)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cb403c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_CurrentThreadId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Threading::Thread::get_CurrentThreadId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cb40c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentThreadId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetDomainID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Threading::Thread::GetDomainID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cb40ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetDomainID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Thread_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)(::System::MulticastDelegate*)>(&::System::Threading::Thread::Thread_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Thread_internal", {}, { ::i2c::type_of<::System::MulticastDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)()>(&::System::Threading::Thread::Finalize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ::i2c::class_of<::System::Threading::Thread*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsThreadPoolThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsThreadPoolThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsThreadPoolThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsThreadPoolThreadInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsThreadPoolThreadInternal)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb410c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsThreadPoolThreadInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_IsAlive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_IsAlive)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cb4138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsAlive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_IsBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(bool)>(&::System::Threading::Thread::set_IsBackground)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cb4170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_IsBackground", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetName_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::InternalThread*, char16_t*, int32_t)>(&::System::Threading::Thread::SetName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb42b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                { "SetName_icall", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetName_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::InternalThread*, ::StringW)>(&::System::Threading::Thread::SetName_internal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cb42bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetName_internal", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::StringW)>(&::System::Threading::Thread::set_Name)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5cb42d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SpinWait_nop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Thread::SpinWait_nop)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SpinWait_nop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SpinWait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Threading::Thread::SpinWait)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.StartInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::Object*, ::by_ref<::System::Threading::StackCrawlMark>)>(
    &::System::Threading::Thread::StartInternal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cb3410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                             { "StartInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState)>(&::System::Threading::Thread::SetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                             { "SetState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::System::Threading::ThreadState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ClrState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::InternalThread*, ::System::Threading::ThreadState)>(&::System::Threading::Thread::ClrState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cb4274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                             { "ClrState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::System::Threading::ThreadState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ThreadState (*)(::System::Threading::InternalThread*)>(&::System::Threading::Thread::GetState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb416c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SystemMaxStackStize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Threading::Thread::SystemMaxStackStize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cb4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SystemMaxStackStize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetProcessDefaultStackSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Threading::Thread::GetProcessDefaultStackSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cb3684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetProcessDefaultStackSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.SetStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Thread::*)(::System::MulticastDelegate*, int32_t)>(&::System::Threading::Thread::SetStart)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5cb3718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetStart", {}, { ::i2c::type_of<::System::MulticastDelegate*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.get_ManagedThreadId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::get_ManagedThreadId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb4330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_ManagedThreadId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.BeginCriticalRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Thread::BeginCriticalRegion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cb435c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "BeginCriticalRegion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.EndCriticalRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::Thread::EndCriticalRegion)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cb43a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "EndCriticalRegion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::Thread::*)()>(&::System::Threading::Thread::GetHashCode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb43e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ::i2c::class_of<::System::Threading::Thread*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Thread.ValidateThreadState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ThreadState (::System::Threading::Thread::*)()>(&::System::Threading::Thread::ValidateThreadState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cb41fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "ValidateThreadState", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::InternalThread*& System::Threading::Thread::__cordl_internal_get_internal_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_thread;
}
constexpr ::System::Threading::InternalThread* const& System::Threading::Thread::__cordl_internal_get_internal_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internal_thread;
}
constexpr void System::Threading::Thread::__cordl_internal_set_internal_thread(::System::Threading::InternalThread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internal_thread = value;
}
constexpr ::System::Object*& System::Threading::Thread::__cordl_internal_get_m_ThreadStartArg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadStartArg;
}
constexpr ::System::Object* const& System::Threading::Thread::__cordl_internal_get_m_ThreadStartArg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThreadStartArg;
}
constexpr void System::Threading::Thread::__cordl_internal_set_m_ThreadStartArg(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThreadStartArg = value;
}
constexpr ::System::Object*& System::Threading::Thread::__cordl_internal_get_pending_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_exception;
}
constexpr ::System::Object* const& System::Threading::Thread::__cordl_internal_get_pending_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pending_exception;
}
constexpr void System::Threading::Thread::__cordl_internal_set_pending_exception(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pending_exception = value;
}
constexpr ::System::MulticastDelegate*& System::Threading::Thread::__cordl_internal_get_m_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr ::System::MulticastDelegate* const& System::Threading::Thread::__cordl_internal_get_m_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Delegate;
}
constexpr void System::Threading::Thread::__cordl_internal_set_m_Delegate(::System::MulticastDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Delegate = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::Thread::__cordl_internal_get_m_ExecutionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Threading::Thread::__cordl_internal_get_m_ExecutionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContext;
}
constexpr void System::Threading::Thread::__cordl_internal_set_m_ExecutionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionContext = value;
}
constexpr bool& System::Threading::Thread::__cordl_internal_get_m_ExecutionContextBelongsToOuterScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContextBelongsToOuterScope;
}
constexpr bool const& System::Threading::Thread::__cordl_internal_get_m_ExecutionContextBelongsToOuterScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionContextBelongsToOuterScope;
}
constexpr void System::Threading::Thread::__cordl_internal_set_m_ExecutionContextBelongsToOuterScope(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionContextBelongsToOuterScope = value;
}
constexpr ::System::Security::Principal::IPrincipal*& System::Threading::Thread::__cordl_internal_get_principal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal;
}
constexpr ::System::Security::Principal::IPrincipal* const& System::Threading::Thread::__cordl_internal_get_principal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal;
}
constexpr void System::Threading::Thread::__cordl_internal_set_principal(::System::Security::Principal::IPrincipal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___principal = value;
}
constexpr int32_t& System::Threading::Thread::__cordl_internal_get_principal_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal_version;
}
constexpr int32_t const& System::Threading::Thread::__cordl_internal_get_principal_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___principal_version;
}
constexpr void System::Threading::Thread::__cordl_internal_set_principal_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___principal_version = value;
}
inline void System::Threading::Thread::setStaticF_s_LocalDataStoreMgr(::System::LocalDataStoreMgr* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreMgr*, "s_LocalDataStoreMgr", ::System::Threading::Thread*>(std::forward<::System::LocalDataStoreMgr*>(value));
}
inline ::System::LocalDataStoreMgr* System::Threading::Thread::getStaticF_s_LocalDataStoreMgr() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreMgr*, "s_LocalDataStoreMgr", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_s_LocalDataStore(::System::LocalDataStoreHolder* value) {
  ::cordl_internals::setStaticField<::System::LocalDataStoreHolder*, "s_LocalDataStore", ::System::Threading::Thread*>(std::forward<::System::LocalDataStoreHolder*>(value));
}
inline ::System::LocalDataStoreHolder* System::Threading::Thread::getStaticF_s_LocalDataStore() {
  return ::cordl_internals::getStaticField<::System::LocalDataStoreHolder*, "s_LocalDataStore", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_m_CurrentCulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "m_CurrentCulture", ::System::Threading::Thread*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::getStaticF_m_CurrentCulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "m_CurrentCulture", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_m_CurrentUICulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "m_CurrentUICulture", ::System::Threading::Thread*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::getStaticF_m_CurrentUICulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "m_CurrentUICulture", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_s_asyncLocalCurrentCulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentCulture", ::System::Threading::Thread*>(
      std::forward<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* System::Threading::Thread::getStaticF_s_asyncLocalCurrentCulture() {
  return ::cordl_internals::getStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentCulture", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_s_asyncLocalCurrentUICulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentUICulture", ::System::Threading::Thread*>(
      std::forward<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* System::Threading::Thread::getStaticF_s_asyncLocalCurrentUICulture() {
  return ::cordl_internals::getStaticField<::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>*, "s_asyncLocalCurrentUICulture", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::setStaticF_current_thread(::System::Threading::Thread* value) {
  ::cordl_internals::setStaticField<::System::Threading::Thread*, "current_thread", ::System::Threading::Thread*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* System::Threading::Thread::getStaticF_current_thread() {
  return ::cordl_internals::getStaticField<::System::Threading::Thread*, "current_thread", ::System::Threading::Thread*>();
}
inline void System::Threading::Thread::AsyncLocalSetCurrentCulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                              { "AsyncLocalSetCurrentCulture", {}, { ::i2c::type_of<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline void System::Threading::Thread::AsyncLocalSetCurrentUICulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                       { "AsyncLocalSetCurrentUICulture", {}, { ::i2c::type_of<::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline void System::Threading::Thread::_ctor(::System::Threading::ThreadStart* start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ThreadStart*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start);
}
inline void System::Threading::Thread::_ctor(::System::Threading::ParameterizedThreadStart* start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start);
}
inline void System::Threading::Thread::_ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::ParameterizedThreadStart*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, maxStackSize);
}
inline void System::Threading::Thread::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Thread::Start(::System::Object* parameter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter);
}
inline void System::Threading::Thread::Start(::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Start", {}, { ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stackMark);
}
inline ::System::Threading::ExecutionContext_Reader System::Threading::Thread::GetExecutionContextReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetExecutionContextReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext_Reader>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_ExecutionContextBelongsToCurrentScope() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_ExecutionContextBelongsToCurrentScope", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Thread::set_ExecutionContextBelongsToCurrentScope(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_ExecutionContextBelongsToCurrentScope", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::ExecutionContext* System::Threading::Thread::GetMutableExecutionContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetMutableExecutionContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline void System::Threading::Thread::SetExecutionContext(::System::Threading::ExecutionContext* value, bool belongsToCurrentScope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, belongsToCurrentScope);
}
inline void System::Threading::Thread::SetExecutionContext(::System::Threading::ExecutionContext_Reader value, bool belongsToCurrentScope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetExecutionContext", {}, { ::i2c::type_of<::System::Threading::ExecutionContext_Reader>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, belongsToCurrentScope);
}
inline ::System::Threading::ThreadPriority System::Threading::Thread::get_Priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_Priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadPriority>(this, ___internal_method);
}
inline void System::Threading::Thread::set_Priority(::System::Threading::ThreadPriority value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_Priority", {}, { ::i2c::type_of<::System::Threading::ThreadPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Threading::Thread::GetPriorityNative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetPriorityNative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::Thread::SetPriorityNative(int32_t priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetPriorityNative", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority);
}
inline bool System::Threading::Thread::JoinInternal(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "JoinInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::Thread::Join() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Join", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::Thread::SleepInternal(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SleepInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, millisecondsTimeout);
}
inline void System::Threading::Thread::Sleep(int32_t millisecondsTimeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Sleep", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::Thread::YieldInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "YieldInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Threading::Thread::Yield() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Yield", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::SetStartHelper(::System::Delegate* start, int32_t maxStackSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetStartHelper", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, maxStackSize);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentUICulture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentUICulture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Threading::Thread::set_CurrentUICulture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_CurrentUICulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentUICultureNoAppX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentUICultureNoAppX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::get_CurrentCulture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentCulture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Threading::Thread::set_CurrentCulture(::System::Globalization::CultureInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_CurrentCulture", {}, { ::i2c::type_of<::System::Globalization::CultureInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* System::Threading::Thread::GetCurrentCultureNoAppX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentCultureNoAppX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void System::Threading::Thread::nativeInitCultureAccessors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "nativeInitCultureAccessors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::MemoryBarrier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "MemoryBarrier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::ConstructInternalThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "ConstructInternalThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::InternalThread* System::Threading::Thread::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::InternalThread*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Contexts::Context* System::Threading::Thread::get_CurrentContext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Contexts::Context*>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::GetCurrentThread_icall(::by_ref<::System::Threading::Thread*> thread) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentThread_icall", {}, { ::i2c::type_of<::by_ref<::System::Threading::Thread*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread);
}
inline ::System::Threading::Thread* System::Threading::Thread::GetCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetCurrentThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*>(nullptr, ___internal_method);
}
inline ::System::Threading::Thread* System::Threading::Thread::get_CurrentThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::get_CurrentThreadId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_CurrentThreadId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetDomainID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetDomainID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Threading::Thread::Thread_internal(::System::MulticastDelegate* start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "Thread_internal", {}, { ::i2c::type_of<::System::MulticastDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, start);
}
inline void System::Threading::Thread::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Thread*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsThreadPoolThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsThreadPoolThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsThreadPoolThreadInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsThreadPoolThreadInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::Thread::get_IsAlive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_IsAlive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Threading::Thread::set_IsBackground(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_IsBackground", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::Thread::SetName_icall(::System::Threading::InternalThread* thread, char16_t* name, int32_t nameLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                              { "SetName_icall", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread, name, nameLength);
}
inline void System::Threading::Thread::SetName_internal(::System::Threading::InternalThread* thread, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetName_internal", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread, name);
}
inline void System::Threading::Thread::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Threading::Thread::SpinWait_nop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SpinWait_nop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::SpinWait(int32_t iterations) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SpinWait", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, iterations);
}
inline void System::Threading::Thread::StartInternal(::System::Object* principal, ::by_ref<::System::Threading::StackCrawlMark> stackMark) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                           { "StartInternal", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, principal, stackMark);
}
inline void System::Threading::Thread::SetState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                           { "SetState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::System::Threading::ThreadState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread, set);
}
inline void System::Threading::Thread::ClrState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState clr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(),
                                                           { "ClrState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>(), ::i2c::type_of<::System::Threading::ThreadState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread, clr);
}
inline ::System::Threading::ThreadState System::Threading::Thread::GetState(::System::Threading::InternalThread* thread) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetState", {}, { ::i2c::type_of<::System::Threading::InternalThread*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadState>(nullptr, ___internal_method, thread);
}
inline int32_t System::Threading::Thread::SystemMaxStackStize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SystemMaxStackStize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetProcessDefaultStackSize(int32_t maxStackSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "GetProcessDefaultStackSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, maxStackSize);
}
inline void System::Threading::Thread::SetStart(::System::MulticastDelegate* start, int32_t maxStackSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "SetStart", {}, { ::i2c::type_of<::System::MulticastDelegate*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, maxStackSize);
}
inline int32_t System::Threading::Thread::get_ManagedThreadId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "get_ManagedThreadId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::Thread::BeginCriticalRegion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "BeginCriticalRegion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::Thread::EndCriticalRegion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "EndCriticalRegion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t System::Threading::Thread::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Thread*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::ThreadState System::Threading::Thread::ValidateThreadState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Thread*>(), { "ValidateThreadState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ThreadState>(this, ___internal_method);
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ThreadStart* start) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Thread*>(start));
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ParameterizedThreadStart* start) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Thread*>(start));
}
inline ::System::Threading::Thread* System::Threading::Thread::New_ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Thread*>(start, maxStackSize));
}
// Ctor Parameters []
constexpr ::System::Threading::Thread::Thread() {}
