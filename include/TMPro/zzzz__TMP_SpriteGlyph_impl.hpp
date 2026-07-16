#pragma once
// IWYU pragma private; include "TMPro/TMP_SpriteGlyph.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
#include "TMPro/zzzz__TMP_SpriteGlyph_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphMetrics_def.hpp"
#include "UnityEngine/TextCore/zzzz__GlyphRect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SpriteGlyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteGlyph::*)()>(&::TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x699c798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteGlyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteGlyph::*)(uint32_t, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, float_t, int32_t)>(
    &::TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x699c984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor",
                                                                            {},
                                                                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                              ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteGlyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteGlyph::*)(uint32_t, ::UnityEngine::TextCore::GlyphMetrics, ::UnityEngine::TextCore::GlyphRect, float_t, int32_t,
                                                                                          ::UnityEngine::Sprite*)>(&::TMPro::TMP_SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x699c9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                                                               ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& TMPro::TMP_SpriteGlyph::__cordl_internal_get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& TMPro::TMP_SpriteGlyph::__cordl_internal_get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void TMPro::TMP_SpriteGlyph::__cordl_internal_set_sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sprite = value;
}
inline void TMPro::TMP_SpriteGlyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor",
                                                                          {},
                                                                          { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                            ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, metrics, glyphRect, scale, atlasIndex);
}
inline void TMPro::TMP_SpriteGlyph::_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex,
                                          ::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteGlyph*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::GlyphMetrics>(),
                                                                                                             ::i2c::type_of<::UnityEngine::TextCore::GlyphRect>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, metrics, glyphRect, scale, atlasIndex, sprite);
}
inline ::TMPro::TMP_SpriteGlyph* TMPro::TMP_SpriteGlyph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteGlyph*>());
}
inline ::TMPro::TMP_SpriteGlyph* TMPro::TMP_SpriteGlyph::New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale,
                                                                  int32_t atlasIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteGlyph*>(index, metrics, glyphRect, scale, atlasIndex));
}
inline ::TMPro::TMP_SpriteGlyph* TMPro::TMP_SpriteGlyph::New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale,
                                                                  int32_t atlasIndex, ::UnityEngine::Sprite* sprite) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteGlyph*>(index, metrics, glyphRect, scale, atlasIndex, sprite));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SpriteGlyph::TMP_SpriteGlyph() {}
