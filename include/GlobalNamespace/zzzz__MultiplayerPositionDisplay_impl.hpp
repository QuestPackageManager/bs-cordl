#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPositionDisplay.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionDisplay_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::Start)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59dd114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59dd24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59dd3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.UpdateColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::UpdateColors)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59dd41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "UpdateColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.UpdatePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x59dd4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "UpdatePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.HandlePlayerFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59dd670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "HandlePlayerFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.HandleFirstPlayerDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59dd770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(),
                                                             { "HandleFirstPlayerDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay.ChangeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)(::UnityEngine::Color, float_t)>(
    &::GlobalNamespace::MultiplayerPositionDisplay::ChangeColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59dd334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(),
                                                                                           { "ChangeColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPositionDisplay._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPositionDisplay::*)()>(&::GlobalNamespace::MultiplayerPositionDisplay::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59dd820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__normalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__normalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__normalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__leadingColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__leadingColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__leadingColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__failedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__failedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__failedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedColor = value;
}
constexpr float_t& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__fadeInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__fadeInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInDuration;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__fadeInDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInDuration = value;
}
constexpr float_t& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__crossFadeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__crossFadeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crossFadeDuration;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__crossFadeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crossFadeDuration = value;
}
constexpr float_t& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__fadeOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__fadeOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__fadeOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
constexpr bool& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__wasFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasFirst;
}
constexpr bool const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__wasFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasFirst;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__wasFirst(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasFirst = value;
}
constexpr bool& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__isFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__isFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFailed;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__isFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFailed = value;
}
constexpr bool& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__updatingColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingColor;
}
constexpr bool const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__updatingColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatingColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__updatingColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatingColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__startColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__targetColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__targetColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetColor;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__targetColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetColor = value;
}
constexpr float_t& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__colorAnimationStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAnimationStartTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__colorAnimationStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAnimationStartTime;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__colorAnimationStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorAnimationStartTime = value;
}
constexpr float_t& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__colorAnimationStartDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAnimationStartDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_get__colorAnimationStartDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAnimationStartDuration;
}
constexpr void GlobalNamespace::MultiplayerPositionDisplay::__cordl_internal_set__colorAnimationStartDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorAnimationStartDuration = value;
}
inline void GlobalNamespace::MultiplayerPositionDisplay::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::UpdateColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "UpdateColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::UpdatePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "UpdatePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::HandlePlayerFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { "HandlePlayerFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::HandleFirstPlayerDidChange(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(),
                                                           { "HandleFirstPlayerDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::ChangeColor(::UnityEngine::Color toColor, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(),
                                                                                         { "ChangeColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toColor, duration);
}
inline void GlobalNamespace::MultiplayerPositionDisplay::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPositionDisplay*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPositionDisplay* GlobalNamespace::MultiplayerPositionDisplay::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerPositionDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPositionDisplay::MultiplayerPositionDisplay() {}
