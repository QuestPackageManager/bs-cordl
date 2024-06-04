#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarShadowController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarShadowController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarController_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1047578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1047594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController.FollowPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::AvatarCore::AvatarShadowController::FollowPosition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x104763c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "FollowPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarShadowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarShadowController::*)()>(
    &::BeatSaber::AvatarCore::AvatarShadowController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1047724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__distanceScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceScale;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__distanceScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceScale;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__distanceScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distanceScale = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
constexpr float_t& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__floorYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPos;
}
constexpr float_t const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__floorYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPos;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__floorYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorYPos = value;
}
constexpr bool& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__floorYPosLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPosLocal;
}
constexpr bool const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__floorYPosLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPosLocal;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__floorYPosLocal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorYPosLocal = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController>& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__avatarController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarController;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController> const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__avatarController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarController;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__avatarController(::UnityW<::BeatSaber::AvatarCore::AvatarController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void BeatSaber::AvatarCore::AvatarShadowController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarShadowController::FollowPosition(::UnityEngine::Vector3 followPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), "FollowPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, followPosition);
}
inline ::BeatSaber::AvatarCore::AvatarShadowController* BeatSaber::AvatarCore::AvatarShadowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::AvatarShadowController*>());
}
inline void BeatSaber::AvatarCore::AvatarShadowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarShadowController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarShadowController::AvatarShadowController() {}
