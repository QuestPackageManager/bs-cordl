#pragma once
// IWYU pragma private; include "HMUI/ButtonSpriteSwap.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonSpriteSwap_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58837b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5883924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x588396c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { ::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x588398c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.HandleButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)(::HMUI::NoTransitionsButton_SelectionState)>(
    &::HMUI::ButtonSpriteSwap::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5883b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { ::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap.RefreshVisualState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::RefreshVisualState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x588394c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "RefreshVisualState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonSpriteSwap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ButtonSpriteSwap::*)()>(&::HMUI::ButtonSpriteSwap::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5883c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwap::__cordl_internal_get__normalStateSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalStateSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__normalStateSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalStateSprite;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__normalStateSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalStateSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwap::__cordl_internal_get__highlightStateSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightStateSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__highlightStateSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightStateSprite;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__highlightStateSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightStateSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwap::__cordl_internal_get__pressedStateSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedStateSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__pressedStateSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedStateSprite;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__pressedStateSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedStateSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& HMUI::ButtonSpriteSwap::__cordl_internal_get__disabledStateSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledStateSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__disabledStateSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledStateSprite;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__disabledStateSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledStateSprite = value;
}
constexpr ::UnityW<::HMUI::NoTransitionsButton>& HMUI::ButtonSpriteSwap::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::HMUI::NoTransitionsButton> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__button(::UnityW<::HMUI::NoTransitionsButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& HMUI::ButtonSpriteSwap::__cordl_internal_get__images() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& HMUI::ButtonSpriteSwap::__cordl_internal_get__images() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____images;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__images(::ArrayW<::UnityW<::UnityEngine::UI::Image>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____images = value;
}
constexpr bool& HMUI::ButtonSpriteSwap::__cordl_internal_get__didStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr bool const& HMUI::ButtonSpriteSwap::__cordl_internal_get__didStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr void HMUI::ButtonSpriteSwap::__cordl_internal_set__didStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didStart = value;
}
inline void HMUI::ButtonSpriteSwap::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwap::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwap::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwap::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwap::HandleButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void HMUI::ButtonSpriteSwap::RefreshVisualState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { "RefreshVisualState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ButtonSpriteSwap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ButtonSpriteSwap*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ButtonSpriteSwap* HMUI::ButtonSpriteSwap::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ButtonSpriteSwap*>());
}
// Ctor Parameters []
constexpr ::HMUI::ButtonSpriteSwap::ButtonSpriteSwap() {}
