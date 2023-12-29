#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleShadowController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleShadowController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleShadowController::*)()>(&::GlobalNamespace::SimpleShadowController::Start)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f99dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleShadowController.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleShadowController::*)()>(&::GlobalNamespace::SimpleShadowController::LateUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1f99df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleShadowController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SimpleShadowController::*)()>(&::GlobalNamespace::SimpleShadowController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f99eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& GlobalNamespace::SimpleShadowController::__get__followTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::SimpleShadowController::__get__followTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followTransform;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__followTransform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____followTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::SpriteRenderer*& GlobalNamespace::SimpleShadowController::__get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& GlobalNamespace::SimpleShadowController::__get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__spriteRenderer(::UnityEngine::SpriteRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spriteRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SimpleShadowController::__get__distanceScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceScale;
}
constexpr float_t const& GlobalNamespace::SimpleShadowController::__get__distanceScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distanceScale;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__distanceScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distanceScale = value;
}
constexpr float_t& GlobalNamespace::SimpleShadowController::__get__scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr float_t const& GlobalNamespace::SimpleShadowController::__get__scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scale;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scale = value;
}
constexpr float_t& GlobalNamespace::SimpleShadowController::__get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr float_t const& GlobalNamespace::SimpleShadowController::__get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
constexpr float_t& GlobalNamespace::SimpleShadowController::__get__floorYPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPos;
}
constexpr float_t const& GlobalNamespace::SimpleShadowController::__get__floorYPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPos;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__floorYPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorYPos = value;
}
constexpr bool& GlobalNamespace::SimpleShadowController::__get__floorYPosLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPosLocal;
}
constexpr bool const& GlobalNamespace::SimpleShadowController::__get__floorYPosLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floorYPosLocal;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__floorYPosLocal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floorYPosLocal = value;
}
constexpr ::UnityEngine::Transform*& GlobalNamespace::SimpleShadowController::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& GlobalNamespace::SimpleShadowController::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::SimpleShadowController::__set__transform(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SimpleShadowController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleShadowController::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleShadowController* GlobalNamespace::SimpleShadowController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SimpleShadowController*>());
}
inline void GlobalNamespace::SimpleShadowController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SimpleShadowController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleShadowController::SimpleShadowController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
