#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/HapticControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__HapticControl_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Haptic_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Input::HapticControl::*)()>(
    &::UnityEngine::XR::OpenXR::Input::HapticControl::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x67be9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Input::HapticControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Input::Haptic (::UnityEngine::XR::OpenXR::Input::HapticControl::*)(void*)>(
    &::UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67bea70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), 17));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::Input::HapticControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Input::Haptic UnityEngine::XR::OpenXR::Input::HapticControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Input::HapticControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::Haptic, false>(this, ___internal_method, statePtr);
}
inline ::UnityEngine::XR::OpenXR::Input::HapticControl* UnityEngine::XR::OpenXR::Input::HapticControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Input::HapticControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl::HapticControl() {}
