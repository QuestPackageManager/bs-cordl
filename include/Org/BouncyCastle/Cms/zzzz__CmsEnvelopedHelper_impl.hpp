#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedHelper_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsReadable*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36ad0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ad0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ad0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x36ad0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(),
                                                                                           { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readable;
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_get_readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readable;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::__cordl_internal_set_readable(::Org::BouncyCastle::Cms::CmsReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readable = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                             ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, readable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(),
                                                                                         { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*>(this, ___internal_method, sKey);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*
Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable*>(algorithm, readable));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::i___Org__BouncyCastle__Cms__CmsSecureReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable::CmsEnvelopedHelper_CmsAuthenticatedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsReadable*)>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x36ad520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ad52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable.get_CryptoObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::*)()>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::get_CryptoObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36ad534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable.GetReadable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Cms::CmsReadable* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::GetReadable)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x36ad53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(),
                                                                                           { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable*& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readable;
}
constexpr ::Org::BouncyCastle::Cms::CmsReadable* const& Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_get_readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readable;
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::__cordl_internal_set_readable(::Org::BouncyCastle::Cms::CmsReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readable = value;
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                         ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, readable);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::System::Object* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::get_CryptoObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(), { "get_CryptoObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsReadable* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(),
                                                                                         { "GetReadable", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsReadable*>(this, ___internal_method, sKey);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*
Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Cms::CmsReadable* readable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable*>(algorithm, readable));
}
/// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Cms::CmsSecureReadable"
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::i___Org__BouncyCastle__Cms__CmsSecureReadable() noexcept {
  return static_cast<::Org::BouncyCastle::Cms::CmsSecureReadable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedHelper_CmsEnvelopedSecureReadable::CmsEnvelopedHelper_CmsEnvelopedSecureReadable() {}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetAsymmetricEncryptionAlgName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetAsymmetricEncryptionAlgName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x36ab7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetAsymmetricEncryptionAlgName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.CreateAsymmetricCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateAsymmetricCipher)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x36ab84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "CreateAsymmetricCipher", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.CreateWrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IWrapper* (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateWrapper)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x36ab96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "CreateWrapper", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetRfc3211WrapperName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetRfc3211WrapperName)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x36aba7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetRfc3211WrapperName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.GetKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)(::StringW)>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetKeySize)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x36abc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetKeySize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.BuildRecipientInformationStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::RecipientInformationStore* (*)(::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::BuildRecipientInformationStore)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x36abe40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(),
                            { "BuildRecipientInformationStore", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper.ReadRecipientInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(
    &::Org::BouncyCastle::Cms::CmsEnvelopedHelper::ReadRecipientInfo)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x36abf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(),
                                                             { "ReadRecipientInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsEnvelopedHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::CmsEnvelopedHelper::*)()>(&::Org::BouncyCastle::Cms::CmsEnvelopedHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36ab7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_Instance(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Instance", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(
      std::forward<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(value));
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Instance", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_KeySizes(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "KeySizes", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_KeySizes() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "KeySizes", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>();
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::setStaticF_BaseCipherNames(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "BaseCipherNames", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Cms::CmsEnvelopedHelper::getStaticF_BaseCipherNames() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "BaseCipherNames", ::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>();
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetAsymmetricEncryptionAlgName(::StringW encryptionAlgOid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetAsymmetricEncryptionAlgName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, encryptionAlgOid);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateAsymmetricCipher(::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "CreateAsymmetricCipher", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this, ___internal_method, encryptionOid);
}
inline ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::CreateWrapper(::StringW encryptionOid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "CreateWrapper", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IWrapper*>(this, ___internal_method, encryptionOid);
}
inline ::StringW Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetRfc3211WrapperName(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetRfc3211WrapperName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oid);
}
inline int32_t Org::BouncyCastle::Cms::CmsEnvelopedHelper::GetKeySize(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { "GetKeySize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsEnvelopedHelper::BuildRecipientInformationStore(::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                                                                                       ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(),
                          { "BuildRecipientInformationStore", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformationStore*>(nullptr, ___internal_method, recipientInfos, secureReadable);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* info,
                                                                          ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(),
                                                           { "ReadRecipientInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::RecipientInfo*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos, info, secureReadable);
}
inline void Org::BouncyCastle::Cms::CmsEnvelopedHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Org::BouncyCastle::Cms::CmsEnvelopedHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::CmsEnvelopedHelper*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsEnvelopedHelper::CmsEnvelopedHelper() {}
