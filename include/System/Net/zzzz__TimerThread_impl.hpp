#pragma once
// IWYU pragma private; include "System/Net/TimerThread.hpp"
#include "System/Net/zzzz__TimerThread_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__TimerThread_def.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Net::TimerThread_Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_Queue::*)(int32_t)>(&::System::Net::TimerThread_Queue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x44ac3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Queue.get_Duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::TimerThread_Queue::*)()>(&::System::Net::TimerThread_Queue::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44ac418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), "get_Duration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Queue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::TimerThread_Timer* (::System::Net::TimerThread_Queue::*)(::System::Net::TimerThread_Callback*, ::System::Object*)>(&::System::Net::TimerThread_Queue::CreateTimer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), 4));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::TimerThread_Queue::__cordl_internal_get_m_DurationMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr int32_t const& System::Net::TimerThread_Queue::__cordl_internal_get_m_DurationMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr void System::Net::TimerThread_Queue::__cordl_internal_set_m_DurationMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DurationMilliseconds = value;
}
inline void System::Net::TimerThread_Queue::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::TimerThread_Queue::get_Duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), "get_Duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_Timer* System::Net::TimerThread_Queue::CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Queue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Timer*, false>(this, ___internal_method, callback, context);
}
inline ::System::Net::TimerThread_Queue* System::Net::TimerThread_Queue::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_Queue*>(durationMilliseconds));
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_Queue::TimerThread_Queue() {}
//  Writing Method size for method: ::System::Net::TimerThread_Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_Timer::*)(int32_t)>(&::System::Net::TimerThread_Timer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x44ac420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Timer.get_StartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::TimerThread_Timer::*)()>(&::System::Net::TimerThread_Timer::get_StartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44ac454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "get_StartTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Timer.get_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::TimerThread_Timer::*)()>(&::System::Net::TimerThread_Timer::get_Expiration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44ac45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "get_Expiration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Timer.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_Timer::*)()>(&::System::Net::TimerThread_Timer::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Timer.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_Timer::*)()>(&::System::Net::TimerThread_Timer::get_HasExpired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Timer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_Timer::*)()>(&::System::Net::TimerThread_Timer::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44ac468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::TimerThread_Timer::__cordl_internal_get_m_StartTimeMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMilliseconds;
}
constexpr int32_t const& System::Net::TimerThread_Timer::__cordl_internal_get_m_StartTimeMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMilliseconds;
}
constexpr void System::Net::TimerThread_Timer::__cordl_internal_set_m_StartTimeMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartTimeMilliseconds = value;
}
constexpr int32_t& System::Net::TimerThread_Timer::__cordl_internal_get_m_DurationMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr int32_t const& System::Net::TimerThread_Timer::__cordl_internal_get_m_DurationMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr void System::Net::TimerThread_Timer::__cordl_internal_set_m_DurationMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DurationMilliseconds = value;
}
inline void System::Net::TimerThread_Timer::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::TimerThread_Timer::get_StartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "get_StartTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::TimerThread_Timer::get_Expiration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "get_Expiration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_Timer::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_Timer::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::TimerThread_Timer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Timer*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_Timer* System::Net::TimerThread_Timer::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_Timer*>(durationMilliseconds));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::TimerThread_Timer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::TimerThread_Timer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_Timer::TimerThread_Timer() {}
//  Writing Method size for method: ::System::Net::TimerThread_Callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_Callback::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Net::TimerThread_Callback::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4497da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_Callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_Callback::*)(::System::Net::TimerThread_Timer*, int32_t, ::System::Object*)>(
    &::System::Net::TimerThread_Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x44ac474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Net::TimerThread_Callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Net::TimerThread_Callback::Invoke(::System::Net::TimerThread_Timer* timer, int32_t timeNoticed, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_Callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer, timeNoticed, context);
}
inline ::System::Net::TimerThread_Callback* System::Net::TimerThread_Callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_Callback*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_Callback::TimerThread_Callback() {}
//  Writing Method size for method: ::System::Net::TimerThread_TimerQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_TimerQueue::*)(int32_t)>(&::System::Net::TimerThread_TimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x44ab790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerQueue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_Timer* (
    ::System::Net::TimerThread_TimerQueue::*)(::System::Net::TimerThread_Callback*, ::System::Object*)>(&::System::Net::TimerThread_TimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x44ac4b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerQueue.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_TimerQueue::*)(::ByRef<int32_t>)>(&::System::Net::TimerThread_TimerQueue::Fire)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x44ac0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Net::TimerThread_TimerQueue::__cordl_internal_get_m_ThisHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThisHandle;
}
constexpr ::System::IntPtr const& System::Net::TimerThread_TimerQueue::__cordl_internal_get_m_ThisHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThisHandle;
}
constexpr void System::Net::TimerThread_TimerQueue::__cordl_internal_set_m_ThisHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThisHandle = value;
}
constexpr ::System::Net::TimerThread_TimerNode*& System::Net::TimerThread_TimerQueue::__cordl_internal_get_m_Timers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timers;
}
constexpr ::System::Net::TimerThread_TimerNode* const& System::Net::TimerThread_TimerQueue::__cordl_internal_get_m_Timers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timers;
}
constexpr void System::Net::TimerThread_TimerQueue::__cordl_internal_set_m_Timers(::System::Net::TimerThread_TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Timers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::TimerThread_TimerQueue::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline ::System::Net::TimerThread_Timer* System::Net::TimerThread_TimerQueue::CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Timer*, false>(this, ___internal_method, callback, context);
}
inline bool System::Net::TimerThread_TimerQueue::Fire(::ByRef<int32_t> nextExpiration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerQueue*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nextExpiration);
}
inline ::System::Net::TimerThread_TimerQueue* System::Net::TimerThread_TimerQueue::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_TimerQueue*>(durationMilliseconds));
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_TimerQueue::TimerThread_TimerQueue() {}
//  Writing Method size for method: ::System::Net::TimerThread_InfiniteTimerQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_InfiniteTimerQueue::*)()>(&::System::Net::TimerThread_InfiniteTimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x44ab770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimerQueue*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_InfiniteTimerQueue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_Timer* (
    ::System::Net::TimerThread_InfiniteTimerQueue::*)(::System::Net::TimerThread_Callback*, ::System::Object*)>(&::System::Net::TimerThread_InfiniteTimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x44ac968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimerQueue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimerQueue*>::get(), 4));
    return ___internal_method;
  }
};
inline void System::Net::TimerThread_InfiniteTimerQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimerQueue*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_Timer* System::Net::TimerThread_InfiniteTimerQueue::CreateTimer(::System::Net::TimerThread_Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimerQueue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Timer*, false>(this, ___internal_method, callback, context);
}
inline ::System::Net::TimerThread_InfiniteTimerQueue* System::Net::TimerThread_InfiniteTimerQueue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_InfiniteTimerQueue*>());
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_InfiniteTimerQueue::TimerThread_InfiniteTimerQueue() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::TimerNode_TimerThread_TimerState::TimerNode_TimerThread_TimerState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::TimerNode_TimerThread_TimerState::TimerNode_TimerThread_TimerState() {}
constexpr ::System::Net::TimerNode_TimerThread_TimerState System::Net::TimerNode_TimerThread_TimerState::Ready{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::TimerNode_TimerThread_TimerState System::Net::TimerNode_TimerThread_TimerState::Fired{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::TimerNode_TimerThread_TimerState System::Net::TimerNode_TimerThread_TimerState::Cancelled{ static_cast<int32_t>(0x2) };
constexpr ::System::Net::TimerNode_TimerThread_TimerState System::Net::TimerNode_TimerThread_TimerState::Sentinel{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::TimerThread_TimerNode::*)(::System::Net::TimerThread_Callback*, ::System::Object*, int32_t, ::System::Object*)>(&::System::Net::TimerThread_TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x44ac698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_Callback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_TimerNode::*)()>(&::System::Net::TimerThread_TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44ac488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_TimerNode::*)()>(&::System::Net::TimerThread_TimerNode::get_HasExpired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x44ac9fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.get_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_TimerNode* (::System::Net::TimerThread_TimerNode::*)()>(
    &::System::Net::TimerThread_TimerNode::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44aca0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "get_Next",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.set_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_TimerNode::*)(::System::Net::TimerThread_TimerNode*)>(
    &::System::Net::TimerThread_TimerNode::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44aca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_TimerNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.get_Prev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_TimerNode* (::System::Net::TimerThread_TimerNode::*)()>(
    &::System::Net::TimerThread_TimerNode::get_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44aca1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "get_Prev",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.set_Prev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_TimerNode::*)(::System::Net::TimerThread_TimerNode*)>(
    &::System::Net::TimerThread_TimerNode::set_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44aca24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "set_Prev", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_TimerNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_TimerNode::*)()>(&::System::Net::TimerThread_TimerNode::Cancel)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x44aca2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_TimerNode.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_TimerNode::*)()>(&::System::Net::TimerThread_TimerNode::Fire)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x44ac6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "Fire",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::TimerNode_TimerThread_TimerState& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_TimerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimerState;
}
constexpr ::System::Net::TimerNode_TimerThread_TimerState const& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_TimerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimerState;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_m_TimerState(::System::Net::TimerNode_TimerThread_TimerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimerState = value;
}
constexpr ::System::Net::TimerThread_Callback*& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::System::Net::TimerThread_Callback* const& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_m_Callback(::System::Net::TimerThread_Callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr ::System::Object* const& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_m_Context(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_QueueLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QueueLock;
}
constexpr ::System::Object* const& System::Net::TimerThread_TimerNode::__cordl_internal_get_m_QueueLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QueueLock;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_m_QueueLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_QueueLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::TimerThread_TimerNode*& System::Net::TimerThread_TimerNode::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::System::Net::TimerThread_TimerNode* const& System::Net::TimerThread_TimerNode::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_next(::System::Net::TimerThread_TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::TimerThread_TimerNode*& System::Net::TimerThread_TimerNode::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::System::Net::TimerThread_TimerNode* const& System::Net::TimerThread_TimerNode::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void System::Net::TimerThread_TimerNode::__cordl_internal_set_prev(::System::Net::TimerThread_TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::TimerThread_TimerNode::_ctor(::System::Net::TimerThread_Callback* callback, ::System::Object* context, int32_t durationMilliseconds, ::System::Object* queueLock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_Callback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, context, durationMilliseconds, queueLock);
}
inline void System::Net::TimerThread_TimerNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_TimerNode::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_TimerNode* System::Net::TimerThread_TimerNode::get_Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "get_Next",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_TimerNode*, false>(this, ___internal_method);
}
inline void System::Net::TimerThread_TimerNode::set_Next(::System::Net::TimerThread_TimerNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_TimerNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::TimerThread_TimerNode* System::Net::TimerThread_TimerNode::get_Prev() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "get_Prev",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_TimerNode*, false>(this, ___internal_method);
}
inline void System::Net::TimerThread_TimerNode::set_Prev(::System::Net::TimerThread_TimerNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "set_Prev", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TimerThread_TimerNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::TimerThread_TimerNode::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_TimerNode::Fire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_TimerNode*>::get(), "Fire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_TimerNode* System::Net::TimerThread_TimerNode::New_ctor(::System::Net::TimerThread_Callback* callback, ::System::Object* context, int32_t durationMilliseconds,
                                                                                          ::System::Object* queueLock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_TimerNode*>(callback, context, durationMilliseconds, queueLock));
}
inline ::System::Net::TimerThread_TimerNode* System::Net::TimerThread_TimerNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_TimerNode*>());
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_TimerNode::TimerThread_TimerNode() {}
//  Writing Method size for method: ::System::Net::TimerThread_InfiniteTimer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::TimerThread_InfiniteTimer::*)()>(&::System::Net::TimerThread_InfiniteTimer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x44ac9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_InfiniteTimer.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_InfiniteTimer::*)()>(&::System::Net::TimerThread_InfiniteTimer::get_HasExpired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44acb4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread_InfiniteTimer.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::TimerThread_InfiniteTimer::*)()>(&::System::Net::TimerThread_InfiniteTimer::Cancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x44acb54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::TimerThread_InfiniteTimer::__cordl_internal_get_cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr int32_t const& System::Net::TimerThread_InfiniteTimer::__cordl_internal_get_cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr void System::Net::TimerThread_InfiniteTimer::__cordl_internal_set_cancelled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelled = value;
}
inline void System::Net::TimerThread_InfiniteTimer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_InfiniteTimer::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::TimerThread_InfiniteTimer::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread_InfiniteTimer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::TimerThread_InfiniteTimer* System::Net::TimerThread_InfiniteTimer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::TimerThread_InfiniteTimer*>());
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread_InfiniteTimer::TimerThread_InfiniteTimer() {}
//  Writing Method size for method: ::System::Net::TimerThread.CreateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_Queue* (*)(int32_t)>(&::System::Net::TimerThread::CreateQueue)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x44a7100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "CreateQueue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.GetOrCreateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TimerThread_Queue* (*)(int32_t)>(&::System::Net::TimerThread::GetOrCreateQueue)> {
  constexpr static std::size_t size = 0x958;
  constexpr static std::size_t addrs = 0x449ba30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "GetOrCreateQueue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.Prod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::Prod)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x44ab820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "Prod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.ThreadProc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::ThreadProc)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x44ab930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "ThreadProc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.StopTimerThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::StopTimerThread)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x44ac2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "StopTimerThread",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.IsTickBetween
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::System::Net::TimerThread::IsTickBetween)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x44ac28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "IsTickBetween", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.OnDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::EventArgs*)>(&::System::Net::TimerThread::OnDomainUnload)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x44ac32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "OnDomainUnload", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::TimerThread::setStaticF_s_Queues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_Queues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* System::Net::TimerThread::getStaticF_s_Queues() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_Queues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_NewQueues(::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_NewQueues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*>(value));
}
inline ::System::Collections::Generic::LinkedList_1<::System::WeakReference*>* System::Net::TimerThread::getStaticF_s_NewQueues() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::LinkedList_1<::System::WeakReference*>*, "s_NewQueues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadState(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::TimerThread::getStaticF_s_ThreadState() {
  return ::cordl_internals::getStaticField<int32_t, "s_ThreadState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadReadyEvent(::System::Threading::AutoResetEvent* value) {
  ::cordl_internals::setStaticField<::System::Threading::AutoResetEvent*, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::System::Threading::AutoResetEvent*>(value));
}
inline ::System::Threading::AutoResetEvent* System::Net::TimerThread::getStaticF_s_ThreadReadyEvent() {
  return ::cordl_internals::getStaticField<::System::Threading::AutoResetEvent*, "s_ThreadReadyEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadShutdownEvent(::System::Threading::ManualResetEvent* value) {
  ::cordl_internals::setStaticField<::System::Threading::ManualResetEvent*, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::System::Threading::ManualResetEvent*>(value));
}
inline ::System::Threading::ManualResetEvent* System::Net::TimerThread::getStaticF_s_ThreadShutdownEvent() {
  return ::cordl_internals::getStaticField<::System::Threading::ManualResetEvent*, "s_ThreadShutdownEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_ThreadEvents(::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*>, "s_ThreadEvents",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*>>(value));
}
inline ::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*> System::Net::TimerThread::getStaticF_s_ThreadEvents() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::WaitHandle*, ::Array<::System::Threading::WaitHandle*>*>, "s_ThreadEvents",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_CacheScanIteration(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Net::TimerThread::getStaticF_s_CacheScanIteration() {
  return ::cordl_internals::getStaticField<int32_t, "s_CacheScanIteration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline void System::Net::TimerThread::setStaticF_s_QueuesCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Net::TimerThread::getStaticF_s_QueuesCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_QueuesCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get>();
}
inline ::System::Net::TimerThread_Queue* System::Net::TimerThread::CreateQueue(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "CreateQueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
}
inline ::System::Net::TimerThread_Queue* System::Net::TimerThread::GetOrCreateQueue(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "GetOrCreateQueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TimerThread_Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
}
inline void System::Net::TimerThread::Prod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "Prod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::TimerThread::ThreadProc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "ThreadProc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::TimerThread::StopTimerThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "StopTimerThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Net::TimerThread::IsTickBetween(int32_t start, int32_t end, int32_t comparand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "IsTickBetween", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, start, end, comparand);
}
inline void System::Net::TimerThread::OnDomainUnload(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "OnDomainUnload", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::System::Net::TimerThread::TimerThread() {}
