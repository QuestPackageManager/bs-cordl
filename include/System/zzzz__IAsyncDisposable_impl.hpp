#pragma once
// IWYU pragma private; include "System\IAsyncDisposable.hpp"
#include "System/zzzz__IAsyncDisposable_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
//  Writing Method size for method: ::System::IAsyncDisposable.DisposeAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IAsyncDisposable::*)()>(&::System::IAsyncDisposable::DisposeAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IAsyncDisposable*>(), { ::i2c::class_of<::System::IAsyncDisposable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::ValueTask System::IAsyncDisposable::DisposeAsync() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IAsyncDisposable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method);
}
