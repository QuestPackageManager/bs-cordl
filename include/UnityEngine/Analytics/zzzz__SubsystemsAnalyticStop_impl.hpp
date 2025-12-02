#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticStop.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_impl.hpp"
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticStop_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStop._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Analytics::SubsystemsAnalyticStop::*)()>(
    &::UnityEngine::Analytics::SubsystemsAnalyticStop::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bf0160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStop*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::SubsystemsAnalyticStop.CreateSubsystemsAnalyticStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Analytics::SubsystemsAnalyticStop* (*)()>(
    &::UnityEngine::Analytics::SubsystemsAnalyticStop::CreateSubsystemsAnalyticStop)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf01f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStop*>::get(),
                                                                               "CreateSubsystemsAnalyticStop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::SubsystemsAnalyticStop::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStop*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* UnityEngine::Analytics::SubsystemsAnalyticStop::CreateSubsystemsAnalyticStop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Analytics::SubsystemsAnalyticStop*>::get(),
                                                                             "CreateSubsystemsAnalyticStop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Analytics::SubsystemsAnalyticStop*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* UnityEngine::Analytics::SubsystemsAnalyticStop::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Analytics::SubsystemsAnalyticStop*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::SubsystemsAnalyticStop::SubsystemsAnalyticStop() {}
