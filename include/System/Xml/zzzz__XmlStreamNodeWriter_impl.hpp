#pragma once
// IWYU pragma private; include "System\Xml\XmlStreamNodeWriter.hpp"
#include "System/Xml/zzzz__XmlNodeWriter_impl.hpp"
#include "System/Xml/zzzz__XmlStreamNodeWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__UTF8Encoding_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x612957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.SetOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(::System::IO::Stream*, bool, ::System::Text::Encoding*)>(
    &::System::Xml::XmlStreamNodeWriter::SetOutput)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x612960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                                             { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::get_Position)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6129624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Xml::XmlStreamNodeWriter::*)(int32_t, ::by_ref<int32_t>)>(&::System::Xml::XmlStreamNodeWriter::GetBuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6129658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.Advance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(int32_t)>(&::System::Xml::XmlStreamNodeWriter::Advance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61296a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.EnsureByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::EnsureByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61296b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "EnsureByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(uint8_t)>(&::System::Xml::XmlStreamNodeWriter::WriteByte)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61296d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(char16_t)>(&::System::Xml::XmlStreamNodeWriter::WriteByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6129740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteByte", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(uint8_t, uint8_t)>(&::System::Xml::XmlStreamNodeWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6129744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(char16_t, char16_t)>(&::System::Xml::XmlStreamNodeWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61297dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteUTF8Char
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(int32_t)>(&::System::Xml::XmlStreamNodeWriter::WriteUTF8Char)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x61297e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteUTF8Char", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteUTF8Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::XmlStreamNodeWriter::WriteUTF8Chars)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6129ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                                             { "WriteUTF8Chars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.WriteUTF8Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(::StringW)>(&::System::Xml::XmlStreamNodeWriter::WriteUTF8Chars)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6129b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteUTF8Chars", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.UnsafeWriteUTF8Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)(char16_t*, int32_t)>(&::System::Xml::XmlStreamNodeWriter::UnsafeWriteUTF8Chars)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6129880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "UnsafeWriteUTF8Chars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.UnsafeGetUTF8Chars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::XmlStreamNodeWriter::*)(char16_t*, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::System::Xml::XmlStreamNodeWriter::UnsafeGetUTF8Chars)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6129b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                         { "UnsafeGetUTF8Chars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.FlushBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::FlushBuffer)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6129ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::Flush)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6129ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlStreamNodeWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::XmlStreamNodeWriter::*)()>(&::System::Xml::XmlStreamNodeWriter::Close)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6129d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Xml::XmlStreamNodeWriter::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::ArrayW<uint8_t>& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::Xml::XmlStreamNodeWriter::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr int32_t const& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void System::Xml::XmlStreamNodeWriter::__cordl_internal_set_offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr bool& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_ownsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownsStream;
}
constexpr bool const& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_ownsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ownsStream;
}
constexpr void System::Xml::XmlStreamNodeWriter::__cordl_internal_set_ownsStream(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ownsStream = value;
}
constexpr ::System::Text::Encoding*& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Xml::XmlStreamNodeWriter::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Xml::XmlStreamNodeWriter::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
inline void System::Xml::XmlStreamNodeWriter::setStaticF_UTF8Encoding(::System::Text::UTF8Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::UTF8Encoding*, "UTF8Encoding", ::System::Xml::XmlStreamNodeWriter*>(std::forward<::System::Text::UTF8Encoding*>(value));
}
inline ::System::Text::UTF8Encoding* System::Xml::XmlStreamNodeWriter::getStaticF_UTF8Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::UTF8Encoding*, "UTF8Encoding", ::System::Xml::XmlStreamNodeWriter*>();
}
inline void System::Xml::XmlStreamNodeWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlStreamNodeWriter::SetOutput(::System::IO::Stream* stream, bool ownsStream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                                           { "SetOutput", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, ownsStream, encoding);
}
inline int32_t System::Xml::XmlStreamNodeWriter::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Xml::XmlStreamNodeWriter::GetBuffer(int32_t count, ::by_ref<int32_t> offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, count, offset);
}
inline void System::Xml::XmlStreamNodeWriter::Advance(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "Advance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void System::Xml::XmlStreamNodeWriter::EnsureByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "EnsureByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlStreamNodeWriter::WriteByte(uint8_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void System::Xml::XmlStreamNodeWriter::WriteByte(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteByte", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlStreamNodeWriter::WriteBytes(uint8_t b1, uint8_t b2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b1, b2);
}
inline void System::Xml::XmlStreamNodeWriter::WriteBytes(char16_t ch1, char16_t ch2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch1, ch2);
}
inline void System::Xml::XmlStreamNodeWriter::WriteUTF8Char(int32_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteUTF8Char", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ch);
}
inline void System::Xml::XmlStreamNodeWriter::WriteUTF8Chars(::ArrayW<uint8_t> chars, int32_t charOffset, int32_t charCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                                           { "WriteUTF8Chars", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charOffset, charCount);
}
inline void System::Xml::XmlStreamNodeWriter::WriteUTF8Chars(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "WriteUTF8Chars", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::XmlStreamNodeWriter::UnsafeWriteUTF8Chars(char16_t* chars, int32_t charCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), { "UnsafeWriteUTF8Chars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, charCount);
}
inline int32_t System::Xml::XmlStreamNodeWriter::UnsafeGetUTF8Chars(char16_t* chars, int32_t charCount, ::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(),
                                       { "UnsafeGetUTF8Chars", {}, { ::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chars, charCount, buffer, offset);
}
inline void System::Xml::XmlStreamNodeWriter::FlushBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlStreamNodeWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::XmlStreamNodeWriter::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::XmlStreamNodeWriter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlStreamNodeWriter* System::Xml::XmlStreamNodeWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::XmlStreamNodeWriter*>());
}
// Ctor Parameters []
constexpr ::System::Xml::XmlStreamNodeWriter::XmlStreamNodeWriter() {}
