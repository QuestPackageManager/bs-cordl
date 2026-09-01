#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpPbeEncryptedData.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpEncryptedData_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPbeEncryptedData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyEncSessionPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*, ::Org::BouncyCastle::Bcpg::InputStreamPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3583230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetInputStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35881ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x35881c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStream", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamUtf8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<char16_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3588ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStreamUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.GetDataStreamRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3588b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStreamRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.DoGetDataStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x35881f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                                                                                           { "DoGetDataStream", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData.CreateStreamCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3588b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                                                                                           { "CreateStreamCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_get_keyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_get_keyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyData;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::__cordl_internal_set_keyData(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyData = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData, ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::InputStreamPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyData, encData);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetInputStream() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStream(::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStream", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, passPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamUtf8(::ArrayW<char16_t> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStreamUtf8", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, passPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::GetDataStreamRaw(::ArrayW<uint8_t> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(), { "GetDataStreamRaw", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, rawPassPhrase);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::DoGetDataStream(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                                                                                         { "DoGetDataStream", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::CreateStreamCipher(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag keyAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(),
                                                                                         { "CreateStreamCipher", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this, ___internal_method, keyAlgorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData* Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::New_ctor(::Org::BouncyCastle::Bcpg::SymmetricKeyEncSessionPacket* keyData,
                                                                                                                                ::Org::BouncyCastle::Bcpg::InputStreamPacket* encData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData*>(keyData, encData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPbeEncryptedData::PgpPbeEncryptedData() {}
