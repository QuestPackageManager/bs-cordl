#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwapCapsLockState.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapCapsLockState_def.hpp"
#include "HMUI/zzzz__CapsLockState_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5883c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5883e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.OnCapsLockStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)(::HMUI::CapsLockState)>(&::HMUI::ButtonSpriteSwapCapsLockState::OnCapsLockStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5883ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnCapsLockStateChanged", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState.UpdateSprites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)(::HMUI::CapsLockState)>(&::HMUI::ButtonSpriteSwapCapsLockState::UpdateSprites)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5883cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "UpdateSprites", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwapCapsLockState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwapCapsLockState::*)()>(&::HMUI::ButtonSpriteSwapCapsLockState::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5883ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__lowercaseSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lowercaseSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseOnceSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseOnceSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseSprite;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseSprite = value;
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__lowercaseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lowercaseColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__lowercaseColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lowercaseColor = value;
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseOnceColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseOnceColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseOnceColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseOnceColor = value;
}
constexpr ::UnityEngine::Color& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseColor;
}
constexpr ::UnityEngine::Color const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__uppercaseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uppercaseColor;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__uppercaseColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uppercaseColor = value;
}
constexpr ::UnityW<::HMUI::UIKeyboard>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__keyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboard;
}
constexpr ::UnityW<::HMUI::UIKeyboard> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__keyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboard;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__keyboard(::UnityW<::HMUI::UIKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboard = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__images() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_get__images() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr void HMUI::ButtonSpriteSwapCapsLockState::__cordl_internal_set__images(::ArrayW<::UnityW<::UnityEngine::UI::Image>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____images = value;
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::OnCapsLockStateChanged(::HMUI::CapsLockState capsLockState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "OnCapsLockStateChanged", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsLockState);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::UpdateSprites(::HMUI::CapsLockState capsLockState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { "UpdateSprites", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsLockState);
}
inline void HMUI::ButtonSpriteSwapCapsLockState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwapCapsLockState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ButtonSpriteSwapCapsLockState* HMUI::ButtonSpriteSwapCapsLockState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonSpriteSwapCapsLockState*>());
}
// Ctor Parameters []
constexpr ::HMUI::ButtonSpriteSwapCapsLockState::ButtonSpriteSwapCapsLockState() {}
