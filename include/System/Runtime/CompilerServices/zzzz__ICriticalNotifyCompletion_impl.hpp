#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\ICriticalNotifyCompletion.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ICriticalNotifyCompletion.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::ICriticalNotifyCompletion::*)(::System::Action*)>(
    &::System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::ICriticalNotifyCompletion::UnsafeOnCompleted(::System::Action* continuation) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr System::Runtime::CompilerServices::ICriticalNotifyCompletion::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Runtime::CompilerServices::ICriticalNotifyCompletion::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
