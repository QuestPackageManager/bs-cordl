#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_3.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_3_def.hpp"
template <typename TP1, typename TP2, typename TP3>
inline void Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>::_ctor(::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3> marker, TP1 p1, TP2 p2, TP3 p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>>(),
                          { ".ctor", {}, { ::i2c::type_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(), ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>(), ::i2c::type_of<TP3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, marker, p1, p2, p3);
}
template <typename TP1, typename TP2, typename TP3> inline void Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TP1, typename TP2, typename TP3> constexpr Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TP1, typename TP2, typename TP3> constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
template <typename TP1, typename TP2, typename TP3> constexpr ::Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>::ProfilerMarker_3_AutoScope() {}
template <typename TP1, typename TP2, typename TP3>
inline void Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::_ctor(::StringW name, ::StringW param1Name, ::StringW param2Name, ::StringW param3Name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, param1Name, param2Name, param3Name);
}
template <typename TP1, typename TP2, typename TP3>
inline void Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name, ::StringW param2Name, ::StringW param3Name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Profiling::ProfilerCategory>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, name, param1Name, param2Name, param3Name);
}
template <typename TP1, typename TP2, typename TP3> inline void Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::Begin(TP1 p1, TP2 p2, TP3 p3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(),
                                                                                         { "Begin", {}, { ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>(), ::i2c::type_of<TP3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p1, p2, p3);
}
template <typename TP1, typename TP2, typename TP3> inline void Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(), { "End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TP1, typename TP2, typename TP3>
inline ::Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3> Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::Auto(TP1 p1, TP2 p2, TP3 p3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>>(),
                                                                                         { "Auto", {}, { ::i2c::type_of<TP1>(), ::i2c::type_of<TP2>(), ::i2c::type_of<TP3>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_3_AutoScope<TP1, TP2, TP3>>(*this, ___internal_method, p1, p2, p3);
}
// Ctor Parameters []
template <typename TP1, typename TP2, typename TP3> constexpr ::Unity::Profiling::ProfilerMarker_3<TP1, TP2, TP3>::ProfilerMarker_3() {}
