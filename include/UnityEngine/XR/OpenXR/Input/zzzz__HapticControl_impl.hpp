#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Input::HapticControl::*)()>(
    &::UnityEngine::XR::OpenXR::Input::HapticControl::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b0354c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Input::Haptic (::UnityEngine::XR::OpenXR::Input::HapticControl::*)(
    ::cordl_internals::Ptr<void>)>(&::UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b035a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), 16));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Input::HapticControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::XR::OpenXR::Input::HapticControl*>());
}
inline void UnityEngine::XR::OpenXR::Input::HapticControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Input::Haptic UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), "ReadUnprocessedValueFromState",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::Haptic, false>(this, ___internal_method, statePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl::HapticControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
