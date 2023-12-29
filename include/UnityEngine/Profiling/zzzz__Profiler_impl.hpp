#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Profiler_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetMonoUsedSizeLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b7f824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetMonoUsedSizeLong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalAllocatedMemoryLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b7f84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetTotalAllocatedMemoryLong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalReservedMemoryLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b7f874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                               "GetTotalReservedMemoryLong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(), "GetMonoUsedSizeLong",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                             "GetTotalAllocatedMemoryLong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Profiler*>::get(),
                                                                             "GetTotalReservedMemoryLong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Profiler::Profiler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
