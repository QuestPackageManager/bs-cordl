#pragma once
// IWYU pragma private; include "TMPro/TMP_Glyph.hpp"
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "TMPro/zzzz__TMP_Glyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Glyph.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_Glyph* (*)(::TMPro::TMP_Glyph*)>(&::TMPro::TMP_Glyph::Clone)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x695721c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Glyph*>(), { "Clone", {}, { ::i2c::type_of<::TMPro::TMP_Glyph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Glyph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_Glyph::*)()>(&::TMPro::TMP_Glyph::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x695728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Glyph*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::TMPro::TMP_Glyph* TMPro::TMP_Glyph::Clone(::TMPro::TMP_Glyph* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Glyph*>(), { "Clone", {}, { ::i2c::type_of<::TMPro::TMP_Glyph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Glyph*>(nullptr, ___internal_method, source);
}
inline void TMPro::TMP_Glyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Glyph*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TMP_Glyph* TMPro::TMP_Glyph::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_Glyph*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Glyph::TMP_Glyph() {}
