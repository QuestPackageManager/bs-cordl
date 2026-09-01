#pragma once
// IWYU pragma private; include "GlobalNamespace\StartMiddleEndButtonBackgroundController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StartMiddleEndButtonBackgroundController_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonBackgroundController.SetStartSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(
    &::GlobalNamespace::StartMiddleEndButtonBackgroundController::SetStartSprite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetStartSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonBackgroundController.SetMiddleSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(
    &::GlobalNamespace::StartMiddleEndButtonBackgroundController::SetMiddleSprite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetMiddleSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonBackgroundController.SetEndSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(
    &::GlobalNamespace::StartMiddleEndButtonBackgroundController::SetEndSprite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetEndSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StartMiddleEndButtonBackgroundController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StartMiddleEndButtonBackgroundController::*)()>(&::GlobalNamespace::StartMiddleEndButtonBackgroundController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5922ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__startSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__startSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startSprite;
}
constexpr void GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_set__startSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__middleSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__middleSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleSprite;
}
constexpr void GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_set__middleSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____middleSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__endSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__endSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endSprite;
}
constexpr void GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_set__endSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endSprite = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_get__image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____image;
}
constexpr void GlobalNamespace::StartMiddleEndButtonBackgroundController::__cordl_internal_set__image(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____image = value;
}
inline void GlobalNamespace::StartMiddleEndButtonBackgroundController::SetStartSprite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetStartSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartMiddleEndButtonBackgroundController::SetMiddleSprite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetMiddleSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartMiddleEndButtonBackgroundController::SetEndSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { "SetEndSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StartMiddleEndButtonBackgroundController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StartMiddleEndButtonBackgroundController* GlobalNamespace::StartMiddleEndButtonBackgroundController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StartMiddleEndButtonBackgroundController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StartMiddleEndButtonBackgroundController::StartMiddleEndButtonBackgroundController() {}
