#pragma once
// IWYU pragma private; include "System/Xml/XmlCachedStream.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Xml/zzzz__XmlCachedStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlCachedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlCachedStream::*)(::System::Uri*, ::System::IO::Stream*)>(&::System::Xml::XmlCachedStream::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x62dc520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlCachedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Xml::XmlCachedStream::__cordl_internal_get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::System::Uri* const& System::Xml::XmlCachedStream::__cordl_internal_get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Xml::XmlCachedStream::__cordl_internal_set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uri = value;
}
inline void System::Xml::XmlCachedStream::_ctor(::System::Uri* uri, ::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlCachedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, stream);
}
inline ::System::Xml::XmlCachedStream* System::Xml::XmlCachedStream::New_ctor(::System::Uri* uri, ::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlCachedStream*>(uri, stream));
}
// Ctor Parameters []
constexpr ::System::Xml::XmlCachedStream::XmlCachedStream() {}
