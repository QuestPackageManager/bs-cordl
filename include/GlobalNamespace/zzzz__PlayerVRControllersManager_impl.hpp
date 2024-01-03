#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.get_leftHandVRController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22610f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                               "get_leftHandVRController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.get_rightHandVRController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22610fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                               "get_rightHandVRController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.DisableAllVRControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::DisableAllVRControllers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2261104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                               "DisableAllVRControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager.EnableAllVRControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(
    &::GlobalNamespace::PlayerVRControllersManager::EnableAllVRControllers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x226113c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                               "EnableAllVRControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerVRControllersManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerVRControllersManager::*)()>(&::GlobalNamespace::PlayerVRControllersManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2261174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::PlayerVRControllersManager::__get__leftHandVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandVRController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::PlayerVRControllersManager::__get__leftHandVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandVRController;
}
constexpr void GlobalNamespace::PlayerVRControllersManager::__set__leftHandVRController(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandVRController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::VRController*& GlobalNamespace::PlayerVRControllersManager::__get__rightHandVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandVRController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRController*> const& GlobalNamespace::PlayerVRControllersManager::__get__rightHandVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandVRController;
}
constexpr void GlobalNamespace::PlayerVRControllersManager::__set__rightHandVRController(::GlobalNamespace::VRController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHandVRController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::VRController* GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                             "get_leftHandVRController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VRController* GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                             "get_rightHandVRController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VRController*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVRControllersManager::DisableAllVRControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                             "DisableAllVRControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerVRControllersManager::EnableAllVRControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(),
                                                                             "EnableAllVRControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerVRControllersManager* GlobalNamespace::PlayerVRControllersManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerVRControllersManager*>());
}
inline void GlobalNamespace::PlayerVRControllersManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerVRControllersManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerVRControllersManager::PlayerVRControllersManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
