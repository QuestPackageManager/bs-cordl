#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleMaterialSetter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleMaterialSetter_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::BeatSaber::Settings::QualitySettings_ObstacleQuality, bool)>(
    &::GlobalNamespace::ObstacleMaterialSetter::Init)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58da3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                                                             { "Init", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetCoreMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::BeatSaber::Settings::QualitySettings_ObstacleQuality, bool)>(
    &::GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58dafa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                         { "SetCoreMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetFakeGlowMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::BeatSaber::Settings::QualitySettings_ObstacleQuality)>(
    &::GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58db0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                                         { "SetFakeGlowMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58db0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__lwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__lwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__lwCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lwCoreMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__hwCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__hwCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hwCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__hwCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hwCoreMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__texturedCoreMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__texturedCoreMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texturedCoreMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__texturedCoreMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____texturedCoreMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowLWMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowLWMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowLWMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__fakeGlowLWMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeGlowLWMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowTexturedMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__fakeGlowTexturedMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowTexturedMaterial;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__fakeGlowTexturedMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeGlowTexturedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleCoreRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleCoreRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__obstacleCoreRenderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleCoreRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleFakeGlowRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_get__obstacleFakeGlowRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlowRenderer;
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__cordl_internal_set__obstacleFakeGlowRenderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleFakeGlowRenderer = value;
}
inline void GlobalNamespace::ObstacleMaterialSetter::Init(::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality, bool screenDisplacementEffects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                                                           { "Init", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleQuality, screenDisplacementEffects);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality,
                                                                     bool screenDisplacementEffects) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                       { "SetCoreMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, obstacleQuality, screenDisplacementEffects);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial(::UnityEngine::Renderer* renderer, ::BeatSaber::Settings::QualitySettings_ObstacleQuality obstacleQuality) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(),
                                       { "SetFakeGlowMaterial", {}, { ::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::BeatSaber::Settings::QualitySettings_ObstacleQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, obstacleQuality);
}
inline void GlobalNamespace::ObstacleMaterialSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleMaterialSetter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleMaterialSetter* GlobalNamespace::ObstacleMaterialSetter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleMaterialSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleMaterialSetter::ObstacleMaterialSetter() {}
