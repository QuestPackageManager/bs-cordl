#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Sources\IValueTaskSource_1.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetStatus(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus>(this, ___internal_method, token);
}
template <typename TResult>
inline void System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                        ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token, flags);
}
template <typename TResult> inline TResult System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>::GetResult(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method, token);
}
