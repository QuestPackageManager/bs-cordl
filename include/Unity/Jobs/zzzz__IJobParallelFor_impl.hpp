#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelFor.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelFor.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::IJobParallelFor::*)(int32_t)>(&::Unity::Jobs::IJobParallelFor::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelFor*>(), { ::i2c::class_of<::Unity::Jobs::IJobParallelFor*>(), 0 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::IJobParallelFor::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobParallelFor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
