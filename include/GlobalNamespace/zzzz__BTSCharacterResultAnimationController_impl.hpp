#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterResultAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatAnimator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController.SetCharacter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)(::GlobalNamespace::BTSCharacter*)>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe7115c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(), "SetCharacter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController.StopAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe711c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                               "StopAnimation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterResultAnimationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterResultAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterResultAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe711e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_set__rimLightColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightColorSetter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightIntensityAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightIntensityAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_set__rimLightIntensityAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightIntensityAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightEdgeStartAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__rimLightEdgeStartAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_set__rimLightEdgeStartAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rimLightEdgeStartAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__collidersGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collidersGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_get__collidersGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collidersGameObject;
}
constexpr void GlobalNamespace::BTSCharacterResultAnimationController::__cordl_internal_set__collidersGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____collidersGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(), "SetCharacter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BTSCharacter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btsCharacter);
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::StopAnimation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                             "StopAnimation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterResultAnimationController* GlobalNamespace::BTSCharacterResultAnimationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BTSCharacterResultAnimationController*>());
}
inline void GlobalNamespace::BTSCharacterResultAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterResultAnimationController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterResultAnimationController::BTSCharacterResultAnimationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
