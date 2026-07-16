#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ArmoredOutputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ArmoredOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Crc24_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::Stream*, ::ArrayW<int32_t>, int32_t)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::Encode)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x36950a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                             { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x36953a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::System::IO::Stream*, ::System::Collections::IDictionary*)>(
    &::Org::BouncyCastle::Bcpg::ArmoredOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x36957a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.SetHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::SetHeader)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x36954cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "SetHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.AddHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::StringW, ::StringW)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::AddHeader)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x3695cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "AddHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.ResetHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::ResetHeaders)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x3695edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "ResetHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.BeginClearText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::ArmoredOutputStream::BeginClearText)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3696110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                                                           { "BeginClearText", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.EndClearText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::EndClearText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3696364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "EndClearText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0xa54;
  constexpr static std::size_t addrs = 0x369636c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3696e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.DoClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::DoClose)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3696e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "DoClose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.WriteHeaderEntry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::StringW, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::ArmoredOutputStream::WriteHeaderEntry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3696dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                                                           { "WriteHeaderEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredOutputStream.DoWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredOutputStream::*)(::StringW)>(&::Org::BouncyCastle::Bcpg::ArmoredOutputStream::DoWrite)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3696320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "DoWrite", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_outStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_outStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outStream;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_outStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outStream = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_buf(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_bufPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPtr;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_bufPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPtr;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_bufPtr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufPtr = value;
}
constexpr ::Org::BouncyCastle::Bcpg::Crc24*& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_crc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crc;
}
constexpr ::Org::BouncyCastle::Bcpg::Crc24* const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_crc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crc;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_crc(::Org::BouncyCastle::Bcpg::Crc24* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crc = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_chunkCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_chunkCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkCount;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_chunkCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkCount = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_lastb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_lastb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_lastb(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastb = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_start(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_clearText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearText;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_clearText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearText;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_clearText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearText = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_newLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLine;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_newLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLine;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_newLine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLine = value;
}
constexpr ::StringW& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Collections::IDictionary*& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::System::Collections::IDictionary* const& Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredOutputStream::__cordl_internal_set_headers(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_HeaderVersion(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HeaderVersion", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_HeaderVersion() {
  return ::cordl_internals::getStaticField<::StringW, "HeaderVersion", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_encodingTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "encodingTable", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_encodingTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "encodingTable", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_nl(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "nl", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_nl() {
  return ::cordl_internals::getStaticField<::StringW, "nl", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_headerStart(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "headerStart", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_headerStart() {
  return ::cordl_internals::getStaticField<::StringW, "headerStart", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_headerTail(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "headerTail", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_headerTail() {
  return ::cordl_internals::getStaticField<::StringW, "headerTail", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_footerStart(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerStart", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_footerStart() {
  return ::cordl_internals::getStaticField<::StringW, "footerStart", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_footerTail(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "footerTail", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_footerTail() {
  return ::cordl_internals::getStaticField<::StringW, "footerTail", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::setStaticF_Version(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "Version", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredOutputStream::getStaticF_Version() {
  return ::cordl_internals::getStaticField<::StringW, "Version", ::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>();
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::Encode(::System::IO::Stream* outStream, ::ArrayW<int32_t> data, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                           { "Encode", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outStream, data, len);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::_ctor(::System::IO::Stream* outStream, ::System::Collections::IDictionary* headers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, headers);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::SetHeader(::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "SetHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, val);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::AddHeader(::StringW name, ::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "AddHeader", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, val);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::ResetHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "ResetHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::BeginClearText(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(),
                                                                                         { "BeginClearText", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::EndClearText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "EndClearText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::DoClose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "DoClose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::WriteHeaderEntry(::StringW name, ::StringW v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "WriteHeaderEntry", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, v);
}
inline void Org::BouncyCastle::Bcpg::ArmoredOutputStream::DoWrite(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(), { "DoWrite", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* Org::BouncyCastle::Bcpg::ArmoredOutputStream::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(outStream));
}
inline ::Org::BouncyCastle::Bcpg::ArmoredOutputStream* Org::BouncyCastle::Bcpg::ArmoredOutputStream::New_ctor(::System::IO::Stream* outStream, ::System::Collections::IDictionary* headers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ArmoredOutputStream*>(outStream, headers));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ArmoredOutputStream::ArmoredOutputStream() {}
