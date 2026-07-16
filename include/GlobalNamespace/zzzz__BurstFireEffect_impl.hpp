#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstFireEffect.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_impl.hpp"
#include "GlobalNamespace/zzzz__FireEffect_impl.hpp"
#include "GlobalNamespace/zzzz__BurstFireEffect_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58c07c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58c0920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58c0b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::BurstFireEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58c0bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.StartEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)(float_t)>(&::GlobalNamespace::BurstFireEffect::StartEffect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x58c0d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "StartEffect", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.EndEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::EndEffect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58c0d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "EndEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.SetInitialValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::SetInitialValues)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58c0a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "SetInitialValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect.UpdateFadeOutProgress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)(float_t)>(&::GlobalNamespace::BurstFireEffect::UpdateFadeOutProgress)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x58c0ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "UpdateFadeOutProgress", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BurstFireEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BurstFireEffect::*)()>(&::GlobalNamespace::BurstFireEffect::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58c11a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BurstFireEffect::__cordl_internal_get__fadeOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__fadeOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__fadeOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BurstFireEffect::__cordl_internal_get__flipbookFadeOutCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipbookFadeOutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__flipbookFadeOutCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipbookFadeOutCurve;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__flipbookFadeOutCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipbookFadeOutCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BurstFireEffect::__cordl_internal_get__bloomFadeOutCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFadeOutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__bloomFadeOutCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFadeOutCurve;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__bloomFadeOutCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFadeOutCurve = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BurstFireEffect::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::BurstFireEffect::__cordl_internal_get__songTimeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__songTimeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeTweeningManager = value;
}
constexpr ::GlobalNamespace::EnvironmentContext& GlobalNamespace::BurstFireEffect::__cordl_internal_get__environmentContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr ::GlobalNamespace::EnvironmentContext const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__environmentContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentContext;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentContext = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::BurstFireEffect::__cordl_internal_get__fadeOutTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::BurstFireEffect::__cordl_internal_get__fadeOutTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr void GlobalNamespace::BurstFireEffect::__cordl_internal_set__fadeOutTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutTween = value;
}
inline void GlobalNamespace::BurstFireEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstFireEffect::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstFireEffect::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstFireEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GlobalNamespace::BurstFireEffect::StartEffect(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "StartEffect", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GlobalNamespace::BurstFireEffect::EndEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "EndEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstFireEffect::SetInitialValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "SetInitialValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BurstFireEffect::UpdateFadeOutProgress(float_t fadeOutProgress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { "UpdateFadeOutProgress", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeOutProgress);
}
inline void GlobalNamespace::BurstFireEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BurstFireEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BurstFireEffect* GlobalNamespace::BurstFireEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BurstFireEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BurstFireEffect::BurstFireEffect() {}
