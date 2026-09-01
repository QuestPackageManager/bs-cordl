#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpSignatureSubpacketGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationReasonTag_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetRevocable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a0a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetRevocable", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetExportable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetExportable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a0b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetExportable", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetFeature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetFeature)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x35a0c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetFeature", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetTrust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetTrust)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x35a0d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetTrust", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetKeyExpirationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetKeyExpirationTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a0e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetKeyExpirationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetSignatureExpirationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignatureExpirationTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a0f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetSignatureExpirationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetSignatureCreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::System::DateTime)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignatureCreationTime)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetSignatureCreationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetPreferredHashAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredHashAlgorithms)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetPreferredHashAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetPreferredSymmetricAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredSymmetricAlgorithms)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                             { "SetPreferredSymmetricAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetPreferredCompressionAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredCompressionAlgorithms)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                             { "SetPreferredCompressionAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetKeyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetKeyFlags)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetKeyFlags", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetSignerUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignerUserId)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x35a1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetSignerUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetSignerUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignerUserId)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x35a16c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetSignerUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetEmbeddedSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetEmbeddedSignature)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x35a1808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                             { "SetEmbeddedSignature", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetPrimaryUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPrimaryUserId)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetPrimaryUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetNotationData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, bool, ::StringW, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetNotationData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x35a1a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                             { "SetNotationData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetRevocationReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, ::Org::BouncyCastle::Bcpg::RevocationReasonTag, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocationReason)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x35a1b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                         { "SetRevocationReason", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetRevocationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(
    bool, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocationKey)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x35a1c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                            { "SetRevocationKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.SetIssuerKeyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)(bool, int64_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetIssuerKeyID)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x35a1db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                           { "SetIssuerKeyID", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::Generate)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x35a1eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(), { "Generate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x35a2170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::__cordl_internal_set_list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocable(bool isCritical, bool isRevocable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetRevocable", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isRevocable);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetExportable(bool isCritical, bool isExportable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetExportable", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isExportable);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetFeature(bool isCritical, uint8_t feature) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetFeature", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, feature);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetTrust(bool isCritical, int32_t depth, int32_t trustAmount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetTrust", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, depth, trustAmount);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetKeyExpirationTime(bool isCritical, int64_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetKeyExpirationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, seconds);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignatureExpirationTime(bool isCritical, int64_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetSignatureExpirationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, seconds);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignatureCreationTime(bool isCritical, ::System::DateTime date) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetSignatureCreationTime", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, date);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredHashAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetPreferredHashAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, algorithms);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredSymmetricAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetPreferredSymmetricAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, algorithms);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPreferredCompressionAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                           { "SetPreferredCompressionAlgorithms", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, algorithms);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetKeyFlags(bool isCritical, int32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetKeyFlags", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, flags);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignerUserId(bool isCritical, ::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetSignerUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, userId);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetSignerUserId(bool isCritical, ::ArrayW<uint8_t> rawUserId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetSignerUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, rawUserId);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetEmbeddedSignature(bool isCritical, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* pgpSignature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                           { "SetEmbeddedSignature", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, pgpSignature);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetPrimaryUserId(bool isCritical, bool isPrimaryUserId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetPrimaryUserId", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isPrimaryUserId);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetNotationData(bool isCritical, bool isHumanReadable, ::StringW notationName, ::StringW notationValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                           { "SetNotationData", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isHumanReadable, notationName, notationValue);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocationReason(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                       { "SetRevocationReason", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationReasonTag>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, reason, description);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetRevocationKey(bool isCritical, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                               ::ArrayW<uint8_t> fingerprint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                          { "SetRevocationKey", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, keyAlgorithm, fingerprint);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::SetIssuerKeyID(bool isCritical, int64_t keyID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(),
                                                                                         { "SetIssuerKeyID", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, keyID);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::Generate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(), { "Generate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator::PgpSignatureSubpacketGenerator() {}
