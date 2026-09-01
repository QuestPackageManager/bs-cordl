#pragma once
// IWYU pragma private; include "System\Threading\Tasks\TaskAwaiters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskAwaiters_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskAwaiters.ForceAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ForceAsyncAwaiter (*)(::System::Threading::Tasks::Task*)>(&::System::Threading::Tasks::TaskAwaiters::ForceAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cbc758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskAwaiters*>(), { "ForceAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::ForceAsyncAwaiter System::Threading::Tasks::TaskAwaiters::ForceAsync(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::Tasks::TaskAwaiters*>(), { "ForceAsync", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ForceAsyncAwaiter>(nullptr, ___internal_method, task);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskAwaiters::TaskAwaiters() {}
