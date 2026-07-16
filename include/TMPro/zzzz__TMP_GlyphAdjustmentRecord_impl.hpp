#pragma once
// IWYU pragma private; include "TMPro/TMP_GlyphAdjustmentRecord.hpp"
#include "TMPro/zzzz__TMP_GlyphValueRecord_impl.hpp"
#include "TMPro/zzzz__TMP_GlyphAdjustmentRecord_def.hpp"
#include "TMPro/zzzz__TMP_GlyphValueRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord.get_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::TMP_GlyphAdjustmentRecord::*)()>(&::TMPro::TMP_GlyphAdjustmentRecord::get_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6959708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "get_glyphIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord.set_glyphIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphAdjustmentRecord::*)(uint32_t)>(&::TMPro::TMP_GlyphAdjustmentRecord::set_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6959710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord.get_glyphValueRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TMP_GlyphValueRecord (::TMPro::TMP_GlyphAdjustmentRecord::*)()>(&::TMPro::TMP_GlyphAdjustmentRecord::get_glyphValueRecord)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6959718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "get_glyphValueRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord.set_glyphValueRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphAdjustmentRecord::*)(::TMPro::TMP_GlyphValueRecord)>(&::TMPro::TMP_GlyphAdjustmentRecord::set_glyphValueRecord)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6959724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "set_glyphValueRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphValueRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphAdjustmentRecord::*)(uint32_t, ::TMPro::TMP_GlyphValueRecord)>(&::TMPro::TMP_GlyphAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6959730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_GlyphValueRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_GlyphAdjustmentRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TMP_GlyphAdjustmentRecord::*)(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)>(
    &::TMPro::TMP_GlyphAdjustmentRecord::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6959740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
    return ___internal_method;
  }
};
inline uint32_t TMPro::TMP_GlyphAdjustmentRecord::get_glyphIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "get_glyphIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::TMP_GlyphAdjustmentRecord::set_glyphIndex(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "set_glyphIndex", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::TMPro::TMP_GlyphValueRecord TMPro::TMP_GlyphAdjustmentRecord::get_glyphValueRecord() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "get_glyphValueRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_GlyphValueRecord>(*this, ___internal_method);
}
inline void TMPro::TMP_GlyphAdjustmentRecord::set_glyphValueRecord(::TMPro::TMP_GlyphValueRecord value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { "set_glyphValueRecord", {}, { ::i2c::type_of<::TMPro::TMP_GlyphValueRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void TMPro::TMP_GlyphAdjustmentRecord::_ctor(uint32_t glyphIndex, ::TMPro::TMP_GlyphValueRecord glyphValueRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { ".ctor", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::TMPro::TMP_GlyphValueRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, glyphIndex, glyphValueRecord);
}
inline void TMPro::TMP_GlyphAdjustmentRecord::_ctor(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord adjustmentRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_GlyphAdjustmentRecord>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, adjustmentRecord);
}
// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GlyphValueRecord", ty: "::TMPro::TMP_GlyphValueRecord", modifiers: "",
// def_value: Some("{}") }]
constexpr ::TMPro::TMP_GlyphAdjustmentRecord::TMP_GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::TMPro::TMP_GlyphValueRecord m_GlyphValueRecord) noexcept {
  this->m_GlyphIndex = m_GlyphIndex;
  this->m_GlyphValueRecord = m_GlyphValueRecord;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_GlyphAdjustmentRecord::TMP_GlyphAdjustmentRecord() {}
