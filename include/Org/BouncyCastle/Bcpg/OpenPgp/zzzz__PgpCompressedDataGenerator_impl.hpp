#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpCompressedDataGenerator.hpp"
#include "Org/BouncyCastle/Apache/Bzip2/zzzz__CBZip2OutputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZOutputStream_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpCompressedDataGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357ba4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::Close)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x357bb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(), 21 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::_ctor(::System::IO::Stream* output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::New_ctor(::System::IO::Stream* output) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream*>(output));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeCBZip2OutputStream::PgpCompressedDataGenerator_SafeCBZip2OutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357ba44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x357bb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::_ctor(::System::IO::Stream* output, int32_t level, bool nowrap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output, level, nowrap);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::New_ctor(::System::IO::Stream* output, int32_t level, bool nowrap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream*>(output, level, nowrap));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator_SafeZOutputStream::PgpCompressedDataGenerator_SafeZOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357b534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x357b53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x357b630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)(::System::IO::Stream*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x357b8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.doOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x357b780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "doOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x357ba54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_compression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compression;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_compression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compression;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_compression(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compression = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_dOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dOut;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_dOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_dOut(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dOut = value;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream*& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_pkOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_get_pkOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkOut;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::__cordl_internal_set_pkOut(::Org::BouncyCastle::Bcpg::BcpgOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkOut = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, compression);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Open(::System::IO::Stream* outStr, ::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, buffer);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::doOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "doOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(algorithm));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::New_ctor(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm, int32_t compression) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator*>(algorithm, compression));
}
/// @brief Convert operator to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::operator ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator"
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::i___Org__BouncyCastle__Bcpg__OpenPgp__IStreamGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpCompressedDataGenerator::PgpCompressedDataGenerator() {}
