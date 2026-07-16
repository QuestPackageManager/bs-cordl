#pragma once
// IWYU pragma private; include "TMPro/LigatureSubstitutionRecord.hpp"
#include "TMPro/zzzz__LigatureSubstitutionRecord_def.hpp"
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.get_componentGlyphIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint32_t> (::TMPro::LigatureSubstitutionRecord::*)()>(&::TMPro::LigatureSubstitutionRecord::get_componentGlyphIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "get_componentGlyphIDs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.set_componentGlyphIDs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::LigatureSubstitutionRecord::*)(::ArrayW<uint32_t>)>(&::TMPro::LigatureSubstitutionRecord::set_componentGlyphIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "set_componentGlyphIDs", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.get_ligatureGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::TMPro::LigatureSubstitutionRecord::*)()>(&::TMPro::LigatureSubstitutionRecord::get_ligatureGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "get_ligatureGlyphID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.set_ligatureGlyphID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::LigatureSubstitutionRecord::*)(uint32_t)>(&::TMPro::LigatureSubstitutionRecord::set_ligatureGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6932170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "set_ligatureGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::LigatureSubstitutionRecord, ::TMPro::LigatureSubstitutionRecord)>(&::TMPro::LigatureSubstitutionRecord::op_Equality)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6932178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>(), ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::LigatureSubstitutionRecord.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::LigatureSubstitutionRecord, ::TMPro::LigatureSubstitutionRecord)>(&::TMPro::LigatureSubstitutionRecord::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69321f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>(), ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint32_t> TMPro::LigatureSubstitutionRecord::get_componentGlyphIDs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "get_componentGlyphIDs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t>>(*this, ___internal_method);
}
inline void TMPro::LigatureSubstitutionRecord::set_componentGlyphIDs(::ArrayW<uint32_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "set_componentGlyphIDs", {}, { ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t TMPro::LigatureSubstitutionRecord::get_ligatureGlyphID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "get_ligatureGlyphID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void TMPro::LigatureSubstitutionRecord::set_ligatureGlyphID(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(), { "set_ligatureGlyphID", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool TMPro::LigatureSubstitutionRecord::op_Equality(::TMPro::LigatureSubstitutionRecord lhs, ::TMPro::LigatureSubstitutionRecord rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>(), ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool TMPro::LigatureSubstitutionRecord::op_Inequality(::TMPro::LigatureSubstitutionRecord lhs, ::TMPro::LigatureSubstitutionRecord rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::LigatureSubstitutionRecord>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>(), ::i2c::type_of<::TMPro::LigatureSubstitutionRecord>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::TMPro::LigatureSubstitutionRecord::LigatureSubstitutionRecord(::ArrayW<uint32_t> m_ComponentGlyphIDs, uint32_t m_LigatureGlyphID) noexcept {
  this->m_ComponentGlyphIDs = m_ComponentGlyphIDs;
  this->m_LigatureGlyphID = m_LigatureGlyphID;
}
// Ctor Parameters []
constexpr ::TMPro::LigatureSubstitutionRecord::LigatureSubstitutionRecord() {}
