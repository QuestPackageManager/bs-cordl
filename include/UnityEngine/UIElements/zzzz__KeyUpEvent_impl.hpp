#pragma once
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyUpEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyUpEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::KeyUpEvent::*)()>(&::UnityEngine::UIElements::KeyUpEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e52c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyUpEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::KeyUpEvent* UnityEngine::UIElements::KeyUpEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::KeyUpEvent*>());
}
inline void UnityEngine::UIElements::KeyUpEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::KeyUpEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyUpEvent::KeyUpEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
