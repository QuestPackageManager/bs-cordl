#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsProtocol.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsRecordLayer_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34411bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.ProcessFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ProcessFinished)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x3441214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.ApplyMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*, int16_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ApplyMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3441344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                                { "ApplyMaxFragmentLengthExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(), ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.EvaluateMaxFragmentLengthExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(bool, ::System::Collections::IDictionary*, ::System::Collections::IDictionary*, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::EvaluateMaxFragmentLengthExtension)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x34413c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                            { "EvaluateMaxFragmentLengthExtension",
                              {},
                              { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.GenerateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::GenerateCertificate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3441464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                                                                           { "GenerateCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.GenerateSupplementalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Collections::IList*)>(&::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::GenerateSupplementalData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x34414ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), { "GenerateSupplementalData", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol.ValidateSelectedCipherSuite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ValidateSelectedCipherSuite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x344156c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                                                                           { "ValidateSelectedCipherSuite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Tls::DtlsProtocol::__cordl_internal_get_mSecureRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Tls::DtlsProtocol::__cordl_internal_get_mSecureRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecureRandom;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsProtocol::__cordl_internal_set_mSecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecureRandom = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ProcessFinished(::ArrayW<uint8_t> body, ::ArrayW<uint8_t> expected_verify_data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body, expected_verify_data);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ApplyMaxFragmentLengthExtension(::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer* recordLayer, int16_t maxFragmentLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                              { "ApplyMaxFragmentLengthExtension", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::DtlsRecordLayer*>(), ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, recordLayer, maxFragmentLength);
}
inline int16_t Org::BouncyCastle::Crypto::Tls::DtlsProtocol::EvaluateMaxFragmentLengthExtension(bool resumedSession, ::System::Collections::IDictionary* clientExtensions,
                                                                                                ::System::Collections::IDictionary* serverExtensions, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                          { "EvaluateMaxFragmentLengthExtension",
                            {},
                            { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<::System::Collections::IDictionary*>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, resumedSession, clientExtensions, serverExtensions, alertDescription);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsProtocol::GenerateCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* certificate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                                                                         { "GenerateCertificate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, certificate);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DtlsProtocol::GenerateSupplementalData(::System::Collections::IList* supplementalData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(), { "GenerateSupplementalData", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, supplementalData);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsProtocol::ValidateSelectedCipherSuite(int32_t selectedCipherSuite, uint8_t alertDescription) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(),
                                                                                         { "ValidateSelectedCipherSuite", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selectedCipherSuite, alertDescription);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol* Org::BouncyCastle::Crypto::Tls::DtlsProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsProtocol*>(secureRandom));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsProtocol::DtlsProtocol() {}
