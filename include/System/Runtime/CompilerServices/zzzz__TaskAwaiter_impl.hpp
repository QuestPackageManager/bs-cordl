#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\TaskAwaiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::*)()>(
    &::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7154c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0._OutputWaitEtwEvents_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::*)()>(
    &::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::_OutputWaitEtwEvents_b__0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5b71550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*>(), { "<OutputWaitEtwEvents>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_set_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
constexpr ::System::Action*& System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr ::System::Action* const& System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr void System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continuation = value;
}
inline void System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::_OutputWaitEtwEvents_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*>(), { "<OutputWaitEtwEvents>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0* System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TaskAwaiter___c__DisplayClass11_0::TaskAwaiter___c__DisplayClass11_0() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter::*)(::System::Threading::Tasks::Task*)>(
    &::System::Runtime::CompilerServices::TaskAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::CompilerServices::TaskAwaiter::*)()>(&::System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b7105c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter::*)(::System::Action*)>(&::System::Runtime::CompilerServices::TaskAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b70d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter::*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b70eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::TaskAwaiter::*)()>(&::System::Runtime::CompilerServices::TaskAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.ValidateEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b7112c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "ValidateEnd", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.HandleNonSuccessAndDebuggerNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b7115c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                                                             { "HandleNonSuccessAndDebuggerNotification", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.ThrowForNonSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*)>(&::System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5b711c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "ThrowForNonSuccess", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.OnCompletedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*, ::System::Action*, bool, bool)>(
    &::System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b71074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                         { "OnCompletedInternal", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::TaskAwaiter.OutputWaitEtwEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (*)(::System::Threading::Tasks::Task*, ::System::Action*)>(
    &::System::Runtime::CompilerServices::TaskAwaiter::OutputWaitEtwEvents)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5b71304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                                                             { "OutputWaitEtwEvents", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::TaskAwaiter::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, task);
}
inline bool System::Runtime::CompilerServices::TaskAwaiter::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::GetResult() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::ValidateEnd(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "ValidateEnd", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::HandleNonSuccessAndDebuggerNotification(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                                                                                         { "HandleNonSuccessAndDebuggerNotification", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::ThrowForNonSuccess(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(), { "ThrowForNonSuccess", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task);
}
inline void System::Runtime::CompilerServices::TaskAwaiter::OnCompletedInternal(::System::Threading::Tasks::Task* task, ::System::Action* continuation, bool continueOnCapturedContext,
                                                                                bool flowExecutionContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                       { "OnCompletedInternal", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task, continuation, continueOnCapturedContext, flowExecutionContext);
}
inline ::System::Action* System::Runtime::CompilerServices::TaskAwaiter::OutputWaitEtwEvents(::System::Threading::Tasks::Task* task, ::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::TaskAwaiter>(),
                                                           { "OutputWaitEtwEvents", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(nullptr, ___internal_method, task, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr System::Runtime::CompilerServices::TaskAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* System::Runtime::CompilerServices::TaskAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Runtime::CompilerServices::TaskAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::TaskAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::TaskAwaiter::TaskAwaiter(::System::Threading::Tasks::Task* m_task) noexcept {
  this->m_task = m_task;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::TaskAwaiter::TaskAwaiter() {}
