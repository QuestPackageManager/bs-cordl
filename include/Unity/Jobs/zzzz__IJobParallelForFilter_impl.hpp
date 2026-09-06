#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForFilter.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForFilter_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobParallelForFilter.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Jobs::IJobParallelForFilter::*)(int32_t)>(&::Unity::Jobs::IJobParallelForFilter::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobParallelForFilter*>(), { ::i2c::class_of<::Unity::Jobs::IJobParallelForFilter*>(), 0 }));
    return ___internal_method;
  }
};
inline bool Unity::Jobs::IJobParallelForFilter::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobParallelForFilter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
