#pragma once
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOverEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerOverEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PointerOverEvent::*)()>(&::UnityEngine::UIElements::PointerOverEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e6bc50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerOverEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::PointerOverEvent* UnityEngine::UIElements::PointerOverEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::PointerOverEvent*>());
}
inline void UnityEngine::UIElements::PointerOverEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerOverEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerOverEvent::PointerOverEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
