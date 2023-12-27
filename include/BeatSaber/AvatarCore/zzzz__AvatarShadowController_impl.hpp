#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarShadowController_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe0c9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe0c9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                                                                               "Update", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.FollowPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::AvatarCore::AvatarShadowController::FollowPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe0ca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "FollowPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe0cb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::SpriteRenderer*& BeatSaber::AvatarCore::AvatarShadowController::__get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& BeatSaber::AvatarCore::AvatarShadowController::__get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____spriteRenderer;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__spriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__distanceScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____distanceScale;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__distanceScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____distanceScale;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__distanceScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____distanceScale = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scale;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____scale;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____scale = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____alpha;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____alpha = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floorYPos;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floorYPos;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__floorYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____floorYPos = value;
}
constexpr bool& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPosLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floorYPosLocal;
}
constexpr bool const& BeatSaber::AvatarCore::AvatarShadowController::__get__floorYPosLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floorYPosLocal;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__floorYPosLocal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____floorYPosLocal = value;
}
constexpr ::BeatSaber::AvatarCore::AvatarController*& BeatSaber::AvatarCore::AvatarShadowController::__get__avatarController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarController;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> const& BeatSaber::AvatarCore::AvatarShadowController::__get__avatarController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarController;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__avatarController(::BeatSaber::AvatarCore::AvatarController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& BeatSaber::AvatarCore::AvatarShadowController::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& BeatSaber::AvatarCore::AvatarShadowController::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::FollowPosition(::UnityEngine::Vector3 followPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "FollowPosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, followPosition);
}
inline ::BeatSaber::AvatarCore::AvatarShadowController* BeatSaber::AvatarCore::AvatarShadowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarShadowController*>());
}
inline void BeatSaber::AvatarCore::AvatarShadowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarShadowController::AvatarShadowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
