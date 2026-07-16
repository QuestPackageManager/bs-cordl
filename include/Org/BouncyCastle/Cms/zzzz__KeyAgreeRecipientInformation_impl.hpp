#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/KeyAgreeRecipientInformation.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__KeyAgreeRecipientInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__KeyAgreeRecipientInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorIdentifierOrKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorPublicKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSecureReadable_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsTypedStream_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorID_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientID_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.ReadRecipientInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::IList*, ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::ReadRecipientInfo)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x36acb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                             { "ReadRecipientInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(
    ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*, ::Org::BouncyCastle::Cms::RecipientID*, ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Cms::CmsSecureReadable*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x36ccbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetSenderPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSenderPublicKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x36ccc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
            { "GetSenderPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetPublicKeyFromOriginatorPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorPublicKey)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36ccce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                         { "GetPublicKeyFromOriginatorPublicKey",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetPublicKeyFromOriginatorID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::Org::BouncyCastle::Cms::OriginatorID*)>(&::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorID)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x36ccdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                           { "GetPublicKeyFromOriginatorID", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::OriginatorID*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.CalculateAgreedWrapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::CalculateAgreedWrapKey)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x36ccdf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                           { "CalculateAgreedWrapKey",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.UnwrapSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*)>(
        &::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::UnwrapSessionKey)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x36cd1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                             { "UnwrapSessionKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetSessionKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSessionKey)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x36cd3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                           { "GetSessionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation.GetContentStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Cms::CmsTypedStream* (
    ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetContentStream)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x36cd614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*& Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_get_encryptedKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedKey;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_get_encryptedKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedKey;
}
constexpr void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::__cordl_internal_set_encryptedKey(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptedKey = value;
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info,
                                                                                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                           { "ReadRecipientInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, infos, info, secureReadable);
}
inline void Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info, ::Org::BouncyCastle::Cms::RecipientID* rid,
                                                                        ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::RecipientID*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Cms::CmsSecureReadable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, rid, encryptedKey, secureReadable);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*
Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSenderPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                         ::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey* originator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
          { "GetSenderPublicKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorIdentifierOrKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method, receiverPrivateKey, originator);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*
Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey,
                                                                                          ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey* originatorPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                              { "GetPublicKeyFromOriginatorPublicKey",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method, receiverPrivateKey, originatorPublicKey);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetPublicKeyFromOriginatorID(::Org::BouncyCastle::Cms::OriginatorID* origID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                         { "GetPublicKeyFromOriginatorID", {}, { ::i2c::type_of<::Org::BouncyCastle::Cms::OriginatorID*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(this, ___internal_method, origID);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*
Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::CalculateAgreedWrapKey(::StringW wrapAlg, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* senderPublicKey,
                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                         { "CalculateAgreedWrapKey",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, wrapAlg, senderPublicKey, receiverPrivateKey);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::UnwrapSessionKey(::StringW wrapAlg,
                                                                                                                                     ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* agreedKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                           { "UnwrapSessionKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, wrapAlg, agreedKey);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*
Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetSessionKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* receiverPrivateKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(),
                                                                                         { "GetSessionKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, receiverPrivateKey);
}
inline ::Org::BouncyCastle::Cms::CmsTypedStream* Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::CmsTypedStream*>(this, ___internal_method, key);
}
inline ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation* Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::KeyAgreeRecipientInfo* info,
                                                                                                                              ::Org::BouncyCastle::Cms::RecipientID* rid,
                                                                                                                              ::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey,
                                                                                                                              ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation*>(info, rid, encryptedKey, secureReadable));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::KeyAgreeRecipientInformation::KeyAgreeRecipientInformation() {}
