#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template <typename TResult>
inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskExtensions::Unwrap(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>* task) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskExtensions*>(),
                                              { "Unwrap", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskExtensions::TaskExtensions() {}
