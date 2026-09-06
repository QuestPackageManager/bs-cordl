#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForBatch.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelForBatch.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::IJobParallelForBatch::*)(int32_t, int32_t)>(&::Unity::Jobs::IJobParallelForBatch::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForBatch*>(), { ::i2c::class_of<::Unity::Jobs::IJobParallelForBatch*>(), 0 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::IJobParallelForBatch::Execute(int32_t startIndex, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobParallelForBatch*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startIndex, count);
}
