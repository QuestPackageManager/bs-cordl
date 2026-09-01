#pragma once
// IWYU pragma private; include "TMPro\MultipleSubstitutionRecord.hpp"
#include "TMPro/zzzz__MultipleSubstitutionRecord_def.hpp"
//  Writing Method size for method: ::TMPro::MultipleSubstitutionRecord.get_targetGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::MultipleSubstitutionRecord::*)()>(&::TMPro::MultipleSubstitutionRecord::get_targetGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "get_targetGlyphID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MultipleSubstitutionRecord.set_targetGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MultipleSubstitutionRecord::*)(uint32_t)>(&::TMPro::MultipleSubstitutionRecord::set_targetGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "set_targetGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MultipleSubstitutionRecord.get_substituteGlyphIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::TMPro::MultipleSubstitutionRecord::*)()>(&::TMPro::MultipleSubstitutionRecord::get_substituteGlyphIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "get_substituteGlyphIDs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::MultipleSubstitutionRecord.set_substituteGlyphIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::MultipleSubstitutionRecord::*)(::ArrayW<uint32_t>)>(&::TMPro::MultipleSubstitutionRecord::set_substituteGlyphIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6937968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "set_substituteGlyphIDs", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
inline uint32_t TMPro::MultipleSubstitutionRecord::get_targetGlyphID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "get_targetGlyphID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::MultipleSubstitutionRecord::set_targetGlyphID(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "set_targetGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<uint32_t> TMPro::MultipleSubstitutionRecord::get_substituteGlyphIDs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "get_substituteGlyphIDs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline void TMPro::MultipleSubstitutionRecord::set_substituteGlyphIDs(::ArrayW<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::MultipleSubstitutionRecord>(), { "set_substituteGlyphIDs", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_TargetGlyphID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SubstituteGlyphIDs", ty: "::ArrayW<uint32_t>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::TMPro::MultipleSubstitutionRecord::MultipleSubstitutionRecord(uint32_t m_TargetGlyphID, ::ArrayW<uint32_t> m_SubstituteGlyphIDs) noexcept {
  this->m_TargetGlyphID = m_TargetGlyphID;
  this->m_SubstituteGlyphIDs = m_SubstituteGlyphIDs;
}
// Ctor Parameters []
constexpr ::TMPro::MultipleSubstitutionRecord::MultipleSubstitutionRecord() {}
