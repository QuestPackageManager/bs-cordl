#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource.hpp"
#include "System/Threading/zzzz__SparselyPopulatedArray_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackCoreWorkArguments_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked1CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked2CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_LinkedNCancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Threading/zzzz__TimerCallback_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::*)()>(
    &::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cab3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c.__cctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::*)(::System::Object*)>(
    &::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cab3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(),
                                                                                           { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::setStaticF___9(::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* value) {
  ::cordl_internals::setStaticField<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*, "<>9",
                                    ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(
      std::forward<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(value));
}
inline ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*, "<>9",
                                           ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>();
}
inline void System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::__cctor_b__4_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>(),
                                                                                         { "<.cctor>b__4_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c* System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c*>());
}
// Ctor Parameters []
constexpr ::System::Threading::LinkedNCancellationTokenSource_CancellationTokenSource___c::LinkedNCancellationTokenSource_CancellationTokenSource___c() {}
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::get_IsCancellationRequested)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca7138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsCancellationCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::get_IsCancellationCompleted)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ca9658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsCancellationCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_IsDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca993c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_ThreadIDExecutingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_ThreadIDExecutingCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.set_ThreadIDExecutingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(
    &::System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca9944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "set_ThreadIDExecutingCallbacks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationToken (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ca9950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.get_ExecutingCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationCallbackInfo* (::System::Threading::CancellationTokenSource::*)()>(
    &::System::Threading::CancellationTokenSource::get_ExecutingCallback)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca99c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_ExecutingCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ca99d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::TimeSpan)>(&::System::Threading::CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5ca99f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.InitializeWithTimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(&::System::Threading::CancellationTokenSource::InitializeWithTimer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ca9b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "InitializeWithTimer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ca9bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(&::System::Threading::CancellationTokenSource::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ca9bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Cancel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancelAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::TimeSpan)>(&::System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ca9c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "CancelAfter", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancelAfter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(int32_t)>(&::System::Threading::CancellationTokenSource::CancelAfter)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5ca9d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "CancelAfter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.TimerCallbackLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Threading::CancellationTokenSource::TimerCallbackLogic)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ca9f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "TimerCallbackLogic", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5caa0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(&::System::Threading::CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5caa114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { ::i2c::class_of<::System::Threading::CancellationTokenSource*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ThrowIfDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)()>(&::System::Threading::CancellationTokenSource::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ca9968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ThrowIfDisposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ThrowObjectDisposedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::CancellationTokenSource::ThrowObjectDisposedException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5caa190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ThrowObjectDisposedException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.InternalRegister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenRegistration (::System::Threading::CancellationTokenSource::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::SynchronizationContext*, ::System::Threading::ExecutionContext*)>(
    &::System::Threading::CancellationTokenSource::InternalRegister)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5ca7604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                             { "InternalRegister",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.NotifyCancellation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(&::System::Threading::CancellationTokenSource::NotifyCancellation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ca9bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "NotifyCancellation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.ExecuteCallbackHandlers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(bool)>(&::System::Threading::CancellationTokenSource::ExecuteCallbackHandlers)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x5caa1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ExecuteCallbackHandlers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancellationCallbackCoreWork_OnSyncContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Object*)>(
    &::System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5caa77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                           { "CancellationCallbackCoreWork_OnSyncContext", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CancellationCallbackCoreWork
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Threading::CancellationCallbackCoreWorkArguments)>(
    &::System::Threading::CancellationTokenSource::CancellationCallbackCoreWork)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5caa6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                             { "CancellationCallbackCoreWork", {}, { ::i2c::type_of<::System::Threading::CancellationCallbackCoreWorkArguments>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenSource* (*)(::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(
    &::System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5caa900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                         { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenSource* (*)(::System::Threading::CancellationToken)>(
    &::System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5caac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                           { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.CreateLinkedTokenSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenSource* (*)(::ArrayW<::System::Threading::CancellationToken>)>(
    &::System::Threading::CancellationTokenSource::CreateLinkedTokenSource)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5caad10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                           { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::ArrayW<::System::Threading::CancellationToken>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationTokenSource.WaitForCallbackToComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::CancellationTokenSource::*)(::System::Threading::CancellationCallbackInfo*)>(
    &::System::Threading::CancellationTokenSource::WaitForCallbackToComplete)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ca9678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                           { "WaitForCallbackToComplete", {}, { ::i2c::type_of<::System::Threading::CancellationCallbackInfo*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ManualResetEvent*& System::Threading::CancellationTokenSource::__cordl_internal_get__kernelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Threading::CancellationTokenSource::__cordl_internal_get__kernelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kernelEvent;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__kernelEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kernelEvent = value;
}
constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*>&
System::Threading::CancellationTokenSource::__cordl_internal_get__registeredCallbacksLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacksLists;
}
constexpr ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*> const&
System::Threading::CancellationTokenSource::__cordl_internal_get__registeredCallbacksLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacksLists;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__registeredCallbacksLists(
    ::ArrayW<::System::Threading::SparselyPopulatedArray_1<::System::Threading::CancellationCallbackInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredCallbacksLists = value;
}
constexpr int32_t& System::Threading::CancellationTokenSource::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr int32_t const& System::Threading::CancellationTokenSource::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr int32_t& System::Threading::CancellationTokenSource::__cordl_internal_get__threadIDExecutingCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadIDExecutingCallbacks;
}
constexpr int32_t const& System::Threading::CancellationTokenSource::__cordl_internal_get__threadIDExecutingCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadIDExecutingCallbacks;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__threadIDExecutingCallbacks(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____threadIDExecutingCallbacks = value;
}
constexpr bool& System::Threading::CancellationTokenSource::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& System::Threading::CancellationTokenSource::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::CancellationCallbackInfo*& System::Threading::CancellationTokenSource::__cordl_internal_get__executingCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executingCallback;
}
constexpr ::System::Threading::CancellationCallbackInfo* const& System::Threading::CancellationTokenSource::__cordl_internal_get__executingCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executingCallback;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__executingCallback(::System::Threading::CancellationCallbackInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executingCallback = value;
}
constexpr ::System::Threading::Timer*& System::Threading::CancellationTokenSource::__cordl_internal_get__timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr ::System::Threading::Timer* const& System::Threading::CancellationTokenSource::__cordl_internal_get__timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer;
}
constexpr void System::Threading::CancellationTokenSource::__cordl_internal_set__timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer = value;
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_canceledSource(::System::Threading::CancellationTokenSource* value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_canceledSource", ::System::Threading::CancellationTokenSource*>(
      std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::getStaticF_s_canceledSource() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_canceledSource", ::System::Threading::CancellationTokenSource*>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_neverCanceledSource(::System::Threading::CancellationTokenSource* value) {
  ::cordl_internals::setStaticField<::System::Threading::CancellationTokenSource*, "s_neverCanceledSource", ::System::Threading::CancellationTokenSource*>(
      std::forward<::System::Threading::CancellationTokenSource*>(value));
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::getStaticF_s_neverCanceledSource() {
  return ::cordl_internals::getStaticField<::System::Threading::CancellationTokenSource*, "s_neverCanceledSource", ::System::Threading::CancellationTokenSource*>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_nLists(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_nLists", ::System::Threading::CancellationTokenSource*>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::CancellationTokenSource::getStaticF_s_nLists() {
  return ::cordl_internals::getStaticField<int32_t, "s_nLists", ::System::Threading::CancellationTokenSource*>();
}
inline void System::Threading::CancellationTokenSource::setStaticF_s_timerCallback(::System::Threading::TimerCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::TimerCallback*, "s_timerCallback", ::System::Threading::CancellationTokenSource*>(std::forward<::System::Threading::TimerCallback*>(value));
}
inline ::System::Threading::TimerCallback* System::Threading::CancellationTokenSource::getStaticF_s_timerCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::TimerCallback*, "s_timerCallback", ::System::Threading::CancellationTokenSource*>();
}
inline bool System::Threading::CancellationTokenSource::get_IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::CancellationTokenSource::get_IsCancellationCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsCancellationCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::CancellationTokenSource::get_IsDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_IsDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Threading::CancellationTokenSource::get_ThreadIDExecutingCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_ThreadIDExecutingCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::set_ThreadIDExecutingCallbacks(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "set_ThreadIDExecutingCallbacks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::CancellationToken System::Threading::CancellationTokenSource::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
inline ::System::Threading::CancellationCallbackInfo* System::Threading::CancellationTokenSource::get_ExecutingCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "get_ExecutingCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationCallbackInfo*>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::_ctor(::System::TimeSpan delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void System::Threading::CancellationTokenSource::InitializeWithTimer(int32_t millisecondsDelay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "InitializeWithTimer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, millisecondsDelay);
}
inline void System::Threading::CancellationTokenSource::Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::Cancel(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Cancel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::CancelAfter(::System::TimeSpan delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "CancelAfter", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline void System::Threading::CancellationTokenSource::CancelAfter(int32_t millisecondsDelay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "CancelAfter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, millisecondsDelay);
}
inline void System::Threading::CancellationTokenSource::TimerCallbackLogic(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "TimerCallbackLogic", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void System::Threading::CancellationTokenSource::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::CancellationTokenSource*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Threading::CancellationTokenSource::ThrowIfDisposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ThrowIfDisposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Threading::CancellationTokenSource::ThrowObjectDisposedException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ThrowObjectDisposedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::CancellationTokenRegistration System::Threading::CancellationTokenSource::InternalRegister(::System::Action_1<::System::Object*>* callback,
                                                                                                                       ::System::Object* stateForCallback,
                                                                                                                       ::System::Threading::SynchronizationContext* targetSyncContext,
                                                                                                                       ::System::Threading::ExecutionContext* executionContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                           { "InternalRegister",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Threading::SynchronizationContext*>(), ::i2c::type_of<::System::Threading::ExecutionContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenRegistration>(this, ___internal_method, callback, stateForCallback, targetSyncContext, executionContext);
}
inline void System::Threading::CancellationTokenSource::NotifyCancellation(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "NotifyCancellation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::ExecuteCallbackHandlers(bool throwOnFirstException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(), { "ExecuteCallbackHandlers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, throwOnFirstException);
}
inline void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork_OnSyncContext(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                         { "CancellationCallbackCoreWork_OnSyncContext", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Threading::CancellationTokenSource::CancellationCallbackCoreWork(::System::Threading::CancellationCallbackCoreWorkArguments args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                           { "CancellationCallbackCoreWork", {}, { ::i2c::type_of<::System::Threading::CancellationCallbackCoreWorkArguments>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(::System::Threading::CancellationToken token1,
                                                                                                                         ::System::Threading::CancellationToken token2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                       { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*>(nullptr, ___internal_method, token1, token2);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                         { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*>(nullptr, ___internal_method, token);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::CreateLinkedTokenSource(::ArrayW<::System::Threading::CancellationToken> tokens) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                         { "CreateLinkedTokenSource", {}, { ::i2c::type_of<::ArrayW<::System::Threading::CancellationToken>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*>(nullptr, ___internal_method, tokens);
}
inline void System::Threading::CancellationTokenSource::WaitForCallbackToComplete(::System::Threading::CancellationCallbackInfo* callbackInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::CancellationTokenSource*>(),
                                                                                         { "WaitForCallbackToComplete", {}, { ::i2c::type_of<::System::Threading::CancellationCallbackInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callbackInfo);
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::CancellationTokenSource*>());
}
inline ::System::Threading::CancellationTokenSource* System::Threading::CancellationTokenSource::New_ctor(::System::TimeSpan delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::CancellationTokenSource*>(delay));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::CancellationTokenSource::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::CancellationTokenSource::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationTokenSource::CancellationTokenSource() {}
