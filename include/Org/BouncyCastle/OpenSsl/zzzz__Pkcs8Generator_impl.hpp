#pragma once
// IWYU pragma private; include "Org\BouncyCastle\OpenSsl\Pkcs8Generator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__Pkcs8Generator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::OpenSsl::Pkcs8Generator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35aa90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::StringW)>(
    &::Org::BouncyCastle::OpenSsl::Pkcs8Generator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x35aa914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator.set_SecureRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_SecureRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35aa928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(),
                                                                                           { "set_SecureRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator.set_Password
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)(::ArrayW<char16_t>)>(&::Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35aa930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "set_Password", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator.set_IterationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)(int32_t)>(&::Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35aa938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "set_IterationCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::OpenSsl::Pkcs8Generator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (::Org::BouncyCastle::OpenSsl::Pkcs8Generator::*)()>(
    &::Org::BouncyCastle::OpenSsl::Pkcs8Generator::Generate)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x35aa940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "Generate", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<char16_t>& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr ::ArrayW<char16_t> const& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_set_password(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___password = value;
}
constexpr ::StringW& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::StringW const& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_set_algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr int32_t& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_iterationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr int32_t const& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_iterationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iterationCount;
}
constexpr void Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_set_iterationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iterationCount = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_privKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_privKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr void Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_set_privKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privKey = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::OpenSsl::Pkcs8Generator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___random = value;
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_RC4_128(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_RC4_128", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_RC4_128() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_RC4_128", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_RC4_40(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_RC4_40", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_RC4_40() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_RC4_40", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_3DES(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_3DES", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_3DES() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_3DES", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_2DES(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_2DES", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_2DES() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_2DES", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_RC2_128(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_RC2_128", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_RC2_128() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_RC2_128", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::setStaticF_PbeSha1_RC2_40(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "PbeSha1_RC2_40", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(std::forward<::StringW>(value));
}
inline ::StringW Org::BouncyCastle::OpenSsl::Pkcs8Generator::getStaticF_PbeSha1_RC2_40() {
  return ::cordl_internals::getStaticField<::StringW, "PbeSha1_RC2_40", ::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>();
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKey);
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::StringW algorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privKey, algorithm);
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_SecureRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(),
                                                                                         { "set_SecureRandom", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_Password(::ArrayW<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "set_Password", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::OpenSsl::Pkcs8Generator::set_IterationCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "set_IterationCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::OpenSsl::Pkcs8Generator::Generate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(), { "Generate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::OpenSsl::Pkcs8Generator* Org::BouncyCastle::OpenSsl::Pkcs8Generator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(privKey));
}
inline ::Org::BouncyCastle::OpenSsl::Pkcs8Generator* Org::BouncyCastle::OpenSsl::Pkcs8Generator::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::StringW algorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::OpenSsl::Pkcs8Generator*>(privKey, algorithm));
}
/// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
constexpr Org::BouncyCastle::OpenSsl::Pkcs8Generator::operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* Org::BouncyCastle::OpenSsl::Pkcs8Generator::i___Org__BouncyCastle__Utilities__IO__Pem__PemObjectGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::OpenSsl::Pkcs8Generator::Pkcs8Generator() {}
