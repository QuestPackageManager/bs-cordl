#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobFilter.hpp"
#include "Unity/Jobs/zzzz__IJobFilter_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobFilter.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Jobs::IJobFilter::*)(int32_t)>(&::Unity::Jobs::IJobFilter::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFilter*>(), { ::i2c::class_of<::Unity::Jobs::IJobFilter*>(), 0 }));
    return ___internal_method;
  }
};
inline bool Unity::Jobs::IJobFilter::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobFilter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
