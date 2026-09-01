#pragma once
// IWYU pragma private; include "Mono\Xml\SmallXmlParserException.hpp"
#include "System/zzzz__SystemException_impl.hpp"
#include "Mono/Xml/zzzz__SmallXmlParserException_def.hpp"
//  Writing Method size for method: ::Mono::Xml::SmallXmlParserException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Xml::SmallXmlParserException::*)(::StringW, int32_t, int32_t)>(&::Mono::Xml::SmallXmlParserException::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5aaeac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SmallXmlParserException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Mono::Xml::SmallXmlParserException::__cordl_internal_get_line() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr int32_t const& Mono::Xml::SmallXmlParserException::__cordl_internal_get_line() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___line;
}
constexpr void Mono::Xml::SmallXmlParserException::__cordl_internal_set_line(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___line = value;
}
constexpr int32_t& Mono::Xml::SmallXmlParserException::__cordl_internal_get_column() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr int32_t const& Mono::Xml::SmallXmlParserException::__cordl_internal_get_column() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___column;
}
constexpr void Mono::Xml::SmallXmlParserException::__cordl_internal_set_column(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___column = value;
}
inline void Mono::Xml::SmallXmlParserException::_ctor(::StringW msg, int32_t line, int32_t column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Xml::SmallXmlParserException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, line, column);
}
inline ::Mono::Xml::SmallXmlParserException* Mono::Xml::SmallXmlParserException::New_ctor(::StringW msg, int32_t line, int32_t column) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Xml::SmallXmlParserException*>(msg, line, column));
}
// Ctor Parameters []
constexpr ::Mono::Xml::SmallXmlParserException::SmallXmlParserException() {}
