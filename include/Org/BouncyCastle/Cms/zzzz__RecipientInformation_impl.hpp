#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Cms\RecipientInformation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::RecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(&::Org::BouncyCastle::Cms::RecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36cd15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentAlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(&::Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x36cd1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "GetContentAlgorithmName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_RecipientID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::RecipientID* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cd294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_RecipientID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgorithmID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36cd29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgorithmID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgOid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(&::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36cd2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgOid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.get_KeyEncryptionAlgParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(
    &::Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x36cd2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentFromSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::RecipientInformation::*)(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(&::Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x36cd308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                                                             { "GetContentFromSessionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::RecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Cms::RecipientInformation::GetContent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x36cd53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                                                                                           { "GetContent", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Cms::RecipientInformation::*)()>(&::Org::BouncyCastle::Cms::RecipientInformation::GetMac)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x36cd63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "GetMac", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::RecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (::Org::BouncyCastle::Cms::RecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Cms::RecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientID*& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_rid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rid;
}
constexpr ::Org::BouncyCastle::Cms::RecipientID* const& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_rid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rid;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_set_rid(::Org::BouncyCastle::Cms::RecipientID* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rid = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_keyEncAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_keyEncAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyEncAlg;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_set_keyEncAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyEncAlg = value;
}
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable*& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_secureReadable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secureReadable;
}
constexpr ::Org::BouncyCastle::Cms::CmsSecureReadable* const& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_secureReadable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secureReadable;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_set_secureReadable(::Org::BouncyCastle::Cms::CmsSecureReadable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secureReadable = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_resultMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultMac;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_get_resultMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultMac;
}
constexpr void Org::BouncyCastle::Cms::RecipientInformation::__cordl_internal_set_resultMac(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resultMac = value;
}
inline void Org::BouncyCastle::Cms::RecipientInformation::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyEncAlg, secureReadable);
}
inline ::StringW Org::BouncyCastle::Cms::RecipientInformation::GetContentAlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "GetContentAlgorithmName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientID* Org::BouncyCastle::Cms::RecipientInformation::get_RecipientID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_RecipientID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientID*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgorithmID() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgorithmID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgOid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgOid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::RecipientInformation::get_KeyEncryptionAlgParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "get_KeyEncryptionAlgParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::RecipientInformation::GetContentFromSessionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                                                           { "GetContentFromSessionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method, sKey);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientInformation::GetContent(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(),
                                                                                         { "GetContent", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::ICipherParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, key);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Cms::RecipientInformation::GetMac() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), { "GetMac", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::RecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::RecipientInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Cms::RecipientInformation* Org::BouncyCastle::Cms::RecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncAlg,
                                                                                                              ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::RecipientInformation*>(keyEncAlg, secureReadable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::RecipientInformation::RecipientInformation() {}
