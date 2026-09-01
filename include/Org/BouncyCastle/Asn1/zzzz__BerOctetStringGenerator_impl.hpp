#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerOctetStringGenerator.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetStringGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetStringGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::*)(
    ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x368a6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::WriteByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x368a7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::Write)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x368a844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::*)()>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::Close)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x368a978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buf;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_set__buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buf = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__off() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____off;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__off() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____off;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_set__off(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____off = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator*& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__gen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gen;
}
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* const& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__gen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gen;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_set__gen(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gen = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerOutputStream*& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__derOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derOut;
}
constexpr ::Org::BouncyCastle::Asn1::DerOutputStream* const& Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_get__derOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derOut;
}
constexpr void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::__cordl_internal_set__derOut(::Org::BouncyCastle::Asn1::DerOutputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____derOut = value;
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t> buf) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gen, buf);
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::Write(::ArrayW<uint8_t> buf, int32_t offset, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, offset, len);
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*
Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::New_ctor(::Org::BouncyCastle::Asn1::BerOctetStringGenerator* gen, ::ArrayW<uint8_t> buf) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream*>(gen, buf));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator_BufferedBerOctetStream::BerOctetStringGenerator_BufferedBerOctetStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x368a588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x368a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)()>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x368a5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x368a67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetStringGenerator.GetOctetOutputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::BerOctetStringGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x368a610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor(::System::IO::Stream* outStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream);
}
inline void Org::BouncyCastle::Asn1::BerOctetStringGenerator::_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, tagNo, isExplicit);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream(int32_t bufSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, bufSize);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::BerOctetStringGenerator::GetOctetOutputStream(::ArrayW<uint8_t> buf) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(), { "GetOctetOutputStream", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, buf);
}
inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* Org::BouncyCastle::Asn1::BerOctetStringGenerator::New_ctor(::System::IO::Stream* outStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(outStream));
}
inline ::Org::BouncyCastle::Asn1::BerOctetStringGenerator* Org::BouncyCastle::Asn1::BerOctetStringGenerator::New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerOctetStringGenerator*>(outStream, tagNo, isExplicit));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerOctetStringGenerator::BerOctetStringGenerator() {}
