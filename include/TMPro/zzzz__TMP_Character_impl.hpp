#pragma once
// IWYU pragma private; include "TMPro\TMP_Character.hpp"
#include "TMPro/zzzz__TMP_TextElement_impl.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Character::*)()>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6949f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, ::UnityEngine::TextCore::Glyph*)>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6949fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*)>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6949fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(),
                                                { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, uint32_t)>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6949ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_Character::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, glyph);
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(),
                                              { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_FontAsset*>(), ::i2c::type_of<::UnityEngine::TextCore::Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, fontAsset, glyph);
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, uint32_t glyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Character*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, glyphIndex);
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Character*>());
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Character*>(unicode, glyph));
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Character*>(unicode, fontAsset, glyph));
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, uint32_t glyphIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Character*>(unicode, glyphIndex));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Character::TMP_Character() {}
