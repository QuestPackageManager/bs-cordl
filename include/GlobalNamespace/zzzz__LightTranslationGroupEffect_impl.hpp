#pragma once
// IWYU pragma private; include "GlobalNamespace\LightTranslationGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect_InitData::*)(
    int32_t, int32_t, bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2,
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::LightTranslationGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x599b540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yMirrored = value;
}
constexpr bool& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zMirrored() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr bool const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zMirrored() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zMirrored;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zMirrored(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zMirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTransform;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTransform = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_xDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_xDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_yDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___yDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_yDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___yDistributionLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTranslationLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zTranslationLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zTranslationLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zTranslationLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zTranslationLimits = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zDistributionLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_get_zDistributionLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zDistributionLimits;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect_InitData::__cordl_internal_set_zDistributionLimits(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zDistributionLimits = value;
}
inline void GlobalNamespace::LightTranslationGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                         ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                         ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits,
                                                                         ::UnityEngine::Vector2 yDistributionLimits, ::UnityEngine::Vector2 zTranslationLimits,
                                                                         ::UnityEngine::Vector2 zDistributionLimits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits,
                                                   xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
inline ::GlobalNamespace::LightTranslationGroupEffect_InitData*
GlobalNamespace::LightTranslationGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, ::UnityEngine::Transform* xTransform,
                                                                ::UnityEngine::Transform* yTransform, ::UnityEngine::Transform* zTransform, ::UnityEngine::Vector2 xTranslationLimits,
                                                                ::UnityEngine::Vector2 xDistributionLimits, ::UnityEngine::Vector2 yTranslationLimits, ::UnityEngine::Vector2 yDistributionLimits,
                                                                ::UnityEngine::Vector2 zTranslationLimits, ::UnityEngine::Vector2 zDistributionLimits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform,
                                                                                                                    zTransform, xTranslationLimits, xDistributionLimits, yTranslationLimits,
                                                                                                                    yDistributionLimits, zTranslationLimits, zDistributionLimits));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect_InitData::LightTranslationGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(::GlobalNamespace::LightTranslationGroupEffect_InitData*,
                                                                                                                ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::LightTranslationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x599b1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)()>(&::GlobalNamespace::LightTranslationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x599b4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::LightTranslationEventHandler*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::GlobalNamespace::LightTranslationEventHandler* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__handler(::GlobalNamespace::LightTranslationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationXBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationXBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightTranslationXBeatmapEventCallbackWrapper = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationYBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationYBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightTranslationYBeatmapEventCallbackWrapper = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_get__lightTranslationZBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightTranslationZBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__cordl_internal_set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightTranslationZBeatmapEventCallbackWrapper = value;
}
inline void GlobalNamespace::LightTranslationGroupEffect::_ctor(::GlobalNamespace::LightTranslationGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::LightTranslationGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightTranslationGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightTranslationGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightTranslationGroupEffect* GlobalNamespace::LightTranslationGroupEffect::New_ctor(::GlobalNamespace::LightTranslationGroupEffect_InitData* initData,
                                                                                                              ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                              ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightTranslationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightTranslationGroupEffect::LightTranslationGroupEffect() {}
