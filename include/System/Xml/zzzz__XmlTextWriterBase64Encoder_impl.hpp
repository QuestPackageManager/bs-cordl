#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriterBase64Encoder.hpp"
#include "System/Xml/zzzz__Base64Encoder_impl.hpp"
#include "System/Xml/zzzz__XmlTextWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlTextEncoder_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlTextWriterBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlTextWriterBase64Encoder::*)(::System::Xml::XmlTextEncoder*)>(&::System::Xml::XmlTextWriterBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x618d380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlTextWriterBase64Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlTextEncoder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlTextWriterBase64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlTextWriterBase64Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlTextWriterBase64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x618d3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlTextWriterBase64Encoder*>(), { ::i2c::class_of<::System::Xml::XmlTextWriterBase64Encoder*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlTextEncoder*& System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_get_xmlTextEncoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTextEncoder;
}
constexpr ::System::Xml::XmlTextEncoder* const& System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_get_xmlTextEncoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTextEncoder;
}
constexpr void System::Xml::XmlTextWriterBase64Encoder::__cordl_internal_set_xmlTextEncoder(::System::Xml::XmlTextEncoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlTextEncoder = value;
}
inline void System::Xml::XmlTextWriterBase64Encoder::_ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlTextWriterBase64Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlTextEncoder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlTextEncoder);
}
inline void System::Xml::XmlTextWriterBase64Encoder::WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlTextWriterBase64Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, index, count);
}
inline ::System::Xml::XmlTextWriterBase64Encoder* System::Xml::XmlTextWriterBase64Encoder::New_ctor(::System::Xml::XmlTextEncoder* xmlTextEncoder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlTextWriterBase64Encoder*>(xmlTextEncoder));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlTextWriterBase64Encoder::XmlTextWriterBase64Encoder() {}
