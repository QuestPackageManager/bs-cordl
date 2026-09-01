#pragma once
// IWYU pragma private; include "GlobalNamespace\StaticOverridableSpriteColor.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StaticOverridableSpriteColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticOverridableSpriteColor.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticOverridableSpriteColor::*)()>(&::GlobalNamespace::StaticOverridableSpriteColor::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5906940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticOverridableSpriteColor.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticOverridableSpriteColor::*)(::UnityEngine::Color)>(&::GlobalNamespace::StaticOverridableSpriteColor::SetColor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x590696c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticOverridableSpriteColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticOverridableSpriteColor::*)()>(&::GlobalNamespace::StaticOverridableSpriteColor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59069a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spriteRenderer = value;
}
constexpr float_t& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__colorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__colorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType;
}
constexpr void GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_set__colorType(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::StaticOverridableSpriteColor::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
inline void GlobalNamespace::StaticOverridableSpriteColor::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StaticOverridableSpriteColor::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::StaticOverridableSpriteColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticOverridableSpriteColor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticOverridableSpriteColor* GlobalNamespace::StaticOverridableSpriteColor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticOverridableSpriteColor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticOverridableSpriteColor::StaticOverridableSpriteColor() {}
