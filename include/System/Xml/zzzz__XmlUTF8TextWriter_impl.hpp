#pragma once
// IWYU pragma private; include "System\Xml\XmlUTF8TextWriter.hpp"
#include "System/Xml/zzzz__XmlBaseWriter_impl.hpp"
#include "System/Xml/zzzz__XmlUTF8TextWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Xml/zzzz__XmlUTF8NodeWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlUTF8TextWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(
    &::System::Xml::XmlUTF8TextWriter::SetOutput)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x612d050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextWriter*>(),
                                                             { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlUTF8TextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlUTF8TextWriter::*)()>(&::System::Xml::XmlUTF8TextWriter::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x612d2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlUTF8NodeWriter*& System::Xml::XmlUTF8TextWriter::__cordl_internal_get_writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr ::System::Xml::XmlUTF8NodeWriter* const& System::Xml::XmlUTF8TextWriter::__cordl_internal_get_writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writer;
}
constexpr void System::Xml::XmlUTF8TextWriter::__cordl_internal_set_writer(::System::Xml::XmlUTF8NodeWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writer = value;
}
inline void System::Xml::XmlUTF8TextWriter::SetOutput(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool ownsStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextWriter*>(),
                                                           { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, ownsStream);
}
inline void System::Xml::XmlUTF8TextWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlUTF8TextWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlUTF8TextWriter* System::Xml::XmlUTF8TextWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlUTF8TextWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlUTF8TextWriter::XmlUTF8TextWriter() {}
