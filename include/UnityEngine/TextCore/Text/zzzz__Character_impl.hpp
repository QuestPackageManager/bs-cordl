#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/Character.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Character_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)()>(&::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc31a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)(uint32_t, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Glyph*)>(
    &::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6bc31bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(),
                            { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::Character::*)(uint32_t, uint32_t)>(&::UnityEngine::TextCore::Text::Character::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6bc31e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::Character::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TextCore::Text::Character::_ctor(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(),
                          { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, fontAsset, glyph);
}
inline void UnityEngine::TextCore::Text::Character::_ctor(uint32_t unicode, uint32_t glyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, glyphIndex);
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::Character::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::Character*>());
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::Character::New_ctor(uint32_t unicode, ::UnityEngine::TextCore::Text::FontAsset* fontAsset,
                                                                                                  ::UnityEngine::TextCore::Glyph* glyph) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::Character*>(unicode, fontAsset, glyph));
}
inline ::UnityEngine::TextCore::Text::Character* UnityEngine::TextCore::Text::Character::New_ctor(uint32_t unicode, uint32_t glyphIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TextCore::Text::Character*>(unicode, glyphIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::Character::Character() {}
