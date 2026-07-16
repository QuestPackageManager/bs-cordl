#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedDataStreamGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Crypto::IMac*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x36a6214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36a6428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36a6448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x36a6468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_macStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macStream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_macStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macStream;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_set_macStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macStream = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cGen;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_set_cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_authGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_authGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authGen;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_set_authGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eiGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_get_eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eiGen;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::__cordl_internal_set_eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eiGen = value;
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::_ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                                ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                                ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen,
                                                                                                                ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, macStream, mac, cGen, authGen, eiGen);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*
Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::New_ctor(::System::IO::Stream* macStream, ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                       ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                       ::Org::BouncyCastle::Asn1::BerSequenceGenerator* authGen,
                                                                                                       ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream*>(macStream, mac, cGen, authGen, eiGen));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream::CmsAuthenticatedDataStreamGenerator_CmsAuthenticatedDataOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a53c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36a53c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a53cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBerEncodeRecipients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a53d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { "SetBerEncodeRecipients", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
        &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x36a53dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                            { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::ICipherParameters*,
                                                                      ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x36a59d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                { "Open",
                                                  {},
                                                  { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x36a6264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36a6344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                             { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__cordl_internal_set__berEncodeRecipientSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____berEncodeRecipientSet = value;
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(), { "SetBerEncodeRecipients", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, berEncodeRecipientSet);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW macOid,
                                                                                               ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                       { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, macOid, keyGen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlgId,
                                                                                               ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                                                                               ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                              { "Open",
                                                {},
                                                { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, macAlgId, cipherParameters, recipientInfos);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW encryptionOid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, encryptionOid);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream* outStr, ::StringW encryptionOid, int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(),
                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStr, encryptionOid, keySize);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator* Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataStreamGenerator() {}
