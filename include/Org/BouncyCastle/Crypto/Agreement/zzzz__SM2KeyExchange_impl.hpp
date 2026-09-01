#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\SM2KeyExchange.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__SM2KeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)()>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36e520c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e5268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x36e5270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(int32_t, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x36e5458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKeyWithConfirmation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::ArrayW<uint8_t>> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    int32_t, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x36e5798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x36e60c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Kdf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x36e6344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Reduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x36e628c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { "Reduce", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x36e5dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                         { "S1", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateInnerHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*,
    ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x36e5ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                            { "CalculateInnerHash",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x36e5f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                         { "S2", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.GetZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x36e562c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                         { "GetZ", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddUserID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x36e6a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                             { "AddUserID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x36e6994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                         { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDigest = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUserID;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUserID;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mUserID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mUserID = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mStaticKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mStaticKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStaticKey = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mStaticPubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPubPoint;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mStaticPubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mStaticPubPoint = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mEphemeralPubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPubPoint;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mEphemeralPubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEphemeralPubPoint = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mECParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mECParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mECParams = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mW;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mW;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mW(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mW = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mEphemeralKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mEphemeralKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEphemeralKey = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mInitiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitiator;
}
constexpr bool const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_get_mInitiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitiator;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__cordl_internal_set_mInitiator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInitiator = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init(::Org::BouncyCastle::Crypto::ICipherParameters* privParam) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privParam);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, kLen, pubParam);
}
inline ::ArrayW<::ArrayW<uint8_t>> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t> confirmationTag,
                                                                                                                      ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t>>>(this, ___internal_method, kLen, confirmationTag, pubParam);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* otherPub) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, otherPub);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf(::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, int32_t klen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, u, za, zb, klen);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce(::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(), { "Reduce", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, x);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t> inner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                          { "S1", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, digest, u, inner);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u,
                                                                                                  ::ArrayW<uint8_t> za, ::ArrayW<uint8_t> zb, ::Org::BouncyCastle::Math::EC::ECPoint* p1,
                                                                                                  ::Org::BouncyCastle::Math::EC::ECPoint* p2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                          { "CalculateInnerHash",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                              ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, digest, u, za, zb, p1, p2);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t> inner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                          { "S2", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, digest, u, inner);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> userID,
                                                                                    ::Org::BouncyCastle::Math::EC::ECPoint* pubPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                       { "GetZ", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, digest, userID, pubPoint);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> userID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                                           { "AddUserID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, userID);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(),
                                       { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, v);
}
inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>());
}
inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::SM2KeyExchange() {}
