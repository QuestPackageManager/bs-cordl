#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__ShadowFollowController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShadowFollowController.SetTargetTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShadowFollowController::*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::ShadowFollowController::SetTargetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d835c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), "SetTargetTransform", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadowFollowController.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShadowFollowController::*)()>(&::GlobalNamespace::ShadowFollowController::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x20d8364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShadowFollowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShadowFollowController::*)()>(&::GlobalNamespace::ShadowFollowController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20d8444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::ShadowFollowController::__get__shadowTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::ShadowFollowController::__get__shadowTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTransform;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__shadowTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shadowTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::ShadowFollowController::__get__targetTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::ShadowFollowController::__get__targetTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTransform;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__targetTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::ShadowFollowController::__get__shadowSpriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowSpriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::ShadowFollowController::__get__shadowSpriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowSpriteRenderer;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__shadowSpriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shadowSpriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ShadowFollowController::__get__shadowHeightRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowHeightRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ShadowFollowController::__get__shadowHeightRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowHeightRange;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__shadowHeightRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowHeightRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ShadowFollowController::__get__shadowSizeRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowSizeRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ShadowFollowController::__get__shadowSizeRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowSizeRange;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__shadowSizeRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowSizeRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ShadowFollowController::__get__shadowAlphaRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowAlphaRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ShadowFollowController::__get__shadowAlphaRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowAlphaRange;
}
constexpr void GlobalNamespace::ShadowFollowController::__set__shadowAlphaRange(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowAlphaRange = value;
}
inline void GlobalNamespace::ShadowFollowController::SetTargetTransform(::UnityEngine::Transform* target) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), "SetTargetTransform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void GlobalNamespace::ShadowFollowController::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ShadowFollowController* GlobalNamespace::ShadowFollowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ShadowFollowController*>());
}
inline void GlobalNamespace::ShadowFollowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShadowFollowController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShadowFollowController::ShadowFollowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
