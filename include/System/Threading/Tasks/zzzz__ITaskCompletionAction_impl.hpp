#pragma once
// IWYU pragma private; include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::ITaskCompletionAction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::ITaskCompletionAction::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::ITaskCompletionAction::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), { ::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::ITaskCompletionAction.get_InvokeMayRunArbitraryCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::Tasks::ITaskCompletionAction::*)()>(
    &::System::Threading::Tasks::ITaskCompletionAction::get_InvokeMayRunArbitraryCode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), { ::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Threading::Tasks::ITaskCompletionAction::Invoke(::System::Threading::Tasks::Task* completingTask) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completingTask);
}
inline bool System::Threading::Tasks::ITaskCompletionAction::get_InvokeMayRunArbitraryCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::ITaskCompletionAction*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
