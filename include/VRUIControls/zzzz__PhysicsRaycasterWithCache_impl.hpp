#pragma once
// IWYU pragma private; include "VRUIControls/PhysicsRaycasterWithCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "VRUIControls/zzzz__PhysicsRaycasterWithCache_def.hpp"
//  Writing Method size for method: ::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast::*)(bool, ::UnityEngine::Ray, ::UnityEngine::RaycastHit, float_t, int32_t)>(
    &::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e378e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>(),
            { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void VRUIControls::PhysicsRaycasterWithCache_CachedRaycast::_ctor(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>(),
          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, wasHit, ray, hitInfo, maxDistance, layerMask);
}
// Ctor Parameters [CppParam { name: "wasHit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "layerMask", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast::PhysicsRaycasterWithCache_CachedRaycast(bool wasHit, ::UnityEngine::Ray ray, ::UnityEngine::RaycastHit hitInfo, float_t maxDistance,
                                                                                                           int32_t layerMask) noexcept {
  this->wasHit = wasHit;
  this->ray = ray;
  this->hitInfo = hitInfo;
  this->maxDistance = maxDistance;
  this->layerMask = layerMask;
}
// Ctor Parameters []
constexpr ::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast::PhysicsRaycasterWithCache_CachedRaycast() {}
//  Writing Method size for method: ::VRUIControls::PhysicsRaycasterWithCache.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::PhysicsRaycasterWithCache::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::RaycastHit>, float_t, int32_t)>(
    &::VRUIControls::PhysicsRaycasterWithCache::Raycast)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6e37418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache*>(),
                            { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::PhysicsRaycasterWithCache._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::PhysicsRaycasterWithCache::*)()>(&::VRUIControls::PhysicsRaycasterWithCache::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e37920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>*& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__cachedRaycasts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedRaycasts;
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* const&
VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__cachedRaycasts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedRaycasts;
}
constexpr void VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_set__cachedRaycasts(::System::Collections::Generic::List_1<::VRUIControls::PhysicsRaycasterWithCache_CachedRaycast>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedRaycasts = value;
}
constexpr int32_t& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__lastFrameCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameCount;
}
constexpr int32_t const& VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_get__lastFrameCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameCount;
}
constexpr void VRUIControls::PhysicsRaycasterWithCache::__cordl_internal_set__lastFrameCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameCount = value;
}
inline bool VRUIControls::PhysicsRaycasterWithCache::Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache*>(),
                          { "Raycast", {}, { ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hitInfo, maxDistance, layerMask);
}
inline void VRUIControls::PhysicsRaycasterWithCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::PhysicsRaycasterWithCache*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::PhysicsRaycasterWithCache* VRUIControls::PhysicsRaycasterWithCache::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::PhysicsRaycasterWithCache*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::PhysicsRaycasterWithCache::PhysicsRaycasterWithCache() {}
