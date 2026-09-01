#pragma once
// IWYU pragma private; include "System\Diagnostics\AsyncStreamReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x639b7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { ::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)(bool)>(&::System::Diagnostics::AsyncStreamReader::Dispose)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x639b7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { ::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.CancelOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::CancelOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x639bb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { "CancelOperation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.WaitUtilEOF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::WaitUtilEOF)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x639bb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { "WaitUtilEOF", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::System::Text::Encoding*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::System::Text::Encoding* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::System::Text::Decoder*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_decoder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr ::System::Text::Decoder* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_decoder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decoder;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_decoder(::System::Text::Decoder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decoder = value;
}
constexpr ::ArrayW<uint8_t>& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteBuffer = value;
}
constexpr ::ArrayW<char16_t>& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_charBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charBuffer;
}
constexpr ::ArrayW<char16_t> const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_charBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charBuffer;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_charBuffer(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charBuffer = value;
}
constexpr bool& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_cancelOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelOperation;
}
constexpr bool const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_cancelOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelOperation;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_cancelOperation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelOperation = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_eofEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eofEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_eofEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eofEvent;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_eofEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eofEvent = value;
}
constexpr ::System::Object*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_syncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncObject;
}
constexpr ::System::Object* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_syncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncObject;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_syncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncObject = value;
}
constexpr ::System::IAsyncResult*& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_asyncReadResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadResult;
}
constexpr ::System::IAsyncResult* const& System::Diagnostics::AsyncStreamReader::__cordl_internal_get_asyncReadResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asyncReadResult;
}
constexpr void System::Diagnostics::AsyncStreamReader::__cordl_internal_set_asyncReadResult(::System::IAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___asyncReadResult = value;
}
inline void System::Diagnostics::AsyncStreamReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::AsyncStreamReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::AsyncStreamReader::CancelOperation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { "CancelOperation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::AsyncStreamReader::WaitUtilEOF() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::AsyncStreamReader*>(), { "WaitUtilEOF", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::AsyncStreamReader::AsyncStreamReader() {}
