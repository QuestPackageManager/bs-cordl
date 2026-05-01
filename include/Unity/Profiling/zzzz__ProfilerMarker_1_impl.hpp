#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_1.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_1_def.hpp"
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::_ctor(::Unity::Profiling::ProfilerMarker_1<TP1> marker, TP1 p1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marker, p1);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TP1> constexpr Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TP1> constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
template <typename TP1> constexpr ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>::ProfilerMarker_1_AutoScope() {}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::_ctor(::StringW name, ::StringW param1Name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, param1Name);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category, name, param1Name);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::Begin(TP1 p1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(), "Begin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1);
}
template <typename TP1> inline void Unity::Profiling::ProfilerMarker_1<TP1>::End() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(), "End",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TP1> inline ::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1> Unity::Profiling::ProfilerMarker_1<TP1>::Auto(TP1 p1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_1<TP1>>::get(), "Auto",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_1_AutoScope<TP1>, false>(this, ___internal_method, p1);
}
// Ctor Parameters []
template <typename TP1> constexpr ::Unity::Profiling::ProfilerMarker_1<TP1>::ProfilerMarker_1() {}
