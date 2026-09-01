#pragma once
// IWYU pragma private; include "GlobalNamespace\WhiteColorOrAlphaGroupEffect.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(
    ::GlobalNamespace::LightColorGroupEffect_InitData*, ::UnityEngine::Color, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*,
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::IBpmController*)>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5999f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffect.GetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(
    &::GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5999f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(), { ::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::WhiteColorOrAlphaGroupEffect::__cordl_internal_get__defaultColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::WhiteColorOrAlphaGroupEffect::__cordl_internal_get__defaultColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultColor;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffect::__cordl_internal_set__defaultColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultColor = value;
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData, ::UnityEngine::Color defaultColor,
                                                                 ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                 ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                 ::GlobalNamespace::IBpmController* bpmController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::LightColorGroupEffect_InitData*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                              ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                              ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, defaultColor, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController);
}
inline ::UnityEngine::Color GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, colorType, colorBoost, brightness);
}
inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffect* GlobalNamespace::WhiteColorOrAlphaGroupEffect::New_ctor(::GlobalNamespace::LightColorGroupEffect_InitData* initData,
                                                                                                                ::UnityEngine::Color defaultColor, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                                                                ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                                ::GlobalNamespace::ColorManager* colorManager,
                                                                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                                ::GlobalNamespace::IBpmController* bpmController) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(initData, defaultColor, lightManager, tweeningManager, colorManager,
                                                                                                            beatmapCallbacksController, bpmController));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhiteColorOrAlphaGroupEffect::WhiteColorOrAlphaGroupEffect() {}
