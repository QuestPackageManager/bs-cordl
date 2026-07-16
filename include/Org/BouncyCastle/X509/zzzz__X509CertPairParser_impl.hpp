#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509CertPairParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertPairParser_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificatePair_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser.ReadDerCrossCertificatePair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509CertificatePair* (::Org::BouncyCastle::X509::X509CertPairParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CertPairParser::ReadDerCrossCertificatePair)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3648a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadDerCrossCertificatePair", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser.ReadCertPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509CertificatePair* (::Org::BouncyCastle::X509::X509CertPairParser::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509CertPairParser::ReadCertPair)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3648b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPair", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser.ReadCertPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CertPairParser::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::X509::X509CertPairParser::ReadCertPairs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3648db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPairs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser.ReadCertPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::X509::X509CertificatePair* (::Org::BouncyCastle::X509::X509CertPairParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CertPairParser::ReadCertPair)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3648b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPair", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser.ReadCertPairs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::Org::BouncyCastle::X509::X509CertPairParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::X509::X509CertPairParser::ReadCertPairs)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3648e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPairs", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::X509CertPairParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::X509::X509CertPairParser::*)()>(&::Org::BouncyCastle::X509::X509CertPairParser::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3648f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::X509::X509CertPairParser::__cordl_internal_get_currentStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::X509::X509CertPairParser::__cordl_internal_get_currentStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentStream;
}
constexpr void Org::BouncyCastle::X509::X509CertPairParser::__cordl_internal_set_currentStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentStream = value;
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::X509CertPairParser::ReadDerCrossCertificatePair(::System::IO::Stream* inStream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadDerCrossCertificatePair", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509CertificatePair*>(this, ___internal_method, inStream);
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::X509CertPairParser::ReadCertPair(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPair", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509CertificatePair*>(this, ___internal_method, input);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CertPairParser::ReadCertPairs(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPairs", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, input);
}
inline ::Org::BouncyCastle::X509::X509CertificatePair* Org::BouncyCastle::X509::X509CertPairParser::ReadCertPair(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPair", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::X509CertificatePair*>(this, ___internal_method, inStream);
}
inline ::System::Collections::ICollection* Org::BouncyCastle::X509::X509CertPairParser::ReadCertPairs(::System::IO::Stream* inStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { "ReadCertPairs", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, inStream);
}
inline void Org::BouncyCastle::X509::X509CertPairParser::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::X509::X509CertPairParser*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::X509CertPairParser* Org::BouncyCastle::X509::X509CertPairParser::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::X509::X509CertPairParser*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::X509CertPairParser::X509CertPairParser() {}
