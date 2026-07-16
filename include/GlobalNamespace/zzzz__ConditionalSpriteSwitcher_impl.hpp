#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalSpriteSwitcher.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalSpriteSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.get_falseSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::ConditionalSpriteSwitcher::*)()>(
    &::GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ff674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "get_falseSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.set_falseSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalSpriteSwitcher::*)(::UnityEngine::Sprite*)>(
    &::GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ff67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "set_falseSprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.get_trueSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::ConditionalSpriteSwitcher::*)()>(
    &::GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ff684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "get_trueSprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.set_trueSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalSpriteSwitcher::*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ff68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "set_trueSprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&::GlobalNamespace::ConditionalSpriteSwitcher::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ff694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&::GlobalNamespace::ConditionalSpriteSwitcher::Apply)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58ff698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "Apply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalSpriteSwitcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalSpriteSwitcher::*)()>(&::GlobalNamespace::ConditionalSpriteSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ff738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__sprite0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite0;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__sprite0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite0;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__sprite0(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sprite0 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__material0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material0;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__material0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material0;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__material0(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material0 = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__sprite1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite1;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__sprite1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sprite1;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__sprite1(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sprite1 = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__material1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material1;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__material1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material1;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__material1(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material1 = value;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__spriteRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_get__spriteRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spriteRenderer;
}
constexpr void GlobalNamespace::ConditionalSpriteSwitcher::__cordl_internal_set__spriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spriteRenderer = value;
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::ConditionalSpriteSwitcher::get_falseSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "get_falseSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalSpriteSwitcher::set_falseSprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "set_falseSprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::ConditionalSpriteSwitcher::get_trueSprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "get_trueSprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalSpriteSwitcher::set_trueSprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "set_trueSprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConditionalSpriteSwitcher::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalSpriteSwitcher::Apply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { "Apply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalSpriteSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalSpriteSwitcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalSpriteSwitcher* GlobalNamespace::ConditionalSpriteSwitcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConditionalSpriteSwitcher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalSpriteSwitcher::ConditionalSpriteSwitcher() {}
