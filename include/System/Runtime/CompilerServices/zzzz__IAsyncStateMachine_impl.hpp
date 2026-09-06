#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IAsyncStateMachine.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::IAsyncStateMachine::*)()>(&::System::Runtime::CompilerServices::IAsyncStateMachine::MoveNext)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::IAsyncStateMachine.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::IAsyncStateMachine::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::System::Runtime::CompilerServices::IAsyncStateMachine::SetStateMachine)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(), 1 }));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::IAsyncStateMachine::MoveNext() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::CompilerServices::IAsyncStateMachine::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachine);
}
