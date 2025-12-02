#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerUtility.hpp"
#include "Unity/Profiling/zzzz__ProfilerUtility_def.hpp"
template <typename T> inline uint8_t Unity::Profiling::ProfilerUtility::GetProfilerMarkerDataType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerUtility>::get(), "GetProfilerMarkerDataType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerUtility::ProfilerUtility() {}
