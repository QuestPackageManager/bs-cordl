#pragma once
// IWYU pragma private; include "TMPro\TMP_SpriteCharacter.hpp"
#include "TMPro/zzzz__TMP_TextElement_impl.hpp"
#include "TMPro/zzzz__TMP_SpriteCharacter_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteGlyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::TMPro::TMP_SpriteCharacter::*)()>(&::TMPro::TMP_SpriteCharacter::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a2114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteCharacter::*)(::StringW)>(&::TMPro::TMP_SpriteCharacter::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69a211c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteCharacter::*)()>(&::TMPro::TMP_SpriteCharacter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69a1fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteCharacter::*)(uint32_t, ::TMPro::TMP_SpriteGlyph*)>(&::TMPro::TMP_SpriteCharacter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69a2128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteCharacter::*)(uint32_t, ::TMPro::TMP_SpriteAsset*, ::TMPro::TMP_SpriteGlyph*)>(&::TMPro::TMP_SpriteCharacter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x69a2154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_SpriteCharacter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_SpriteCharacter::*)(uint32_t, uint32_t)>(&::TMPro::TMP_SpriteCharacter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x69a2180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& TMPro::TMP_SpriteCharacter::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& TMPro::TMP_SpriteCharacter::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void TMPro::TMP_SpriteCharacter::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
inline ::StringW TMPro::TMP_SpriteCharacter::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteCharacter::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void TMPro::TMP_SpriteCharacter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TMP_SpriteCharacter::_ctor(uint32_t unicode, ::TMPro::TMP_SpriteGlyph* glyph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, glyph);
}
inline void TMPro::TMP_SpriteCharacter::_ctor(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::TMPro::TMP_SpriteGlyph* glyph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_SpriteAsset*>(), ::i2c::type_of<::TMPro::TMP_SpriteGlyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, spriteAsset, glyph);
}
inline void TMPro::TMP_SpriteCharacter::_ctor(uint32_t unicode, uint32_t glyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_SpriteCharacter*>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unicode, glyphIndex);
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_SpriteCharacter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteCharacter*>());
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_SpriteCharacter::New_ctor(uint32_t unicode, ::TMPro::TMP_SpriteGlyph* glyph) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteCharacter*>(unicode, glyph));
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_SpriteCharacter::New_ctor(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, ::TMPro::TMP_SpriteGlyph* glyph) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteCharacter*>(unicode, spriteAsset, glyph));
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_SpriteCharacter::New_ctor(uint32_t unicode, uint32_t glyphIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_SpriteCharacter*>(unicode, glyphIndex));
}
// Ctor Parameters []
constexpr ::TMPro::TMP_SpriteCharacter::TMP_SpriteCharacter() {}
