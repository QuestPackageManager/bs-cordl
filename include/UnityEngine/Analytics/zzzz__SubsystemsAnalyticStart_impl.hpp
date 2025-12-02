#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticStart.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticStart_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStart._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticStart::*)()>(
    &::UnityEngine::Analytics::SubsystemsAnalyticStart::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bf0078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStart*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStart.CreateSubsystemsAnalyticStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::SubsystemsAnalyticStart* (*)()>(
    &::UnityEngine::Analytics::SubsystemsAnalyticStart::CreateSubsystemsAnalyticStart)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf010c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStart*>::get(),
                                                                               "CreateSubsystemsAnalyticStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::SubsystemsAnalyticStart::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStart*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* UnityEngine::Analytics::SubsystemsAnalyticStart::CreateSubsystemsAnalyticStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStart*>::get(),
                                                                             "CreateSubsystemsAnalyticStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::SubsystemsAnalyticStart*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* UnityEngine::Analytics::SubsystemsAnalyticStart::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::SubsystemsAnalyticStart*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticStart::SubsystemsAnalyticStart() {}
