#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpSignatureSubpacketVector.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Features_def.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__NotationData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x359ef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSubpacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Bcpg::SignatureSubpacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpacket)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x35a21d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                           { "GetSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.HasSubpacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSubpacket)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35a221c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                           { "HasSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSubpackets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(
    ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpackets)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35a2234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                           { "GetSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetNotationDataOccurrences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurrences)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x35a236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetNotationDataOccurrences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetNotationDataOccurences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35a24dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetNotationDataOccurences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetIssuerKeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetIssuerKeyId)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a24e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetIssuerKeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.HasSignatureCreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSignatureCreationTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35a2574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "HasSignatureCreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignatureCreationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureCreationTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x35a2590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignatureCreationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignatureExpirationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureExpirationTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a2660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignatureExpirationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetKeyExpirationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyExpirationTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a26f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetKeyExpirationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredHashAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredHashAlgorithms)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a2788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredHashAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredSymmetricAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredSymmetricAlgorithms)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a281c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredSymmetricAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredCompressionAlgorithms
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredCompressionAlgorithms)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a28b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredCompressionAlgorithms", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetKeyFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyFlags)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a2944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetKeyFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignerUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignerUserId)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a29d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignerUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.IsPrimaryUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::IsPrimaryUserId)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x35a2a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "IsPrimaryUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetCriticalTags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetCriticalTags)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x35a2b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetCriticalTags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::Sig::Features* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetFeatures)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x35a2bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.get_Size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35a2c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "get_Size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x35a2c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.ToSubpacketArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::ToSubpacketArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35a2c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "ToSubpacketArray", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_get_packets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_get_packets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packets = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packets);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                         { "GetSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                         { "HasSubpacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpackets(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(),
                                                                                         { "GetSubpackets", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(this, ___internal_method, type);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurrences() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetNotationDataOccurrences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*>>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurences() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetNotationDataOccurences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*>>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetIssuerKeyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetIssuerKeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSignatureCreationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "HasSignatureCreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureCreationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignatureCreationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureExpirationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignatureExpirationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyExpirationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetKeyExpirationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredHashAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredHashAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredSymmetricAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredSymmetricAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredCompressionAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetPreferredCompressionAlgorithms", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetKeyFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignerUserId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetSignerUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::IsPrimaryUserId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "IsPrimaryUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetCriticalTags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetCriticalTags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Features* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetFeatures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "GetFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Sig::Features*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "get_Size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::ToSubpacketArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(), { "ToSubpacketArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*> packets) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(packets));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::PgpSignatureSubpacketVector() {}
