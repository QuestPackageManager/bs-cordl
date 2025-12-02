#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorderSample.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorderSample_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerRecorderSample.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Unity::Profiling::ProfilerRecorderSample::*)()>(&::Unity::Profiling::ProfilerRecorderSample::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6828f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorderSample>::get(), "get_Count",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int64_t Unity::Profiling::ProfilerRecorderSample::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerRecorderSample>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "count", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "refValue", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerRecorderSample::ProfilerRecorderSample(int64_t value, int64_t count, int64_t refValue) noexcept {
  this->value = value;
  this->count = count;
  this->refValue = refValue;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerRecorderSample::ProfilerRecorderSample() {}
