#pragma once
// IWYU pragma private; include "System\Threading\RegisteredWaitHandle.hpp"
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitOrTimerCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(
    ::System::Threading::WaitHandle*, ::System::Threading::WaitOrTimerCallback*, ::System::Object*, ::System::TimeSpan, bool)>(&::System::Threading::RegisteredWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cb6a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                                 ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.Wait
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(::System::Object*)>(&::System::Threading::RegisteredWaitHandle::Wait)> {
  constexpr static std::size_t size = 0x59c;
  constexpr static std::size_t addrs = 0x5cb9590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.DoCallBack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::RegisteredWaitHandle::*)(::System::Object*)>(&::System::Threading::RegisteredWaitHandle::DoCallBack)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5cb9b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "DoCallBack", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::RegisteredWaitHandle.Unregister
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::RegisteredWaitHandle::*)(::System::Threading::WaitHandle*)>(&::System::Threading::RegisteredWaitHandle::Unregister)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5cb9bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "Unregister", {}, { ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::WaitHandle*& System::Threading::RegisteredWaitHandle::__cordl_internal_get__waitObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitObject;
}
constexpr ::System::Threading::WaitHandle* const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__waitObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitObject;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__waitObject(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitObject = value;
}
constexpr ::System::Threading::WaitOrTimerCallback*& System::Threading::RegisteredWaitHandle::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr ::System::Threading::WaitOrTimerCallback* const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__callback(::System::Threading::WaitOrTimerCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callback = value;
}
constexpr ::System::Object*& System::Threading::RegisteredWaitHandle::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::System::Object* const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__state(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::System::Threading::WaitHandle*& System::Threading::RegisteredWaitHandle::__cordl_internal_get__finalEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalEvent;
}
constexpr ::System::Threading::WaitHandle* const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__finalEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalEvent;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__finalEvent(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalEvent = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::RegisteredWaitHandle::__cordl_internal_get__cancelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__cancelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelEvent;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__cancelEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelEvent = value;
}
constexpr ::System::TimeSpan& System::Threading::RegisteredWaitHandle::__cordl_internal_get__timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr ::System::TimeSpan const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeout;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__timeout(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeout = value;
}
constexpr int32_t& System::Threading::RegisteredWaitHandle::__cordl_internal_get__callsInProcess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callsInProcess;
}
constexpr int32_t const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__callsInProcess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callsInProcess;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__callsInProcess(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callsInProcess = value;
}
constexpr bool& System::Threading::RegisteredWaitHandle::__cordl_internal_get__executeOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executeOnlyOnce;
}
constexpr bool const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__executeOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executeOnlyOnce;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__executeOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executeOnlyOnce = value;
}
constexpr bool& System::Threading::RegisteredWaitHandle::__cordl_internal_get__unregistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unregistered;
}
constexpr bool const& System::Threading::RegisteredWaitHandle::__cordl_internal_get__unregistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unregistered;
}
constexpr void System::Threading::RegisteredWaitHandle::__cordl_internal_set__unregistered(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unregistered = value;
}
inline void System::Threading::RegisteredWaitHandle::_ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback, ::System::Object* state,
                                                           ::System::TimeSpan timeout, bool executeOnlyOnce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Threading::WaitHandle*>(), ::i2c::type_of<::System::Threading::WaitOrTimerCallback*>(),
                                                               ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waitObject, callback, state, timeout, executeOnlyOnce);
}
inline void System::Threading::RegisteredWaitHandle::Wait(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "Wait", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Threading::RegisteredWaitHandle::DoCallBack(::System::Object* timedOut) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "DoCallBack", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timedOut);
}
inline bool System::Threading::RegisteredWaitHandle::Unregister(::System::Threading::WaitHandle* waitObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::RegisteredWaitHandle*>(), { "Unregister", {}, { ::i2c::type_of<::System::Threading::WaitHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, waitObject);
}
inline ::System::Threading::RegisteredWaitHandle* System::Threading::RegisteredWaitHandle::New_ctor(::System::Threading::WaitHandle* waitObject, ::System::Threading::WaitOrTimerCallback* callback,
                                                                                                    ::System::Object* state, ::System::TimeSpan timeout, bool executeOnlyOnce) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::RegisteredWaitHandle*>(waitObject, callback, state, timeout, executeOnlyOnce));
}
// Ctor Parameters []
constexpr ::System::Threading::RegisteredWaitHandle::RegisteredWaitHandle() {}
