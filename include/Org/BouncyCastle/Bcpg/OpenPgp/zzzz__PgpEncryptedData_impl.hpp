#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpEncryptedData.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x357f870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream.FillBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::FillBuffer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x357f944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { "FillBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::ReadByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x357f99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::Read)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x357fa00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream.GetLookAhead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::GetLookAhead)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x357f7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { "GetLookAhead", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_inStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStr;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_inStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStr;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_set_inStr(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inStr = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_lookAhead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAhead;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_lookAhead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lookAhead;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_set_lookAhead(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lookAhead = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_bufStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufStart;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_bufStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufStart;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_set_bufStart(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufStart = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_bufEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufEnd;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_get_bufEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bufEnd;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::__cordl_internal_set_bufEnd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bufEnd = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::_ctor(::System::IO::Stream* inStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inStr);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::FillBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { "FillBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::GetLookAhead() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(), { "GetLookAhead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::New_ctor(::System::IO::Stream* inStr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*>(inStr));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream::PgpEncryptedData_TruncatedStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::*)(::Org::BouncyCastle::Bcpg::InputStreamPacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357f500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::GetInputStream)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x357f508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData.IsIntegrityProtected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::IsIntegrityProtected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x357f520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), { "IsIntegrityProtected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData.Verify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::Verify)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x357f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), { "Verify", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_encData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encData;
}
constexpr ::Org::BouncyCastle::Bcpg::InputStreamPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_encData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encData;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_set_encData(::Org::BouncyCastle::Bcpg::InputStreamPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encData = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_encStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_encStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encStream;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_set_encStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encStream = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_truncStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___truncStream;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_get_truncStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___truncStream;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::__cordl_internal_set_truncStream(::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData_TruncatedStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___truncStream = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encData);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::GetInputStream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::IsIntegrityProtected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), { "IsIntegrityProtected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::Verify() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(), { "Verify", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData* Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::New_ctor(::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData*>(encData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpEncryptedData::PgpEncryptedData() {}
