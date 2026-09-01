#pragma once
// IWYU pragma private; include "System\Threading\Tasks\Sources\IValueTaskSource.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource.GetStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (::System::Threading::Tasks::Sources::IValueTaskSource::*)(int16_t)>(
    &::System::Threading::Tasks::Sources::IValueTaskSource::GetStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Sources::IValueTaskSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t,
                                                                                                                       ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(
    &::System::Threading::Tasks::Sources::IValueTaskSource::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::Tasks::Sources::IValueTaskSource::*)(int16_t)>(&::System::Threading::Tasks::Sources::IValueTaskSource::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(),
                                                                                          { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 2 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Threading::Tasks::Sources::IValueTaskSource::GetStatus(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus>(this, ___internal_method, token);
}
inline void System::Threading::Tasks::Sources::IValueTaskSource::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                             ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token, flags);
}
inline void System::Threading::Tasks::Sources::IValueTaskSource::GetResult(int16_t token) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Threading::Tasks::Sources::IValueTaskSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
