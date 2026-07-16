#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteSwapTransitionSO.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__SpriteSwapTransitionSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_normalSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_normalSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_normalSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_highlightedSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_highlightedSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_highlightedSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_pressedSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_pressedSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_pressedSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_disabledSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_disabledSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_disabledSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_selectedSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_selectedSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_selectedSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO.get_selectedAndHighlightedSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(
    &::GlobalNamespace::SpriteSwapTransitionSO::get_selectedAndHighlightedSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_selectedAndHighlightedSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpriteSwapTransitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpriteSwapTransitionSO::*)()>(&::GlobalNamespace::SpriteSwapTransitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__normalSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__normalSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__normalSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__highlightedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__highlightedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__highlightedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__pressedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__pressedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__pressedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__disabledSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__disabledSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__disabledSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__selectedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__selectedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__selectedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__selectedAndHighlightedSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_get__selectedAndHighlightedSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedSprite;
}
constexpr void GlobalNamespace::SpriteSwapTransitionSO::__cordl_internal_set__selectedAndHighlightedSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedSprite = value;
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_normalSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_normalSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_highlightedSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_highlightedSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_pressedSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_pressedSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_disabledSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_disabledSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_selectedSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_selectedSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::SpriteSwapTransitionSO::get_selectedAndHighlightedSprite() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { "get_selectedAndHighlightedSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void GlobalNamespace::SpriteSwapTransitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpriteSwapTransitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpriteSwapTransitionSO* GlobalNamespace::SpriteSwapTransitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpriteSwapTransitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpriteSwapTransitionSO::SpriteSwapTransitionSO() {}
