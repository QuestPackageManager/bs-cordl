#pragma once
// IWYU pragma private; include "GlobalNamespace/KawaseBloomMainEffectSO.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBloomMainEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO.get_hasPostProcessEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&::GlobalNamespace::KawaseBloomMainEffectSO::get_hasPostProcessEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f40644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&::GlobalNamespace::KawaseBloomMainEffectSO::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f4064c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&::GlobalNamespace::KawaseBloomMainEffectSO::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f4073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO.LazyInitializeMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&::GlobalNamespace::KawaseBloomMainEffectSO::LazyInitializeMaterials)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f40678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { "LazyInitializeMaterials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO.PreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBloomMainEffectSO::*)(::UnityEngine::Rendering::IBaseCommandBuffer*)>(
    &::GlobalNamespace::KawaseBloomMainEffectSO::PreRender)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4075c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KawaseBloomMainEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KawaseBloomMainEffectSO::*)()>(&::GlobalNamespace::KawaseBloomMainEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f4093c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kawaseBlurRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__mainEffectShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__mainEffectShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectShader;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__mainEffectShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectShader = value;
}
constexpr float_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensity;
}
constexpr float_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensity;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__bloomIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomIntensity = value;
}
constexpr int32_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIterations;
}
constexpr int32_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIterations;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__bloomIterations(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomIterations = value;
}
constexpr float_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomBoost;
}
constexpr float_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomBoost;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__bloomBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomBoost = value;
}
constexpr float_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomAlphaWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomAlphaWeights;
}
constexpr float_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomAlphaWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomAlphaWeights;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__bloomAlphaWeights(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomAlphaWeights = value;
}
constexpr int32_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomTextureWidth;
}
constexpr int32_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__bloomTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomTextureWidth;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__bloomTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomTextureWidth = value;
}
constexpr float_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__baseColorBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr float_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__baseColorBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__baseColorBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoost = value;
}
constexpr float_t& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr float_t const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__baseColorBoostThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoostThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__mainEffectMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_get__mainEffectMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectMaterial;
}
constexpr void GlobalNamespace::KawaseBloomMainEffectSO::__cordl_internal_set__mainEffectMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectMaterial = value;
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::setStaticF__bloomTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::KawaseBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBloomMainEffectSO::getStaticF__bloomTexID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::KawaseBloomMainEffectSO*>();
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::setStaticF__bloomIntensityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomIntensityID", ::GlobalNamespace::KawaseBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBloomMainEffectSO::getStaticF__bloomIntensityID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomIntensityID", ::GlobalNamespace::KawaseBloomMainEffectSO*>();
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::setStaticF__fadeID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_fadeID", ::GlobalNamespace::KawaseBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::KawaseBloomMainEffectSO::getStaticF__fadeID() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeID", ::GlobalNamespace::KawaseBloomMainEffectSO*>();
}
inline bool GlobalNamespace::KawaseBloomMainEffectSO::get_hasPostProcessEffect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::LazyInitializeMaterials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { "LazyInitializeMaterials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GlobalNamespace::KawaseBloomMainEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::KawaseBloomMainEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KawaseBloomMainEffectSO* GlobalNamespace::KawaseBloomMainEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KawaseBloomMainEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KawaseBloomMainEffectSO::KawaseBloomMainEffectSO() {}
