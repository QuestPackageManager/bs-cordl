#pragma once
#include "UnityEngine/UIElements/zzzz__CommandEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ExecuteCommandEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ExecuteCommandEvent::*)()>(&::UnityEngine::UIElements::ExecuteCommandEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e51f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ExecuteCommandEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ExecuteCommandEvent* UnityEngine::UIElements::ExecuteCommandEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ExecuteCommandEvent*>());
}
inline void UnityEngine::UIElements::ExecuteCommandEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ExecuteCommandEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ExecuteCommandEvent::ExecuteCommandEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
