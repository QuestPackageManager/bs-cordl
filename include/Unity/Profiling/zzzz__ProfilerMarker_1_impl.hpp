#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerMarker_1.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_1_def.hpp"
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::_ctor(::Unity::Profiling::ProfilerMarker_1<TP1> marker, TP1 p1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(), ::i2c::type_of<TP1>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, marker, p1);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TP1> constexpr Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TP1> constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename TP1> constexpr ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::ProfilerMarker_1_AutoScope() {}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::_ctor(::StringW name, ::StringW param1Name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, param1Name);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, param1Name);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::Begin(TP1 p1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(), { "Begin", {}, { ::i2c::type_of<TP1>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(), { "End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TP1> inline ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1> Unity::Profiling::ProfilerMarker_1<TP1>::Auto(TP1 p1) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_1<TP1>>(), { "Auto", {}, { ::i2c::type_of<TP1>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>>(*this, ___internal_method, p1);
}
// Ctor Parameters []
template <typename TP1> constexpr ::Unity::Profiling::ProfilerMarker_1<TP1>::ProfilerMarker_1() {}
