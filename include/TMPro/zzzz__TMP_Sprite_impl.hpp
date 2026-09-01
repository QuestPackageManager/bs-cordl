#pragma once
// IWYU pragma private; include "TMPro\TMP_Sprite.hpp"
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_Sprite_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Sprite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Sprite::*)()>(&::TMPro::TMP_Sprite::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x699f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Sprite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::TMP_Sprite::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& TMPro::TMP_Sprite::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void TMPro::TMP_Sprite::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr int32_t& TMPro::TMP_Sprite::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr int32_t const& TMPro::TMP_Sprite::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
constexpr void TMPro::TMP_Sprite::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
constexpr int32_t& TMPro::TMP_Sprite::__cordl_internal_get_unicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr int32_t const& TMPro::TMP_Sprite::__cordl_internal_get_unicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unicode;
}
constexpr void TMPro::TMP_Sprite::__cordl_internal_set_unicode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unicode = value;
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Sprite::__cordl_internal_get_pivot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Sprite::__cordl_internal_get_pivot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pivot;
}
constexpr void TMPro::TMP_Sprite::__cordl_internal_set_pivot(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pivot = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& TMPro::TMP_Sprite::__cordl_internal_get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& TMPro::TMP_Sprite::__cordl_internal_get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void TMPro::TMP_Sprite::__cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sprite = value;
}
inline void TMPro::TMP_Sprite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Sprite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_Sprite* TMPro::TMP_Sprite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Sprite*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Sprite::TMP_Sprite() {}
