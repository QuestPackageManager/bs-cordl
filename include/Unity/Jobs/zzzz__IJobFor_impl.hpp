#pragma once
// IWYU pragma private; include "Unity\Jobs\IJobFor.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::IJobFor.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::IJobFor::*)(int32_t)>(&::Unity::Jobs::IJobFor::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Jobs::IJobFor*>(), { ::i2c::class_of<::Unity::Jobs::IJobFor*>(), 0 }));
    return ___internal_method;
  }
};
inline void Unity::Jobs::IJobFor::Execute(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Jobs::IJobFor*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
