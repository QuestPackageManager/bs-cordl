#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\SM2Signer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__SM2Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3432664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3432760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34327d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x34326fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3432844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::Init)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x3432888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3433060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3433118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x34331e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x34335e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x3433718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x3433374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                { "VerifySignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.GetZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3432ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { "GetZ", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.AddUserID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3433c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                             { "AddUserID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.AddFieldElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3433db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                         { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.CalculateE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3433e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.CreateBasePointMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3433ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 19 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_kCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_kCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kCalculator = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_ecParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecParams;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_ecParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecParams;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_ecParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ecParams = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_pubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubPoint;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_pubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_pubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubPoint = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_ecKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_ecKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_ecKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ecKey = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__cordl_internal_set_z(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding, digest);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::SM2Signer::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Update(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline bool Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature(::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                              { "VerifySignature", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r, s);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ(::ArrayW<uint8_t> userID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), { "GetZ", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, userID);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> userID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                                           { "AddUserID", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, userID);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(),
                                       { "AddFieldElement", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, v);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, message);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>());
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(digest));
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(encoding));
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(encoding, digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::SM2Signer::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::SM2Signer::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::SM2Signer::SM2Signer() {}
