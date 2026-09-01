#pragma once
// IWYU pragma private; include "GlobalNamespace\FloatFxGroupEffect.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffect_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect_InitData::*)(int32_t, int32_t, ::GlobalNamespace::FloatFxGroupEffectTarget*)>(
    &::GlobalNamespace::FloatFxGroupEffect_InitData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5995aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect_InitData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffectTarget*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr ::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> const& GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_get_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target;
}
constexpr void GlobalNamespace::FloatFxGroupEffect_InitData::__cordl_internal_set_target(::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___target = value;
}
inline void GlobalNamespace::FloatFxGroupEffect_InitData::_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect_InitData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffectTarget*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, target);
}
inline ::GlobalNamespace::FloatFxGroupEffect_InitData* GlobalNamespace::FloatFxGroupEffect_InitData::New_ctor(int32_t groupId, int32_t elementId, ::GlobalNamespace::FloatFxGroupEffectTarget* target) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxGroupEffect_InitData*>(groupId, elementId, target));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffect_InitData::FloatFxGroupEffect_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::*)()>(&::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5995f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::*)(float_t)>(
    &::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5995f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*>(), { "<.ctor>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloatFxGroupEffect_InitData*& GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::__cordl_internal_get_initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initData;
}
constexpr ::GlobalNamespace::FloatFxGroupEffect_InitData* const& GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::__cordl_internal_get_initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initData;
}
constexpr void GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::__cordl_internal_set_initData(::GlobalNamespace::FloatFxGroupEffect_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initData = value;
}
inline void GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::__ctor_b__0(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*>(), { "<.ctor>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0* GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffect___c__DisplayClass4_0::FloatFxGroupEffect___c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)(
    ::GlobalNamespace::FloatFxGroupEffect_InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::FloatFxGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5995cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffect.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FloatFxGroupEffect::*)()>(&::GlobalNamespace::FloatFxGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5995bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::FloatFxEventHandler*& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::GlobalNamespace::FloatFxEventHandler* const& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__cordl_internal_set__handler(::GlobalNamespace::FloatFxEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handler = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__floatFxBeatmapEventCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::FloatFxGroupEffect::__cordl_internal_get__floatFxBeatmapEventCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::FloatFxGroupEffect::__cordl_internal_set__floatFxBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFxBeatmapEventCallbackWrapper = value;
}
inline void GlobalNamespace::FloatFxGroupEffect::_ctor(::GlobalNamespace::FloatFxGroupEffect_InitData* initData, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                       ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::FloatFxGroupEffect_InitData*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::FloatFxGroupEffect::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FloatFxGroupEffect*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxGroupEffect* GlobalNamespace::FloatFxGroupEffect::New_ctor(::GlobalNamespace::FloatFxGroupEffect_InitData* initData,
                                                                                            ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                            ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FloatFxGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffect::FloatFxGroupEffect() {}
