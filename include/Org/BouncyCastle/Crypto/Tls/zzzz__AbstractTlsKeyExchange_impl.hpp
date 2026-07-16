#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/AbstractTlsKeyExchange.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(int32_t, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x343408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ParseSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::DigitallySigned* (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ParseSignature)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3434098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::Init)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3434218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipServerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerCredentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCertificate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3434434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCredentials)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3434438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.get_RequiresServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::get_RequiresServerKeyExchange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34344fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GenerateServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateServerKeyExchange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3434504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerKeyExchange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3434560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessServerKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerKeyExchange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x34345b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ValidateCertificateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ValidateCertificateRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.SkipClientCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipClientCredentials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3434610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::TlsCredentials*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCredentials)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCertificate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3434614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GenerateClientKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateClientKeyExchange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.ProcessClientKeyExchange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientKeyExchange)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3434618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange.GeneratePremasterSecret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GeneratePremasterSecret)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 34 }));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mKeyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mKeyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mKeyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_set_mKeyExchange(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mKeyExchange = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mSupportedSignatureAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mSupportedSignatureAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSupportedSignatureAlgorithms;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_set_mSupportedSignatureAlgorithms(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSupportedSignatureAlgorithms = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mContext = value;
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::_ctor(int32_t keyExchange, ::System::Collections::IList* supportedSignatureAlgorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyExchange, supportedSignatureAlgorithms);
}
inline ::Org::BouncyCastle::Crypto::Tls::DigitallySigned* Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ParseSignature(::System::IO::Stream* input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::DigitallySigned*>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* serverCredentials) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCredentials);
}
inline bool Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::get_RequiresServerKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateServerKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipServerKeyExchange() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessServerKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::SkipClientCredentials() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* clientCredentials) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCredentials);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GenerateClientKeyExchange(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::ProcessClientKeyExchange(::System::IO::Stream* input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::GeneratePremasterSecret() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange* Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::New_ctor(int32_t keyExchange,
                                                                                                                                  ::System::Collections::IList* supportedSignatureAlgorithms) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange*>(keyExchange, supportedSignatureAlgorithms));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::operator ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::i___Org__BouncyCastle__Crypto__Tls__TlsKeyExchange() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsKeyExchange::AbstractTlsKeyExchange() {}
