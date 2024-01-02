#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterResultAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController.SetCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)(::GlobalNamespace::BTSCharacter*)>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2219ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(), "SetCharacter",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController.StopAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2219c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                               "StopAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter*& GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> const& GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightColorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightColorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightIntensityAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> const&
GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightIntensityAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightIntensityAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightIntensityAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator*& GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightEdgeStartAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*> const&
GlobalNamespace::BTSCharacterResultAnimationController::__get__rimLightEdgeStartAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__rimLightEdgeStartAnimator(::GlobalNamespace::MaterialPropertyBlockFloatAnimator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightEdgeStartAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::BTSCharacterResultAnimationController::__get__collidersGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collidersGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::BTSCharacterResultAnimationController::__get__collidersGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collidersGameObject;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__set__collidersGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collidersGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(), "SetCharacter", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btsCharacter);
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                             "StopAnimation", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterResultAnimationController* GlobalNamespace::BTSCharacterResultAnimationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSCharacterResultAnimationController*>());
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterResultAnimationController::BTSCharacterResultAnimationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
