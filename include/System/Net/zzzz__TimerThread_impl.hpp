#pragma once
#include "System/Net/zzzz__TimerThread_impl.hpp"
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
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
//  Writing Method size for method: ::System::Net::__TimerThread__Queue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Queue::*)(int32_t)>(&::System::Net::__TimerThread__Queue::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a95d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Queue.get_Duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Queue::*)()>(&::System::Net::__TimerThread__Queue::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a95db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), "get_Duration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Queue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (
    ::System::Net::__TimerThread__Queue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__Queue::CreateTimer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), 4));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::__TimerThread__Queue::__cordl_internal_get_m_DurationMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr int32_t const& System::Net::__TimerThread__Queue::__cordl_internal_get_m_DurationMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr void System::Net::__TimerThread__Queue::__cordl_internal_set_m_DurationMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DurationMilliseconds = value;
}
inline ::System::Net::__TimerThread__Queue* System::Net::__TimerThread__Queue::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__Queue*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__Queue::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::__TimerThread__Queue::get_Duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), "get_Duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__Queue::CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Queue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(this, ___internal_method, callback, context);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__Queue::__TimerThread__Queue() {}
//  Writing Method size for method: ::System::Net::__TimerThread__Timer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Timer::*)(int32_t)>(&::System::Net::__TimerThread__Timer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a95db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_StartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_StartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a95dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "get_StartTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_Expiration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_Expiration)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a95df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "get_Expiration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::Cancel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::get_HasExpired)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Timer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Timer::*)()>(&::System::Net::__TimerThread__Timer::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a95e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::__TimerThread__Timer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::__TimerThread__Timer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& System::Net::__TimerThread__Timer::__cordl_internal_get_m_StartTimeMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMilliseconds;
}
constexpr int32_t const& System::Net::__TimerThread__Timer::__cordl_internal_get_m_StartTimeMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartTimeMilliseconds;
}
constexpr void System::Net::__TimerThread__Timer::__cordl_internal_set_m_StartTimeMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartTimeMilliseconds = value;
}
constexpr int32_t& System::Net::__TimerThread__Timer::__cordl_internal_get_m_DurationMilliseconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr int32_t const& System::Net::__TimerThread__Timer::__cordl_internal_get_m_DurationMilliseconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DurationMilliseconds;
}
constexpr void System::Net::__TimerThread__Timer::__cordl_internal_set_m_DurationMilliseconds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DurationMilliseconds = value;
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__Timer::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__Timer*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__Timer::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline int32_t System::Net::__TimerThread__Timer::get_StartTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "get_StartTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::__TimerThread__Timer::get_Expiration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "get_Expiration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__Timer::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__Timer::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::__TimerThread__Timer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Timer*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__Timer::__TimerThread__Timer() {}
//  Writing Method size for method: ::System::Net::__TimerThread__Callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Callback::*)(::System::Object*, void*)>(
    &::System::Net::__TimerThread__Callback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a95e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__Callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__Callback::*)(::System::Net::__TimerThread__Timer*, int32_t, ::System::Object*)>(
    &::System::Net::__TimerThread__Callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a95f3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Net::__TimerThread__Callback* System::Net::__TimerThread__Callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__Callback*>(object, method));
}
inline void System::Net::__TimerThread__Callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Net::__TimerThread__Callback::Invoke(::System::Net::__TimerThread__Timer* timer, int32_t timeNoticed, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__Callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timer, timeNoticed, context);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__Callback::__TimerThread__Callback() {}
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerQueue::*)(int32_t)>(&::System::Net::__TimerThread__TimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2a94744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (
    ::System::Net::__TimerThread__TimerQueue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__TimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2a95f80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerQueue.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerQueue::*)(ByRef<int32_t>)>(
    &::System::Net::__TimerThread__TimerQueue::Fire)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2a95a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
constexpr void*& System::Net::__TimerThread__TimerQueue::__cordl_internal_get_m_ThisHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThisHandle;
}
constexpr void* const& System::Net::__TimerThread__TimerQueue::__cordl_internal_get_m_ThisHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ThisHandle;
}
constexpr void System::Net::__TimerThread__TimerQueue::__cordl_internal_set_m_ThisHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ThisHandle = value;
}
constexpr ::System::Net::__TimerThread__TimerNode*& System::Net::__TimerThread__TimerQueue::__cordl_internal_get_m_Timers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& System::Net::__TimerThread__TimerQueue::__cordl_internal_get_m_Timers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timers;
}
constexpr void System::Net::__TimerThread__TimerQueue::__cordl_internal_set_m_Timers(::System::Net::__TimerThread__TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Timers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__TimerThread__TimerQueue* System::Net::__TimerThread__TimerQueue::New_ctor(int32_t durationMilliseconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__TimerQueue*>(durationMilliseconds));
}
inline void System::Net::__TimerThread__TimerQueue::_ctor(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, durationMilliseconds);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__TimerQueue::CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(this, ___internal_method, callback, context);
}
inline bool System::Net::__TimerThread__TimerQueue::Fire(ByRef<int32_t> nextExpiration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerQueue*>::get(), "Fire", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nextExpiration);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__TimerQueue::__TimerThread__TimerQueue() {}
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimerQueue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__InfiniteTimerQueue::*)()>(
    &::System::Net::__TimerThread__InfiniteTimerQueue::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a94724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimerQueue.CreateTimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Timer* (
    ::System::Net::__TimerThread__InfiniteTimerQueue::*)(::System::Net::__TimerThread__Callback*, ::System::Object*)>(&::System::Net::__TimerThread__InfiniteTimerQueue::CreateTimer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a96460;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Net::__TimerThread__InfiniteTimerQueue* System::Net::__TimerThread__InfiniteTimerQueue::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__InfiniteTimerQueue*>());
}
inline void System::Net::__TimerThread__InfiniteTimerQueue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::__TimerThread__Timer* System::Net::__TimerThread__InfiniteTimerQueue::CreateTimer(::System::Net::__TimerThread__Callback* callback, ::System::Object* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimerQueue*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Timer*, false>(this, ___internal_method, callback, context);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__InfiniteTimerQueue::__TimerThread__InfiniteTimerQueue() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState::__TimerThread__TimerNode__TimerState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState::__TimerThread__TimerNode__TimerState() {}
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState GlobalNamespace::__TimerThread__TimerNode__TimerState::Ready{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState GlobalNamespace::__TimerThread__TimerNode__TimerState::Fired{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState GlobalNamespace::__TimerThread__TimerNode__TimerState::Cancelled{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState GlobalNamespace::__TimerThread__TimerNode__TimerState::Sentinel{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(
    ::System::Net::__TimerThread__Callback*, ::System::Object*, int32_t, ::System::Object*)>(&::System::Net::__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a9618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a95f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::get_HasExpired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a964fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__TimerNode* (::System::Net::__TimerThread__TimerNode::*)()>(
    &::System::Net::__TimerThread__TimerNode::get_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a9650c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "get_Next",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.set_Next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(::System::Net::__TimerThread__TimerNode*)>(
    &::System::Net::__TimerThread__TimerNode::set_Next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a96514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.get_Prev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__TimerNode* (::System::Net::__TimerThread__TimerNode::*)()>(
    &::System::Net::__TimerThread__TimerNode::get_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a9651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "get_Prev",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.set_Prev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__TimerNode::*)(::System::Net::__TimerThread__TimerNode*)>(
    &::System::Net::__TimerThread__TimerNode::set_Prev)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a96524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "set_Prev", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::Cancel)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2a9652c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__TimerNode.Fire
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__TimerNode::*)()>(&::System::Net::__TimerThread__TimerNode::Fire)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2a961e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "Fire",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_TimerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimerState;
}
constexpr ::GlobalNamespace::__TimerThread__TimerNode__TimerState const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_TimerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TimerState;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_m_TimerState(::GlobalNamespace::__TimerThread__TimerNode__TimerState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TimerState = value;
}
constexpr ::System::Net::__TimerThread__Callback*& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__Callback*> const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_m_Callback(::System::Net::__TimerThread__Callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Context;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_m_Context(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_QueueLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QueueLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_m_QueueLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_QueueLock;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_m_QueueLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_QueueLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__TimerThread__TimerNode*& System::Net::__TimerThread__TimerNode::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_next(::System::Net::__TimerThread__TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::__TimerThread__TimerNode*& System::Net::__TimerThread__TimerNode::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::__TimerThread__TimerNode*> const& System::Net::__TimerThread__TimerNode::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
constexpr void System::Net::__TimerThread__TimerNode::__cordl_internal_set_prev(::System::Net::__TimerThread__TimerNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::New_ctor(::System::Net::__TimerThread__Callback* callback, ::System::Object* context,
                                                                                                int32_t durationMilliseconds, ::System::Object* queueLock) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__TimerNode*>(callback, context, durationMilliseconds, queueLock));
}
inline void System::Net::__TimerThread__TimerNode::_ctor(::System::Net::__TimerThread__Callback* callback, ::System::Object* context, int32_t durationMilliseconds, ::System::Object* queueLock) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__Callback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, context, durationMilliseconds, queueLock);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__TimerNode*>());
}
inline void System::Net::__TimerThread__TimerNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__TimerNode::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::get_Next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "get_Next",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__TimerNode*, false>(this, ___internal_method);
}
inline void System::Net::__TimerThread__TimerNode::set_Next(::System::Net::__TimerThread__TimerNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "set_Next", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::__TimerThread__TimerNode* System::Net::__TimerThread__TimerNode::get_Prev() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "get_Prev",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__TimerNode*, false>(this, ___internal_method);
}
inline void System::Net::__TimerThread__TimerNode::set_Prev(::System::Net::__TimerThread__TimerNode* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "set_Prev", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__TimerThread__TimerNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::__TimerThread__TimerNode::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__TimerNode::Fire() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__TimerNode*>::get(), "Fire",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__TimerNode::__TimerThread__TimerNode() {}
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__TimerThread__InfiniteTimer::*)()>(&::System::Net::__TimerThread__InfiniteTimer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a964d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer.get_HasExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__InfiniteTimer::*)()>(
    &::System::Net::__TimerThread__InfiniteTimer::get_HasExpired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a96664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__TimerThread__InfiniteTimer.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::__TimerThread__InfiniteTimer::*)()>(&::System::Net::__TimerThread__InfiniteTimer::Cancel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a9666c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), 5));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::__TimerThread__InfiniteTimer::__cordl_internal_get_cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr int32_t const& System::Net::__TimerThread__InfiniteTimer::__cordl_internal_get_cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelled;
}
constexpr void System::Net::__TimerThread__InfiniteTimer::__cordl_internal_set_cancelled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelled = value;
}
inline ::System::Net::__TimerThread__InfiniteTimer* System::Net::__TimerThread__InfiniteTimer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::__TimerThread__InfiniteTimer*>());
}
inline void System::Net::__TimerThread__InfiniteTimer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__InfiniteTimer::get_HasExpired() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::__TimerThread__InfiniteTimer::Cancel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__TimerThread__InfiniteTimer*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__TimerThread__InfiniteTimer::__TimerThread__InfiniteTimer() {}
//  Writing Method size for method: ::System::Net::TimerThread.CreateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Queue* (*)(int32_t)>(&::System::Net::TimerThread::CreateQueue)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2a8fd7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "CreateQueue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.GetOrCreateQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__TimerThread__Queue* (*)(int32_t)>(&::System::Net::TimerThread::GetOrCreateQueue)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x2a947dc;

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
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2a95178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "Prod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::TimerThread.ThreadProc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::TimerThread::ThreadProc)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x2a9528c;

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
  constexpr static std::size_t addrs = 0x2a95c48;

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
  constexpr static std::size_t addrs = 0x2a95c24;

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
  constexpr static std::size_t addrs = 0x2a95cc4;

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
inline ::System::Net::__TimerThread__Queue* System::Net::TimerThread::CreateQueue(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "CreateQueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
}
inline ::System::Net::__TimerThread__Queue* System::Net::TimerThread::GetOrCreateQueue(int32_t durationMilliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::TimerThread*>::get(), "GetOrCreateQueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__TimerThread__Queue*, false>(nullptr, ___internal_method, durationMilliseconds);
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
