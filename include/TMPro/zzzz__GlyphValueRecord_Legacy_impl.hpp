#pragma once
// IWYU pragma private; include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "TMPro/zzzz__GlyphValueRecord_Legacy_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
//  Writing Method size for method: ::TMPro::GlyphValueRecord_Legacy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::GlyphValueRecord_Legacy::*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord)>(&::TMPro::GlyphValueRecord_Legacy::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69572f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphValueRecord_Legacy>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::GlyphValueRecord_Legacy.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::GlyphValueRecord_Legacy (*)(::TMPro::GlyphValueRecord_Legacy, ::TMPro::GlyphValueRecord_Legacy)>(
    &::TMPro::GlyphValueRecord_Legacy::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69572fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphValueRecord_Legacy>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>() } })));
    return ___internal_method;
  }
};
inline void TMPro::GlyphValueRecord_Legacy::_ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphValueRecord_Legacy>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, valueRecord);
}
inline ::TMPro::GlyphValueRecord_Legacy TMPro::GlyphValueRecord_Legacy::op_Addition(::TMPro::GlyphValueRecord_Legacy a, ::TMPro::GlyphValueRecord_Legacy b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::GlyphValueRecord_Legacy>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>(), ::i2c::type_of<::TMPro::GlyphValueRecord_Legacy>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::GlyphValueRecord_Legacy>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) noexcept {
  this->xPlacement = xPlacement;
  this->yPlacement = yPlacement;
  this->xAdvance = xAdvance;
  this->yAdvance = yAdvance;
}
// Ctor Parameters []
constexpr ::TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy() {}
