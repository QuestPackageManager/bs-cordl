#pragma once
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.get_leftHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&::UnityEngine::InputSystem::XR::XRController::get_leftHand)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2bad5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(),
                                                                               "get_leftHand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.get_rightHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XR::XRController* (*)()>(&::UnityEngine::InputSystem::XR::XRController::get_rightHand)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2bad698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(),
                                                                               "get_rightHand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRController::*)()>(
    &::UnityEngine::InputSystem::XR::XRController::FinishSetup)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2bad738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRController::*)()>(&::UnityEngine::InputSystem::XR::XRController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bad870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::get_leftHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(),
                                                                             "get_leftHand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRController*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::get_rightHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(),
                                                                             "get_rightHand", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XR::XRController*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::XRController::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRController* UnityEngine::InputSystem::XR::XRController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XR::XRController*>());
}
inline void UnityEngine::InputSystem::XR::XRController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRController::XRController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
