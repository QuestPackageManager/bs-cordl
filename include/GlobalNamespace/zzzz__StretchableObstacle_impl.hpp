#pragma once
// IWYU pragma private; include "GlobalNamespace/StretchableObstacle.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StretchableObstacle_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFakeGlowController_def.hpp"
#include "GlobalNamespace/zzzz__ParametricBoxFrameController_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.get_bounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::get_bounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59736f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { "get_bounds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.SetAllProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)(float_t, float_t, float_t, ::UnityEngine::Color, float_t)>(
    &::GlobalNamespace::StretchableObstacle::SetAllProperties)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5973704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
            { "SetAllProperties", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.SetSizeAndOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)(float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::StretchableObstacle::SetSizeAndOffset)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5973c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
                                                { "SetSizeAndOffset", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::OnValidate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5973ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.CalculateObstacleTransformProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::StretchableObstacle::*)(float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
        &::GlobalNamespace::StretchableObstacle::CalculateObstacleTransformProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5973adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
                                                             { "CalculateObstacleTransformProperties",
                                                               {},
                                                               { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle.SetObstacleCoreTransformProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::StretchableObstacle::SetObstacleCoreTransformProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5973b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
            { "SetObstacleCoreTransformProperties", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StretchableObstacle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StretchableObstacle::*)()>(&::GlobalNamespace::StretchableObstacle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5973f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeSize = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StretchableObstacle::__cordl_internal_get__coreOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__coreOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreOffset;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__coreOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coreOffset = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__addColorMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColorMultiplier;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__addColorMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____addColorMultiplier;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__addColorMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____addColorMultiplier = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCoreLerpToWhiteFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreLerpToWhiteFactor;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCoreLerpToWhiteFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCoreLerpToWhiteFactor;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleCoreLerpToWhiteFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleCoreLerpToWhiteFactor = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StretchableObstacle::__cordl_internal_get__fakeGlowOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__fakeGlowOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fakeGlowOffset;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__fakeGlowOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fakeGlowOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCore;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleCore;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleCore(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleCore = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__materialPropertyBlockControllers(::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFrame;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFrameController> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFrame;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleFrame(::UnityW<::GlobalNamespace::ParametricBoxFrameController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleFrame = value;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController>& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFakeGlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlow;
}
constexpr ::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__obstacleFakeGlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleFakeGlow;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__obstacleFakeGlow(::UnityW<::GlobalNamespace::ParametricBoxFakeGlowController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleFakeGlow = value;
}
constexpr float_t& GlobalNamespace::StretchableObstacle::__cordl_internal_get__manualUVOffsetMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualUVOffsetMultiplier;
}
constexpr float_t const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__manualUVOffsetMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manualUVOffsetMultiplier;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__manualUVOffsetMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manualUVOffsetMultiplier = value;
}
constexpr ::UnityEngine::Bounds& GlobalNamespace::StretchableObstacle::__cordl_internal_get__bounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr ::UnityEngine::Bounds const& GlobalNamespace::StretchableObstacle::__cordl_internal_get__bounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bounds;
}
constexpr void GlobalNamespace::StretchableObstacle::__cordl_internal_set__bounds(::UnityEngine::Bounds value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bounds = value;
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__uvScaleID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_uvScaleID", ::GlobalNamespace::StretchableObstacle*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__uvScaleID() {
  return ::cordl_internals::getStaticField<int32_t, "_uvScaleID", ::GlobalNamespace::StretchableObstacle*>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__uvManualOffsetID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_uvManualOffsetID", ::GlobalNamespace::StretchableObstacle*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__uvManualOffsetID() {
  return ::cordl_internals::getStaticField<int32_t, "_uvManualOffsetID", ::GlobalNamespace::StretchableObstacle*>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__tintColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_tintColorID", ::GlobalNamespace::StretchableObstacle*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__tintColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_tintColorID", ::GlobalNamespace::StretchableObstacle*>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__addColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_addColorID", ::GlobalNamespace::StretchableObstacle*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__addColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_addColorID", ::GlobalNamespace::StretchableObstacle*>();
}
inline void GlobalNamespace::StretchableObstacle::setStaticF__mainColorID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_mainColorID", ::GlobalNamespace::StretchableObstacle*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::StretchableObstacle::getStaticF__mainColorID() {
  return ::cordl_internals::getStaticField<int32_t, "_mainColorID", ::GlobalNamespace::StretchableObstacle*>();
}
inline ::UnityEngine::Bounds GlobalNamespace::StretchableObstacle::get_bounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { "get_bounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableObstacle::SetAllProperties(float_t width, float_t height, float_t length, ::UnityEngine::Color color, float_t manualUvOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
          { "SetAllProperties", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, length, color, manualUvOffset);
}
inline void GlobalNamespace::StretchableObstacle::SetSizeAndOffset(float_t width, float_t height, float_t length, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
                                              { "SetSizeAndOffset", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, length, offset);
}
inline void GlobalNamespace::StretchableObstacle::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StretchableObstacle::CalculateObstacleTransformProperties(float_t width, float_t height, float_t length, ::by_ref<::UnityEngine::Vector3> localPosition,
                                                                                       ::by_ref<::UnityEngine::Vector3> size, ::by_ref<::UnityEngine::Vector3> scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
                                                           { "CalculateObstacleTransformProperties",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, length, localPosition, size, scale);
}
inline void GlobalNamespace::StretchableObstacle::SetObstacleCoreTransformProperties(::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 size, ::UnityEngine::Vector3 scale) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(),
          { "SetObstacleCoreTransformProperties", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPosition, size, scale);
}
inline void GlobalNamespace::StretchableObstacle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StretchableObstacle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StretchableObstacle* GlobalNamespace::StretchableObstacle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StretchableObstacle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StretchableObstacle::StretchableObstacle() {}
