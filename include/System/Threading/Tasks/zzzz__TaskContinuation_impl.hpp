#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskContinuation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskContinuation.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskContinuation::*)(::System::Threading::Tasks::Task*, bool)>(
    &::System::Threading::Tasks::TaskContinuation::Run)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(), { ::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskContinuation.InlineIfPossibleOrElseQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Tasks::Task*, bool)>(&::System::Threading::Tasks::TaskContinuation::InlineIfPossibleOrElseQueue)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5cc6038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(),
                                                             { "InlineIfPossibleOrElseQueue", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskContinuation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::TaskContinuation::*)()>(&::System::Threading::Tasks::TaskContinuation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cc6180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::TaskContinuation::Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedTask, bCanInlineContinuationTask);
}
inline void System::Threading::Tasks::TaskContinuation::InlineIfPossibleOrElseQueue(::System::Threading::Tasks::Task* task, bool needsProtection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(),
                                                           { "InlineIfPossibleOrElseQueue", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, task, needsProtection);
}
inline void System::Threading::Tasks::TaskContinuation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskContinuation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::TaskContinuation* System::Threading::Tasks::TaskContinuation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::TaskContinuation*>());
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskContinuation::TaskContinuation() {}
