#pragma once
// IWYU pragma private; include "System/Xml/BinXmlSqlDecimal.hpp"
#include "System/Xml/zzzz__BinXmlSqlDecimal_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.get_IsPositive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::BinXmlSqlDecimal::*)()>(&::System::Xml::BinXmlSqlDecimal::get_IsPositive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x618dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "get_IsPositive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinXmlSqlDecimal::*)(::ArrayW<uint8_t>, int32_t, bool)>(&::System::Xml::BinXmlSqlDecimal::_ctor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x618ded0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.UIntFromByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Xml::BinXmlSqlDecimal::UIntFromByteArray)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x618e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "UIntFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.MpDiv1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>, uint32_t, ::by_ref<uint32_t>)>(&::System::Xml::BinXmlSqlDecimal::MpDiv1)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x618e3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(),
                            { "MpDiv1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.MpNormalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint32_t>, ::by_ref<int32_t>)>(&::System::Xml::BinXmlSqlDecimal::MpNormalize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x618e484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "MpNormalize", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.ChFromDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::System::Xml::BinXmlSqlDecimal::ChFromDigit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618e4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "ChFromDigit", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::BinXmlSqlDecimal::*)()>(&::System::Xml::BinXmlSqlDecimal::ToDecimal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x618e4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "ToDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.TrimTrailingZeros
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinXmlSqlDecimal::*)()>(&::System::Xml::BinXmlSqlDecimal::TrimTrailingZeros)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x618e1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "TrimTrailingZeros", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlDecimal.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::BinXmlSqlDecimal::*)()>(&::System::Xml::BinXmlSqlDecimal::ToString)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x618e610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { ::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Xml::BinXmlSqlDecimal::setStaticF_NUMERIC_MAX_PRECISION(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "NUMERIC_MAX_PRECISION", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Xml::BinXmlSqlDecimal::getStaticF_NUMERIC_MAX_PRECISION() {
  return ::cordl_internals::getStaticField<uint8_t, "NUMERIC_MAX_PRECISION", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_MaxPrecision(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "MaxPrecision", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Xml::BinXmlSqlDecimal::getStaticF_MaxPrecision() {
  return ::cordl_internals::getStaticField<uint8_t, "MaxPrecision", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_MaxScale(uint8_t value) {
  ::cordl_internals::setStaticField<uint8_t, "MaxScale", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint8_t>(value));
}
inline uint8_t System::Xml::BinXmlSqlDecimal::getStaticF_MaxScale() {
  return ::cordl_internals::getStaticField<uint8_t, "MaxScale", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_cNumeMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "x_cNumeMax", ::System::Xml::BinXmlSqlDecimal>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::BinXmlSqlDecimal::getStaticF_x_cNumeMax() {
  return ::cordl_internals::getStaticField<int32_t, "x_cNumeMax", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_lInt32Base(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "x_lInt32Base", ::System::Xml::BinXmlSqlDecimal>(std::forward<int64_t>(value));
}
inline int64_t System::Xml::BinXmlSqlDecimal::getStaticF_x_lInt32Base() {
  return ::cordl_internals::getStaticField<int64_t, "x_lInt32Base", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_ulInt32Base(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "x_ulInt32Base", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Xml::BinXmlSqlDecimal::getStaticF_x_ulInt32Base() {
  return ::cordl_internals::getStaticField<uint64_t, "x_ulInt32Base", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_ulInt32BaseForMod(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "x_ulInt32BaseForMod", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Xml::BinXmlSqlDecimal::getStaticF_x_ulInt32BaseForMod() {
  return ::cordl_internals::getStaticField<uint64_t, "x_ulInt32BaseForMod", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_llMax(uint64_t value) {
  ::cordl_internals::setStaticField<uint64_t, "x_llMax", ::System::Xml::BinXmlSqlDecimal>(std::forward<uint64_t>(value));
}
inline uint64_t System::Xml::BinXmlSqlDecimal::getStaticF_x_llMax() {
  return ::cordl_internals::getStaticField<uint64_t, "x_llMax", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_DUINT_BASE(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DUINT_BASE", ::System::Xml::BinXmlSqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Xml::BinXmlSqlDecimal::getStaticF_DUINT_BASE() {
  return ::cordl_internals::getStaticField<double_t, "DUINT_BASE", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_DUINT_BASE2(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DUINT_BASE2", ::System::Xml::BinXmlSqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Xml::BinXmlSqlDecimal::getStaticF_DUINT_BASE2() {
  return ::cordl_internals::getStaticField<double_t, "DUINT_BASE2", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_DUINT_BASE3(double_t value) {
  ::cordl_internals::setStaticField<double_t, "DUINT_BASE3", ::System::Xml::BinXmlSqlDecimal>(std::forward<double_t>(value));
}
inline double_t System::Xml::BinXmlSqlDecimal::getStaticF_DUINT_BASE3() {
  return ::cordl_internals::getStaticField<double_t, "DUINT_BASE3", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_x_rgulShiftBase(::ArrayW<uint32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint32_t>, "x_rgulShiftBase", ::System::Xml::BinXmlSqlDecimal>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Xml::BinXmlSqlDecimal::getStaticF_x_rgulShiftBase() {
  return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "x_rgulShiftBase", ::System::Xml::BinXmlSqlDecimal>();
}
inline void System::Xml::BinXmlSqlDecimal::setStaticF_rgCLenFromPrec(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "rgCLenFromPrec", ::System::Xml::BinXmlSqlDecimal>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> System::Xml::BinXmlSqlDecimal::getStaticF_rgCLenFromPrec() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "rgCLenFromPrec", ::System::Xml::BinXmlSqlDecimal>();
}
inline bool System::Xml::BinXmlSqlDecimal::get_IsPositive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "get_IsPositive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void System::Xml::BinXmlSqlDecimal::_ctor(::ArrayW<uint8_t> data, int32_t offset, bool trim) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, offset, trim);
}
inline uint32_t System::Xml::BinXmlSqlDecimal::UIntFromByteArray(::ArrayW<uint8_t> data, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "UIntFromByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, data, offset);
}
inline void System::Xml::BinXmlSqlDecimal::MpDiv1(::ArrayW<uint32_t> rgulU, ::by_ref<int32_t> ciulU, uint32_t iulD, ::by_ref<uint32_t> iulR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(),
                          { "MpDiv1", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulU, ciulU, iulD, iulR);
}
inline void System::Xml::BinXmlSqlDecimal::MpNormalize(::ArrayW<uint32_t> rgulU, ::by_ref<int32_t> ciulU) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "MpNormalize", {}, { ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rgulU, ciulU);
}
inline char16_t System::Xml::BinXmlSqlDecimal::ChFromDigit(uint32_t uiDigit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "ChFromDigit", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, uiDigit);
}
inline ::System::Decimal System::Xml::BinXmlSqlDecimal::ToDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "ToDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method);
}
inline void System::Xml::BinXmlSqlDecimal::TrimTrailingZeros() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), { "TrimTrailingZeros", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW System::Xml::BinXmlSqlDecimal::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinXmlSqlDecimal>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_bLen", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bPrec", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_bScale", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bSign", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_data1", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_data2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_data3", ty: "uint32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_data4", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::BinXmlSqlDecimal::BinXmlSqlDecimal(uint8_t m_bLen, uint8_t m_bPrec, uint8_t m_bScale, uint8_t m_bSign, uint32_t m_data1, uint32_t m_data2, uint32_t m_data3,
                                                            uint32_t m_data4) noexcept {
  this->m_bLen = m_bLen;
  this->m_bPrec = m_bPrec;
  this->m_bScale = m_bScale;
  this->m_bSign = m_bSign;
  this->m_data1 = m_data1;
  this->m_data2 = m_data2;
  this->m_data3 = m_data3;
  this->m_data4 = m_data4;
}
// Ctor Parameters []
constexpr ::System::Xml::BinXmlSqlDecimal::BinXmlSqlDecimal() {}
