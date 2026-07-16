#pragma once
// IWYU pragma private; include "GlobalNamespace/VisualMetronome.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__VisualMetronome_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.set_zeroOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)(float_t)>(&::GlobalNamespace::VisualMetronome::set_zeroOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59fa074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "set_zeroOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.get_zeroOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::get_zeroOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fa084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "get_zeroOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59fa08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::OnEnable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59fa124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::OnDisable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59fa16c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59fa1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome.SetMovingTickerNormalizedPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)(float_t)>(&::GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59fa314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "SetMovingTickerNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VisualMetronome._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VisualMetronome::*)()>(&::GlobalNamespace::VisualMetronome::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59fa3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::VisualMetronome::__cordl_internal_get__audioSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::VisualMetronome::__cordl_internal_get__audioSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioSource;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioSource = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__leftPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftPadding;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__leftPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftPadding;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__leftPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftPadding = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__rightPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightPadding;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__rightPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightPadding;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__rightPadding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightPadding = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::VisualMetronome::__cordl_internal_get__ticker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ticker;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::VisualMetronome::__cordl_internal_get__ticker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ticker;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__ticker(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ticker = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::VisualMetronome::__cordl_internal_get__movingTicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingTicker;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::VisualMetronome::__cordl_internal_get__movingTicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingTicker;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__movingTicker(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movingTicker = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickerImage;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickerImage;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__tickerImage(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickerImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic>& GlobalNamespace::VisualMetronome::__cordl_internal_get__movingTickerImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingTickerImage;
}
constexpr ::UnityW<::UnityEngine::UI::Graphic> const& GlobalNamespace::VisualMetronome::__cordl_internal_get__movingTickerImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movingTickerImage;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__movingTickerImage(::UnityW<::UnityEngine::UI::Graphic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movingTickerImage = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__metronomeInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metronomeInterval;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__metronomeInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metronomeInterval;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__metronomeInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metronomeInterval = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::VisualMetronome::__cordl_internal_get__normalTickerSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalTickerSize;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::VisualMetronome::__cordl_internal_get__normalTickerSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalTickerSize;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__normalTickerSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalTickerSize = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickTickerSize0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickTickerSize0;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickTickerSize0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickTickerSize0;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__tickTickerSize0(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickTickerSize0 = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickTickerSize1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickTickerSize1;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::VisualMetronome::__cordl_internal_get__tickTickerSize1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tickTickerSize1;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__tickTickerSize1(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tickTickerSize1 = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__prevAudioTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAudioTime;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__prevAudioTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevAudioTime;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__prevAudioTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevAudioTime = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__zeroOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zeroOffset;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__zeroOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zeroOffset;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__zeroOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zeroOffset = value;
}
constexpr float_t& GlobalNamespace::VisualMetronome::__cordl_internal_get__direction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr float_t const& GlobalNamespace::VisualMetronome::__cordl_internal_get__direction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__direction(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction = value;
}
constexpr bool& GlobalNamespace::VisualMetronome::__cordl_internal_get__dontTickThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontTickThisFrame;
}
constexpr bool const& GlobalNamespace::VisualMetronome::__cordl_internal_get__dontTickThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontTickThisFrame;
}
constexpr void GlobalNamespace::VisualMetronome::__cordl_internal_set__dontTickThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dontTickThisFrame = value;
}
inline void GlobalNamespace::VisualMetronome::set_zeroOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "set_zeroOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::VisualMetronome::get_zeroOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "get_zeroOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VisualMetronome::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VisualMetronome::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VisualMetronome::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VisualMetronome::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VisualMetronome::SetMovingTickerNormalizedPosition(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { "SetMovingTickerNormalizedPosition", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::VisualMetronome::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VisualMetronome*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VisualMetronome* GlobalNamespace::VisualMetronome::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VisualMetronome*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VisualMetronome::VisualMetronome() {}
