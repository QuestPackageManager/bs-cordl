#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeBloomPrePassLightReflectionEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightReflectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCollisionRepository_def.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLightReflectionEffect_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint.SetCollisionLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::*)(bool, ::UnityEngine::RaycastHit)>(
    &::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetCollisionLength)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x599ada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                             { "SetCollisionLength", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::*)(bool, ::UnityEngine::Color)>(
    &::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetActive)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x599afc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                             { "SetActive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::*)(
    float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x599b084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                            { "SetData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::*)()>(
    &::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x599b174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___light;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___light;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_light(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___light = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_showHitPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showHitPoint;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_showHitPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showHitPoint;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_showHitPoint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showHitPoint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointGameObject;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_hitPointGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitPointGameObject = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointTransform;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_hitPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitPointTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId>&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointLightWithId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointLightWithId;
}
constexpr ::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> const&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointLightWithId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointLightWithId;
}
constexpr void
GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_hitPointLightWithId(::UnityW<::GlobalNamespace::InstancedMaterialLightWithId> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitPointLightWithId = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointDistanceToAlphaCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointDistanceToAlphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get_hitPointDistanceToAlphaCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hitPointDistanceToAlphaCurve;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set_hitPointDistanceToAlphaCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hitPointDistanceToAlphaCurve = value;
}
constexpr bool& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get__hitPointState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointState;
}
constexpr bool const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_get__hitPointState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hitPointState;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::__cordl_internal_set__hitPointState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hitPointState = value;
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetCollisionLength(bool rayHitGeometry, ::UnityEngine::RaycastHit hit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                                                         { "SetCollisionLength", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::RaycastHit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayHitGeometry, hit);
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetActive(bool enabled, ::UnityEngine::Color mainLightColor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                                                         { "SetActive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled, mainLightColor);
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::SetData(float_t remainingLength, float_t startAlpha, ::UnityEngine::Vector3 hitWorldPosition,
                                                                                                              ::UnityEngine::Vector3 hitReflection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                          { "SetData", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remainingLength, startAlpha, hitWorldPosition, hitReflection);
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*
GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint() {}
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x599a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::LateUpdate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x599a5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect.RaycastAndSetLightLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::*)(
    ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>,
    ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::RaycastAndSetLightLength)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x599a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(),
                                                             { "RaycastAndSetLightLength",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::*)()>(&::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x599aa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__mainTubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainTubeBloomPrePassLight;
}
constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* const&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__mainTubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainTubeBloomPrePassLight;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_set__mainTubeBloomPrePassLight(
    ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainTubeBloomPrePassLight = value;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__tubeBloomPrePassLightBounces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLightBounces;
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*> const&
GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__tubeBloomPrePassLightBounces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLightBounces;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_set__tubeBloomPrePassLightBounces(
    ::ArrayW<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeBloomPrePassLightBounces = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__environmentLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__environmentLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentLayerMask;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_set__environmentLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentLayerMask = value;
}
constexpr ::GlobalNamespace::EnvironmentCollisionRepository*& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__environmentCollisionRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentCollisionRepository;
}
constexpr ::GlobalNamespace::EnvironmentCollisionRepository* const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__environmentCollisionRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentCollisionRepository;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_set__environmentCollisionRepository(::GlobalNamespace::EnvironmentCollisionRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentCollisionRepository = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TubeBloomPrePassLightReflectionEffect::RaycastAndSetLightLength(::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint* bounce,
                                                                                             ::UnityEngine::Vector3 rayWorldOrigin, ::UnityEngine::Vector3 rayDirection,
                                                                                             ::by_ref<::UnityEngine::Vector3> hitWorldPosition, ::by_ref<::UnityEngine::Vector3> hitReflection,
                                                                                             ::by_ref<float_t> length, ::by_ref<float_t> endAlpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(),
                                                           { "RaycastAndSetLightLength",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect_TubeBloomPrePassLightWithHitPoint*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounce, rayWorldOrigin, rayDirection, hitWorldPosition, hitReflection, length, endAlpha);
}
inline void GlobalNamespace::TubeBloomPrePassLightReflectionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect* GlobalNamespace::TubeBloomPrePassLightReflectionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeBloomPrePassLightReflectionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeBloomPrePassLightReflectionEffect::TubeBloomPrePassLightReflectionEffect() {}
