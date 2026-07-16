#pragma once
// IWYU pragma private; include "Ice/FloorLightTile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "Ice/zzzz__FloorLightTile_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Ice::FloorLightTile_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile_Pool::*)()>(&::Ice::FloorLightTile_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3289130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Ice::FloorLightTile_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightTile_Pool* Ice::FloorLightTile_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightTile_Pool*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTile_Pool::FloorLightTile_Pool() {}
//  Writing Method size for method: ::Ice::FloorLightTile.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::Awake)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3288cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::OnDestroy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3288f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HighlightWithColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)(::UnityEngine::Color, float_t, float_t)>(&::Ice::FloorLightTile::HighlightWithColor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3288fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(),
                                                             { "HighlightWithColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HandleFadeInTweenOnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::HandleFadeInTweenOnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x328908c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "HandleFadeInTweenOnCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.HandleFadeOutTweenOnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::HandleFadeOutTweenOnCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32890ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "HandleFadeOutTweenOnCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)(::UnityEngine::Color)>(&::Ice::FloorLightTile::SetColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32890cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ice::FloorLightTile._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ice::FloorLightTile::*)()>(&::Ice::FloorLightTile::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328912c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& Ice::FloorLightTile::__cordl_internal_get__colorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& Ice::FloorLightTile::__cordl_internal_get__colorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSetter;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__colorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSetter = value;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& Ice::FloorLightTile::__cordl_internal_get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& Ice::FloorLightTile::__cordl_internal_get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeBloomPrePassLight = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& Ice::FloorLightTile::__cordl_internal_get__songTimeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& Ice::FloorLightTile::__cordl_internal_get__songTimeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeTweeningManager = value;
}
constexpr ::System::Action_1<::UnityW<::Ice::FloorLightTile>>*& Ice::FloorLightTile::__cordl_internal_get_didFinish() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinish;
}
constexpr ::System::Action_1<::UnityW<::Ice::FloorLightTile>>* const& Ice::FloorLightTile::__cordl_internal_get_didFinish() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinish;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set_didFinish(::System::Action_1<::UnityW<::Ice::FloorLightTile>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinish = value;
}
constexpr ::Tweening::ColorTween*& Ice::FloorLightTile::__cordl_internal_get__fadeInTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr ::Tweening::ColorTween* const& Ice::FloorLightTile::__cordl_internal_get__fadeInTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__fadeInTween(::Tweening::ColorTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInTween = value;
}
constexpr ::Tweening::ColorTween*& Ice::FloorLightTile::__cordl_internal_get__fadeOutTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr ::Tweening::ColorTween* const& Ice::FloorLightTile::__cordl_internal_get__fadeOutTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr void Ice::FloorLightTile::__cordl_internal_set__fadeOutTween(::Tweening::ColorTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutTween = value;
}
inline void Ice::FloorLightTile::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTile::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTile::HighlightWithColor(::UnityEngine::Color color, float_t fadeInDuration, float_t fadeOutDuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "HighlightWithColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, fadeInDuration, fadeOutDuration);
}
inline void Ice::FloorLightTile::HandleFadeInTweenOnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "HandleFadeInTweenOnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTile::HandleFadeOutTweenOnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "HandleFadeOutTweenOnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ice::FloorLightTile::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Ice::FloorLightTile::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Ice::FloorLightTile*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ice::FloorLightTile* Ice::FloorLightTile::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ice::FloorLightTile*>());
}
// Ctor Parameters []
constexpr ::Ice::FloorLightTile::FloorLightTile() {}
