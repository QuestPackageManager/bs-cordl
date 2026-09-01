#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerCounter_1.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounter_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
template <typename T> inline void Unity::Profiling::ProfilerCounter_1<T>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounter_1<T>>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, dataUnit);
}
template <typename T> inline void Unity::Profiling::ProfilerCounter_1<T>::Sample(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounter_1<T>>(), { "Sample", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Profiling::ProfilerCounter_1<T>::ProfilerCounter_1() {}
