#pragma once
// IWYU pragma private; include "System/Xml/BinXmlSqlMoney.hpp"
#include "System/Xml/zzzz__BinXmlSqlMoney_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::BinXmlSqlMoney._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinXmlSqlMoney::*)(int32_t)>(&::System::Xml::BinXmlSqlMoney::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x618ea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlMoney._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::BinXmlSqlMoney::*)(int64_t)>(&::System::Xml::BinXmlSqlMoney::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618ea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlMoney.ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Xml::BinXmlSqlMoney::*)()>(&::System::Xml::BinXmlSqlMoney::ToDecimal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x618ea20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { "ToDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinXmlSqlMoney.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::BinXmlSqlMoney::*)()>(&::System::Xml::BinXmlSqlMoney::ToString)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x618ea3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { ::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), 3 }));
    return ___internal_method;
  }
};
inline void System::Xml::BinXmlSqlMoney::_ctor(int32_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline void System::Xml::BinXmlSqlMoney::_ctor(int64_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v);
}
inline ::System::Decimal System::Xml::BinXmlSqlMoney::ToDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), { "ToDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method);
}
inline ::StringW System::Xml::BinXmlSqlMoney::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::BinXmlSqlMoney>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "data", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::BinXmlSqlMoney::BinXmlSqlMoney(int64_t data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::System::Xml::BinXmlSqlMoney::BinXmlSqlMoney() {}
