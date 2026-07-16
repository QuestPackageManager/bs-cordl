#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedDataStreamGenerator.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::*)(
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*, ::Org::BouncyCastle::Crypto::IO::CipherStream*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator*, ::Org::BouncyCastle::Asn1::BerSequenceGenerator*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x36aaf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36aafd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x36aaff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x36ab010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(),
                                                            { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__outer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outer;
}
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__outer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outer;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_set__outer(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outer = value;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____out;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_set__out(::Org::BouncyCastle::Crypto::IO::CipherStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____out = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__cGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__cGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cGen;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_set__cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__envGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__envGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____envGen;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_set__envGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____envGen = value;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__eiGen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_get__eiGen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eiGen;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::__cordl_internal_set__eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eiGen = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::_ctor(::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer,
                                                                                                        ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream,
                                                                                                        ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
                                                                                                        ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen,
                                                                                                        ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Cms::CmsEnvelopedGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::BerSequenceGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, outStream, cGen, envGen, eiGen);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, off, len);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::New_ctor(
    ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator* outer, ::Org::BouncyCastle::Crypto::IO::CipherStream* outStream, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* cGen,
    ::Org::BouncyCastle::Asn1::BerSequenceGenerator* envGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator* eiGen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream*>(outer, outStream, cGen, envGen, eiGen));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream::CmsEnvelopedDataStreamGenerator_CmsEnvelopedDataOutputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36a9e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36a9ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a9f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBerEncodeRecipients
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(bool)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a9f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "SetBerEncodeRecipients", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.get_Version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x36a9f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "get_Version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator*)>(
        &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x36a9f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                            { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (
    ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::ICipherParameters*,
                                                                  ::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x818;
  constexpr static std::size_t addrs = 0x36aa5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                { "Open",
                                                  {},
                                                  { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x36aadbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(::System::IO::Stream*, ::StringW, int32_t)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36aae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                             { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originatorInfo;
}
constexpr ::System::Object* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originatorInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_set__originatorInfo(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originatorInfo = value;
}
constexpr ::System::Object*& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__unprotectedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprotectedAttributes;
}
constexpr ::System::Object* const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__unprotectedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unprotectedAttributes;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_set__unprotectedAttributes(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unprotectedAttributes = value;
}
constexpr int32_t& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__bufferSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr int32_t const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__bufferSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferSize;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_set__bufferSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferSize = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_get__berEncodeRecipientSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____berEncodeRecipientSet;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__cordl_internal_set__berEncodeRecipientSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____berEncodeRecipientSet = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rand);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize(int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "SetBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "SetBerEncodeRecipients", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, berEncodeRecipientSet);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(), { "get_Version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid,
                                                                                           ::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                       { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::CipherKeyGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, encryptionOid, keyGen);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlgID,
                                                                                           ::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters,
                                                                                           ::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                              { "Open",
                                                {},
                                                { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, encAlgID, cipherParameters, recipientInfos);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                                                         { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, encryptionOid);
}
inline ::System::IO::Stream* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(::System::IO::Stream* outStream, ::StringW encryptionOid, int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(),
                                                           { "Open", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, outStream, encryptionOid, keySize);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>());
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator* Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::New_ctor(::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator*>(rand));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataStreamGenerator() {}
