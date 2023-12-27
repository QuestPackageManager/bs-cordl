#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_leftController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_leftController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                                                                               "get_leftController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_rightController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_rightController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                                                                               "get_rightController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_headPos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), "get_headPos",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController.get_headRot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MenuPlayerController::*)()>(
    &::GlobalNamespace::MenuPlayerController::get_headRot)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229e8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), "get_headRot",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuPlayerController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuPlayerController::*)()>(&::GlobalNamespace::MenuPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229e8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::MenuPlayerController::__get__leftController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::MenuPlayerController::__get__leftController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftController;
}
constexpr void GlobalNamespace::MenuPlayerController::__set__leftController(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::MenuPlayerController::__get__rightController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rightController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::MenuPlayerController::__get__rightController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rightController;
}
constexpr void GlobalNamespace::MenuPlayerController::__set__rightController(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::MenuPlayerController::__get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::MenuPlayerController::__get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headTransform;
}
constexpr void GlobalNamespace::MenuPlayerController::__set__headTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::get_leftController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                                                                             "get_leftController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::MenuPlayerController::get_rightController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(),
                                                                             "get_rightController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MenuPlayerController::get_headPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), "get_headPos",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MenuPlayerController::get_headRot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), "get_headRot",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuPlayerController* GlobalNamespace::MenuPlayerController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuPlayerController*>());
}
inline void GlobalNamespace::MenuPlayerController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuPlayerController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuPlayerController::MenuPlayerController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
