#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\SpriteGlyph.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteGlyph_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteGlyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::SpriteGlyph::*)()>(&::UnityEngine::TextCore::Text::SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c01304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteGlyph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::TextCore::Text::SpriteGlyph::__cordl_internal_get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::TextCore::Text::SpriteGlyph::__cordl_internal_get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void UnityEngine::TextCore::Text::SpriteGlyph::__cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sprite = value;
}
inline void UnityEngine::TextCore::Text::SpriteGlyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::SpriteGlyph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::SpriteGlyph* UnityEngine::TextCore::Text::SpriteGlyph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::SpriteGlyph*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::SpriteGlyph::SpriteGlyph() {}
