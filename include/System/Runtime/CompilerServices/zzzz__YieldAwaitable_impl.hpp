#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\YieldAwaitable.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::*)()>(
    &::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7294c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b72954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b72c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.QueueContinuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*, bool)>(&::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::QueueContinuation)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5b729b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(),
                                                                                           { "QueueContinuation", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.RunAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::RunAction)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b72cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "RunAction", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::*)()>(
    &::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b72d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "GetResult", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::setStaticF_s_waitCallbackRunAction(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_waitCallbackRunAction", ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::getStaticF_s_waitCallbackRunAction() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_waitCallbackRunAction", ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>();
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::setStaticF_s_sendOrPostCallbackRunAction(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "s_sendOrPostCallbackRunAction", ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::getStaticF_s_sendOrPostCallbackRunAction() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "s_sendOrPostCallbackRunAction", ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>();
}
inline bool System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::get_IsCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "OnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "UnsafeOnCompleted", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::QueueContinuation(::System::Action* continuation, bool flowContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(),
                                                                                         { "QueueContinuation", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, continuation, flowContext);
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::RunAction(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "RunAction", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::GetResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(), { "GetResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*
System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter::YieldAwaitable_YieldAwaiter() {}
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable.GetAwaiter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter (::System::Runtime::CompilerServices::YieldAwaitable::*)()>(
    &::System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b72944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable>(), { "GetAwaiter", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable>(), { "GetAwaiter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaitable() {}
