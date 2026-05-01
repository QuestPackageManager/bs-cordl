#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_2.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_2_def.hpp"
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::_ctor(::Unity::Profiling::ProfilerMarker_2<TP1, TP2> marker, TP1 p1, TP2 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marker, p1, p2);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TP1, typename TP2> constexpr Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TP1, typename TP2> constexpr ::System::IDisposable* Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters []
template <typename TP1, typename TP2> constexpr ::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>::ProfilerMarker_2_AutoScope() {}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::_ctor(::StringW name, ::StringW param1Name, ::StringW param2Name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, param1Name, param2Name);
}
template <typename TP1, typename TP2>
inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::_ctor(::Unity::Profiling::ProfilerCategory category, ::StringW name, ::StringW param1Name, ::StringW param2Name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Profiling::ProfilerCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, category, name, param1Name, param2Name);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::Begin(TP1 p1, TP2 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(), "Begin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2);
}
template <typename TP1, typename TP2> inline void Unity::Profiling::ProfilerMarker_2<TP1, TP2>::End() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(), "End",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TP1, typename TP2> inline ::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2> Unity::Profiling::ProfilerMarker_2<TP1, TP2>::Auto(TP1 p1, TP2 p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerMarker_2<TP1, TP2>>::get(), "Auto", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TP2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Profiling::ProfilerMarker_2_AutoScope<TP1, TP2>, false>(this, ___internal_method, p1, p2);
}
// Ctor Parameters []
template <typename TP1, typename TP2> constexpr ::Unity::Profiling::ProfilerMarker_2<TP1, TP2>::ProfilerMarker_2() {}
