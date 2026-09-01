#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerUtility.hpp"
#include "Unity/Profiling/zzzz__ProfilerUtility_def.hpp"
template <typename T> inline uint8_t Unity::Profiling::ProfilerUtility::GetProfilerMarkerDataType() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerUtility>(), { "GetProfilerMarkerDataType", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerUtility::ProfilerUtility() {}
