#pragma once
// IWYU pragma private; include "System\Xml\XmlRawWriterBase64Encoder.hpp"
#include "System/Xml/zzzz__Base64Encoder_impl.hpp"
#include "System/Xml/zzzz__XmlRawWriterBase64Encoder_def.hpp"
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::System::Xml::XmlRawWriter*)>(&::System::Xml::XmlRawWriterBase64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6192b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlRawWriterBase64Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlRawWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlRawWriterBase64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlRawWriterBase64Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::Xml::XmlRawWriterBase64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6192b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlRawWriterBase64Encoder*>(), { ::i2c::class_of<::System::Xml::XmlRawWriterBase64Encoder*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlRawWriter*& System::Xml::XmlRawWriterBase64Encoder::__cordl_internal_get_rawWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawWriter;
}
constexpr ::System::Xml::XmlRawWriter* const& System::Xml::XmlRawWriterBase64Encoder::__cordl_internal_get_rawWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawWriter;
}
constexpr void System::Xml::XmlRawWriterBase64Encoder::__cordl_internal_set_rawWriter(::System::Xml::XmlRawWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawWriter = value;
}
inline void System::Xml::XmlRawWriterBase64Encoder::_ctor(::System::Xml::XmlRawWriter* rawWriter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlRawWriterBase64Encoder*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlRawWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawWriter);
}
inline void System::Xml::XmlRawWriterBase64Encoder::WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlRawWriterBase64Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, index, count);
}
inline ::System::Xml::XmlRawWriterBase64Encoder* System::Xml::XmlRawWriterBase64Encoder::New_ctor(::System::Xml::XmlRawWriter* rawWriter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlRawWriterBase64Encoder*>(rawWriter));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlRawWriterBase64Encoder::XmlRawWriterBase64Encoder() {}
