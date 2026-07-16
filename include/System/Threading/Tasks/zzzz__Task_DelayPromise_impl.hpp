#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_DelayPromise.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_DelayPromise_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Task_DelayPromise._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Task_DelayPromise::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::Task_DelayPromise::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cc1968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_DelayPromise*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Task_DelayPromise.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Task_DelayPromise::*)()>(&::GlobalNamespace::Task_DelayPromise::Complete)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5cc3584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_DelayPromise*>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Token;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Token;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Token(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Token = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Registration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Registration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Registration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Registration;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Registration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Registration = value;
}
constexpr ::System::Threading::Timer*& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timer;
}
constexpr ::System::Threading::Timer* const& GlobalNamespace::Task_DelayPromise::__cordl_internal_get_Timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timer;
}
constexpr void GlobalNamespace::Task_DelayPromise::__cordl_internal_set_Timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Timer = value;
}
inline void GlobalNamespace::Task_DelayPromise::_ctor(::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_DelayPromise*>(), { ".ctor", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void GlobalNamespace::Task_DelayPromise::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Task_DelayPromise*>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Task_DelayPromise* GlobalNamespace::Task_DelayPromise::New_ctor(::System::Threading::CancellationToken token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Task_DelayPromise*>(token));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Task_DelayPromise::Task_DelayPromise() {}
