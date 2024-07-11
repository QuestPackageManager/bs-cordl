#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnLaserAnimation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnLaserAnimation_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnLaserAnimation.InitIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnLaserAnimation::*)()>(&::GlobalNamespace::SpawnLaserAnimation::InitIfNeeded)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26eccfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), "InitIfNeeded",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnLaserAnimation.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnLaserAnimation::*)()>(&::GlobalNamespace::SpawnLaserAnimation::LateUpdate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x26ecdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnLaserAnimation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SpawnLaserAnimation::*)()>(&::GlobalNamespace::SpawnLaserAnimation::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26ecec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__centerThresholdTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerThresholdTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__centerThresholdTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerThresholdTransform;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__centerThresholdTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerThresholdTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__horizontalLasersTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalLasersTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__horizontalLasersTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalLasersTransform;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__horizontalLasersTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____horizontalLasersTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__leftHorizontalLaser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHorizontalLaser;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__leftHorizontalLaser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHorizontalLaser;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__leftHorizontalLaser(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHorizontalLaser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__rightHorizontalLaser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHorizontalLaser;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__rightHorizontalLaser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHorizontalLaser;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__rightHorizontalLaser(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightHorizontalLaser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__normalizedDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedDistance;
}
constexpr float_t const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__normalizedDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedDistance;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__normalizedDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedDistance = value;
}
constexpr float_t& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__alphaMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMultiplier;
}
constexpr float_t const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__alphaMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMultiplier;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__alphaMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaMultiplier = value;
}
constexpr float_t& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__laserLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserLength;
}
constexpr float_t const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__laserLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserLength;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__laserLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____laserLength = value;
}
constexpr float_t& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__centerDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistance;
}
constexpr float_t const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__centerDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistance;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__centerDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerDistance = value;
}
constexpr bool& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::SpawnLaserAnimation::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::SpawnLaserAnimation::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::SpawnLaserAnimation::InitIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), "InitIfNeeded",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnLaserAnimation::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnLaserAnimation* GlobalNamespace::SpawnLaserAnimation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SpawnLaserAnimation*>());
}
inline void GlobalNamespace::SpawnLaserAnimation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SpawnLaserAnimation*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnLaserAnimation::SpawnLaserAnimation() {}
