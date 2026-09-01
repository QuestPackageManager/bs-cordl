#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerCounterValue_1.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterValue_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCounterOptions_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
template <typename T> inline void Unity::Profiling::ProfilerCounterValue_1<T>::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
template <typename T> inline void Unity::Profiling::ProfilerCounterValue_1<T>::_ctor(::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, dataUnit);
}
template <typename T>
inline void Unity::Profiling::ProfilerCounterValue_1<T>::_ctor(::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit, ::Unity::Profiling::ProfilerCounterOptions counterOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>(), ::i2c::type_of<::Unity::Profiling::ProfilerCounterOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, dataUnit, counterOptions);
}
template <typename T>
inline void Unity::Profiling::ProfilerCounterValue_1<T>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, dataUnit);
}
template <typename T>
inline void Unity::Profiling::ProfilerCounterValue_1<T>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::Unity::Profiling::ProfilerMarkerDataUnit dataUnit,
                                                               ::Unity::Profiling::ProfilerCounterOptions counterOptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::Unity::Profiling::ProfilerMarkerDataUnit>(), ::i2c::type_of<::Unity::Profiling::ProfilerCounterOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, dataUnit, counterOptions);
}
template <typename T> inline T Unity::Profiling::ProfilerCounterValue_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void Unity::Profiling::ProfilerCounterValue_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Profiling::ProfilerCounterValue_1<T>::Sample() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerCounterValue_1<T>>(), { "Sample", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Profiling::ProfilerCounterValue_1<T>::ProfilerCounterValue_1() {}
