#pragma once
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::MouseCaptureEvent::*)()>(&::UnityEngine::UIElements::MouseCaptureEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2cdfb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureEvent*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MouseCaptureEvent* UnityEngine::UIElements::MouseCaptureEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::MouseCaptureEvent*>());
}
inline void UnityEngine::UIElements::MouseCaptureEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureEvent*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureEvent::MouseCaptureEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
