#pragma once
// IWYU pragma private; include "GlobalNamespace/LightManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__LightManager_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x586b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x586b640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnCameraPreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::LightManager::OnCameraPreRender)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x586b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(),
                                                { "OnCameraPreRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x586bd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager.ResetColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::ResetColors)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x586bd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "ResetColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightManager::*)()>(&::GlobalNamespace::LightManager::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x586bdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightDirections;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__directionalLightDirections(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLightDirections = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightColors;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__directionalLightColors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLightColors = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightPositions;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__directionalLightPositions(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLightPositions = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightRadii() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightRadii;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::LightManager::__cordl_internal_get__directionalLightRadii() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLightRadii;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__directionalLightRadii(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLightRadii = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LightManager::__cordl_internal_get__pointLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LightManager::__cordl_internal_get__pointLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightPositions;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__pointLightPositions(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointLightPositions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::LightManager::__cordl_internal_get__pointLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::LightManager::__cordl_internal_get__pointLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointLightColors;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set__pointLightColors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointLightColors = value;
}
constexpr int32_t& GlobalNamespace::LightManager::__cordl_internal_get_lastRefreshFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrameNum;
}
constexpr int32_t const& GlobalNamespace::LightManager::__cordl_internal_get_lastRefreshFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRefreshFrameNum;
}
constexpr void GlobalNamespace::LightManager::__cordl_internal_set_lastRefreshFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastRefreshFrameNum = value;
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightDirectionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightDirectionsID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightDirectionsID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightDirectionsID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightPositionID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightPositionID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightPositionID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightPositionID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightRadiiID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightRadiiID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightRadiiID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightRadiiID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::setStaticF__directionalLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_directionalLightColorsID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__directionalLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_directionalLightColorsID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::setStaticF__pointLightPositionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pointLightPositionsID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__pointLightPositionsID() {
  return ::cordl_internals::getStaticField<int32_t, "_pointLightPositionsID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::setStaticF__pointLightColorsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_pointLightColorsID", ::GlobalNamespace::LightManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::LightManager::getStaticF__pointLightColorsID() {
  return ::cordl_internals::getStaticField<int32_t, "_pointLightColorsID", ::GlobalNamespace::LightManager*>();
}
inline void GlobalNamespace::LightManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::OnCameraPreRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* currentCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(),
                                              { "OnCameraPreRender", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, currentCamera);
}
inline void GlobalNamespace::LightManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::ResetColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { "ResetColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightManager* GlobalNamespace::LightManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightManager::LightManager() {}
