#pragma once
// IWYU pragma private; include "Unity/Profiling/IgnoredByDeepProfilerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Profiling/zzzz__IgnoredByDeepProfilerAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::IgnoredByDeepProfilerAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Profiling::IgnoredByDeepProfilerAttribute::*)()>(
    &::Unity::Profiling::IgnoredByDeepProfilerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68289e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Profiling::IgnoredByDeepProfilerAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Profiling::IgnoredByDeepProfilerAttribute* Unity::Profiling::IgnoredByDeepProfilerAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Profiling::IgnoredByDeepProfilerAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Profiling::IgnoredByDeepProfilerAttribute::IgnoredByDeepProfilerAttribute() {}
