#pragma once
// IWYU pragma private; include "TMPro\GlyphPairKey.hpp"
#include "TMPro/zzzz__GlyphPairKey_def.hpp"
#include "TMPro/zzzz__TMP_GlyphPairAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::GlyphPairKey::*)(uint32_t, uint32_t)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x695f018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphPairKey>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::GlyphPairKey::*)(::TMPro::TMP_GlyphPairAdjustmentRecord*)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x695f028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphPairKey>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>() } })));
    return ___internal_method;
  }
};
inline void TMPro::GlyphPairKey::_ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphPairKey>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, firstGlyphIndex, secondGlyphIndex);
}
inline void TMPro::GlyphPairKey::_ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphPairKey>(), { ".ctor", {}, { ::i2c::type_of<::TMPro::TMP_GlyphPairAdjustmentRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, record);
}
// Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::GlyphPairKey::GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept {
  this->firstGlyphIndex = firstGlyphIndex;
  this->secondGlyphIndex = secondGlyphIndex;
  this->key = key;
}
// Ctor Parameters []
constexpr ::TMPro::GlyphPairKey::GlyphPairKey() {}
