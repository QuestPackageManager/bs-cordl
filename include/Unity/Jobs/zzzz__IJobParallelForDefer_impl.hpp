#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobParallelForDefer.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForDefer_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelForDefer.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::IJobParallelForDefer::*)(int32_t)>(&::Unity::Jobs::IJobParallelForDefer::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForDefer*>(), { ::i2c::class_of<::Unity::Jobs::IJobParallelForDefer*>(), 0 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::IJobParallelForDefer::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobParallelForDefer*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
