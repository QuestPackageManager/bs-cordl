#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/ArmoredInputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ArmoredInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Crc24_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Bcpg::ArmoredInputStream::Decode)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3693dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(),
                            { "Decode", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3694020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::System::IO::Stream*, bool)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3694028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ParseHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ParseHeaders)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x3694158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ParseHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.IsClearText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::IsClearText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36945bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "IsClearText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.IsEndOfStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::IsEndOfStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36945c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "IsEndOfStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.GetArmorHeaderLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaderLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36945cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "GetArmorHeaderLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.GetArmorHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaders)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x36945d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "GetArmorHeaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadIgnoreSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreSpace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3694808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadIgnoreSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadIgnoreWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreWhitespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3694848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadIgnoreWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadByteClearText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByteClearText)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x36948a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadByteClearText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadClearText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadClearText)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3694980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(),
                                                             { "ReadClearText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.DoReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::DoReadByte)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x3694ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "DoReadByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3694d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::ArmoredInputStream::Read)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3694e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::Close)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3695024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_start(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start = value;
}
constexpr ::ArrayW<int32_t>& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_outBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outBuf;
}
constexpr ::ArrayW<int32_t> const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_outBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outBuf;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_outBuf(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outBuf = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_bufPtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPtr;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_bufPtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufPtr;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_bufPtr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufPtr = value;
}
constexpr ::Org::BouncyCastle::Bcpg::Crc24*& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_crc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crc;
}
constexpr ::Org::BouncyCastle::Bcpg::Crc24* const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_crc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crc;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_crc(::Org::BouncyCastle::Bcpg::Crc24* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crc = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_crcFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crcFound;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_crcFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crcFound;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_crcFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crcFound = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_hasHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHeaders;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_hasHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasHeaders;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_hasHeaders(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasHeaders = value;
}
constexpr ::StringW& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr ::StringW const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_header(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___header = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_newLineFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineFound;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_newLineFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newLineFound;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_newLineFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newLineFound = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_clearText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearText;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_clearText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearText;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_clearText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearText = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_restart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restart;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_restart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restart;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_restart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___restart = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_headerList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerList;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_headerList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerList;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_headerList(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerList = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_lastC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastC;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_lastC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastC;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_lastC(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastC = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_isEndOfStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndOfStream;
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_get_isEndOfStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEndOfStream;
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__cordl_internal_set_isEndOfStream(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEndOfStream = value;
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::setStaticF_decodingTable(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "decodingTable", ::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::ArmoredInputStream::getStaticF_decodingTable() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "decodingTable", ::Org::BouncyCastle::Bcpg::ArmoredInputStream*>();
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::Decode(int32_t in0, int32_t in1, int32_t in2, int32_t in3, ::ArrayW<int32_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(),
                          { "Decode", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, in0, in1, in2, in3, result);
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor(::System::IO::Stream* input, bool hasHeaders) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, hasHeaders);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::ParseHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ParseHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::IsClearText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "IsClearText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::IsEndOfStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "IsEndOfStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaderLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "GetArmorHeaderLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "GetArmorHeaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadIgnoreSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadIgnoreWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByteClearText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "ReadByteClearText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadClearText(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(),
                                                           { "ReadClearText", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::DoReadByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), { "DoReadByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* Org::BouncyCastle::Bcpg::ArmoredInputStream::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(input));
}
inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* Org::BouncyCastle::Bcpg::ArmoredInputStream::New_ctor(::System::IO::Stream* input, bool hasHeaders) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(input, hasHeaders));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ArmoredInputStream::ArmoredInputStream() {}
