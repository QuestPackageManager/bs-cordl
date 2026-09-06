#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_2.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_2_def.hpp"
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::_ctor(::Unity::Profiling::ProfilerMarker_2<TP1, TP2> marker, TP1 p1, TP2 p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(), ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, marker, p1, p2);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TP1, typename TP2> constexpr Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TP1, typename TP2> constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename TP1, typename TP2> constexpr ::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::ProfilerMarker_2_AutoScope() {}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::_ctor(::StringW name, ::StringW param1Name, ::StringW param2Name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, param1Name, param2Name);
}
template <typename TP1, typename TP2>
inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name, ::StringW param2Name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, param1Name, param2Name);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::Begin(TP1 p1, TP2 p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(), { "Begin", {}, { ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(), { "End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TP1, typename TP2> inline ::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2> Unity::Profiling::ProfilerMarker_2<TP1, TP2>::Auto(TP1 p1, TP2 p2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>(), { "Auto", {}, { ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>>(*this, ___internal_method, p1, p2);
}
// Ctor Parameters []
template <typename TP1, typename TP2> constexpr ::Unity::Profiling::ProfilerMarker_2<TP1, TP2>::ProfilerMarker_2() {}
