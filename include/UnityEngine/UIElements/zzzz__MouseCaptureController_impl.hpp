#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.HasMouseCapture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::MouseCaptureController::HasMouseCapture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2e01ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "HasMouseCapture", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.CaptureMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::MouseCaptureController::CaptureMouse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2dfd1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "CaptureMouse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MouseCaptureController.ReleaseMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IEventHandler*)>(
    &::UnityEngine::UIElements::MouseCaptureController::ReleaseMouse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2e0246c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "ReleaseMouse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::MouseCaptureController::HasMouseCapture(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "HasMouseCapture", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handler);
}
inline void UnityEngine::UIElements::MouseCaptureController::CaptureMouse(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "CaptureMouse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler);
}
inline void UnityEngine::UIElements::MouseCaptureController::ReleaseMouse(::UnityEngine::UIElements::IEventHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MouseCaptureController*>::get(), "ReleaseMouse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handler);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MouseCaptureController::MouseCaptureController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
