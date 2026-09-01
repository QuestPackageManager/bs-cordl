#pragma once
// IWYU pragma private; include "System\Threading\ThreadPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ThreadPool_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
#include "System/Threading/zzzz__ThreadPool_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitOrTimerCallback_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
template <typename TState> constexpr ::System::Action_1<TState>*& System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::__cordl_internal_get_callBack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callBack;
}
template <typename TState> constexpr ::System::Action_1<TState>* const& System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::__cordl_internal_get_callBack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callBack;
}
template <typename TState> constexpr void System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::__cordl_internal_set_callBack(::System::Action_1<TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callBack = value;
}
template <typename TState> inline void System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TState> inline void System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::_QueueUserWorkItem_b__0(::System::Object* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>*>(),
                                                                                         { "<QueueUserWorkItem>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TState> inline ::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>* System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>*>());
}
// Ctor Parameters []
template <typename TState> constexpr ::System::Threading::ThreadPool___c__DisplayClass17_0_1<TState>::ThreadPool___c__DisplayClass17_0_1() {}
template <typename TState> constexpr ::System::Action_1<TState>*& System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::__cordl_internal_get_callBack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callBack;
}
template <typename TState> constexpr ::System::Action_1<TState>* const& System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::__cordl_internal_get_callBack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callBack;
}
template <typename TState> constexpr void System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::__cordl_internal_set_callBack(::System::Action_1<TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___callBack = value;
}
template <typename TState> inline void System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TState> inline void System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::_UnsafeQueueUserWorkItem_b__0(::System::Object* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>*>(),
                                                                                         { "<UnsafeQueueUserWorkItem>b__0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
template <typename TState> inline ::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>* System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>*>());
}
// Ctor Parameters []
template <typename TState> constexpr ::System::Threading::ThreadPool___c__DisplayClass18_0_1<TState>::ThreadPool___c__DisplayClass18_0_1() {}
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::RegisteredWaitHandle* (*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*,
                                                                                                      uint32_t, bool, ::by_ref<::System::Threading::StackCrawlMark>, bool)>(
    &::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5cb6844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                         { "RegisterWaitForSingleObject",
                                           {},
                                           { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::RegisteredWaitHandle* (*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*,
                                                                                                      int32_t, bool)>(&::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cb6b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RegisterWaitForSingleObject",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                                                     ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RegisterWaitForSingleObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::RegisteredWaitHandle* (*)(::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*,
                                                                                                      ::System::TimeSpan, bool)>(&::System::Threading::ThreadPool::RegisterWaitForSingleObject)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cb6b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RegisterWaitForSingleObject",
                                                                                   {},
                                                                                   { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                                                     ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::WaitCallback*, ::System::Object*)>(&::System::Threading::ThreadPool::QueueUserWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb6ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                             { "QueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::WaitCallback*)>(&::System::Threading::ThreadPool::QueueUserWorkItem)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5cb6dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "QueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.UnsafeQueueUserWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::WaitCallback*, ::System::Object*)>(&::System::Threading::ThreadPool::UnsafeQueueUserWorkItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cb6ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                             { "UnsafeQueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.QueueUserWorkItemHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::WaitCallback*, ::System::Object*, ::by_ref<::System::Threading::StackCrawlMark>, bool, bool)>(
    &::System::Threading::ThreadPool::QueueUserWorkItemHelper)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5cb6ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                             { "QueueUserWorkItemHelper",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.UnsafeQueueCustomWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::IThreadPoolWorkItem*, bool)>(&::System::Threading::ThreadPool::UnsafeQueueCustomWorkItem)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5cb6eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                             { "UnsafeQueueCustomWorkItem", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.TryPopCustomWorkItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Threading::IThreadPoolWorkItem*)>(&::System::Threading::ThreadPool::TryPopCustomWorkItem)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5cb6f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "TryPopCustomWorkItem", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.RequestWorkerThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::RequestWorkerThread)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb4bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RequestWorkerThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.EnsureVMInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::ThreadPool::EnsureVMInitialized)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5cb6e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "EnsureVMInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb5fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.ReportThreadStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::System::Threading::ThreadPool::ReportThreadStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb6fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "ReportThreadStatus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cb6fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemProgress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemProgressNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemProgressNative)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb6fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemProgressNative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.NotifyWorkItemQueued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Threading::ThreadPool::NotifyWorkItemQueued)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb52b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemQueued", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.InitializeVMTp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::System::Threading::ThreadPool::InitializeVMTp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cb6fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "InitializeVMTp", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ThreadPool.get_IsThreadPoolThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::ThreadPool::get_IsThreadPoolThread)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cb6ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "get_IsThreadPoolThread", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::RegisteredWaitHandle* System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject,
                                                                                                             ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state,
                                                                                                             uint32_t millisecondsTimeOutInterval, bool executeOnlyOnce,
                                                                                                             ::by_ref<::System::Threading::StackCrawlMark> stackMark, bool compressStack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                              { "RegisterWaitForSingleObject",
                                                {},
                                                { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle*>(nullptr, ___internal_method, waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce,
                                                                                         stackMark, compressStack);
}
inline ::System::Threading::RegisteredWaitHandle* System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject,
                                                                                                             ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state,
                                                                                                             int32_t millisecondsTimeOutInterval, bool executeOnlyOnce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RegisterWaitForSingleObject",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle*>(nullptr, ___internal_method, waitObject, callBack, state, millisecondsTimeOutInterval, executeOnlyOnce);
}
inline ::System::Threading::RegisteredWaitHandle* System::Threading::ThreadPool::RegisterWaitForSingleObject(::System::Threading::WaitHandle* waitObject,
                                                                                                             ::System::Threading::WaitOrTimerCallback* callBack, ::System::Object* state,
                                                                                                             ::System::TimeSpan timeout, bool executeOnlyOnce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RegisterWaitForSingleObject",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                                                   ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::RegisteredWaitHandle*>(nullptr, ___internal_method, waitObject, callBack, state, timeout, executeOnlyOnce);
}
inline bool System::Threading::ThreadPool::QueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                           { "QueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack, state);
}
inline bool System::Threading::ThreadPool::QueueUserWorkItem(::System::Threading::WaitCallback* callBack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "QueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack);
}
inline bool System::Threading::ThreadPool::UnsafeQueueUserWorkItem(::System::Threading::WaitCallback* callBack, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                           { "UnsafeQueueUserWorkItem", {}, { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack, state);
}
template <typename TState> inline bool System::Threading::ThreadPool::QueueUserWorkItem(::System::Action_1<TState>* callBack, TState state, bool preferLocal) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                       { "QueueUserWorkItem", { ::i2c::class_of<TState>() }, { ::i2c::type_of<::System::Action_1<TState>*>(), ::i2c::type_of<TState>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack, state, preferLocal);
}
template <typename TState> inline bool System::Threading::ThreadPool::UnsafeQueueUserWorkItem(::System::Action_1<TState>* callBack, TState state, bool preferLocal) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                          { "UnsafeQueueUserWorkItem", { ::i2c::class_of<TState>() }, { ::i2c::type_of<::System::Action_1<TState>*>(), ::i2c::type_of<TState>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack, state, preferLocal);
}
inline bool System::Threading::ThreadPool::QueueUserWorkItemHelper(::System::Threading::WaitCallback* callBack, ::System::Object* state, ::by_ref<::System::Threading::StackCrawlMark> stackMark,
                                                                   bool compressStack, bool forceGlobal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                           { "QueueUserWorkItemHelper",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::WaitCallback*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::by_ref<::System::Threading::StackCrawlMark>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callBack, state, stackMark, compressStack, forceGlobal);
}
inline void System::Threading::ThreadPool::UnsafeQueueCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem, bool forceGlobal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(),
                                                           { "UnsafeQueueCustomWorkItem", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, workItem, forceGlobal);
}
inline bool System::Threading::ThreadPool::TryPopCustomWorkItem(::System::Threading::IThreadPoolWorkItem* workItem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "TryPopCustomWorkItem", {}, { ::i2c::type_of<::System::Threading::IThreadPoolWorkItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, workItem);
}
inline bool System::Threading::ThreadPool::RequestWorkerThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "RequestWorkerThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::ThreadPool::EnsureVMInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "EnsureVMInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Threading::ThreadPool::NotifyWorkItemComplete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Threading::ThreadPool::ReportThreadStatus(bool isWorking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "ReportThreadStatus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, isWorking);
}
inline void System::Threading::ThreadPool::NotifyWorkItemProgress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemProgress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::ThreadPool::NotifyWorkItemProgressNative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemProgressNative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::ThreadPool::NotifyWorkItemQueued() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "NotifyWorkItemQueued", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Threading::ThreadPool::InitializeVMTp(::by_ref<bool> enableWorkerTracking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "InitializeVMTp", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enableWorkerTracking);
}
inline bool System::Threading::ThreadPool::get_IsThreadPoolThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ThreadPool*>(), { "get_IsThreadPoolThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::ThreadPool::ThreadPool() {}
