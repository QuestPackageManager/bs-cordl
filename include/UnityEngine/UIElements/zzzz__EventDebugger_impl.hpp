#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDebugger_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPaths_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EventDebugger.LogPropagationPaths
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPaths*)>(
    &::UnityEngine::UIElements::EventDebugger::LogPropagationPaths)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33cf674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDebugger*>::get(), "LogPropagationPaths", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventDebugger::LogPropagationPaths(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPaths* paths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDebugger*>::get(), "LogPropagationPaths", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PropagationPaths*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt, paths);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDebugger::EventDebugger() {}
