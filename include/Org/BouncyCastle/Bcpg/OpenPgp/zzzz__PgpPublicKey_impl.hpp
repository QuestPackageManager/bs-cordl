#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpPublicKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.CalculateFingerprint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x348d110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "CalculateFingerprint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.UpdateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x348d610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "UpdateDigest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x348d6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x3487bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::PublicKeyPacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x348da08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x348db38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x348967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x3489c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*, ::System::Collections::IList*, ::System::Collections::IList*, ::System::Collections::IList*,
    ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x348dbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::System::Collections::IList*, ::System::Collections::IList*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x348da8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x348dca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_CreationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x348a188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_CreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_ValidDays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x348dcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_ValidDays", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetTrustData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x348dec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetTrustData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetValidSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x348dd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetValidSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetExpirationTimeFromSig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(bool, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x348df90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetExpirationTimeFromSig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_KeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348e844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetFingerprint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x348e84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetFingerprint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsEncryptionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3484560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_IsEncryptionKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_IsMasterKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x348df40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_IsMasterKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_Algorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3486824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_BitStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348e8c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_BitStrength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x3486840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetECKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x348e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetECKey",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x348ea1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetUserIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetUserAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x348edd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetUserAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x348f1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesForId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesForUserAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x348f444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesForUserAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignaturesOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x348e414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesOfType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetSignatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x348f688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetSignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetKeySignatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x348fa08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetKeySignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.get_PublicKeyPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x348faac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "get_PublicKeyPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x348fab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode)> {
  constexpr static std::size_t size = 0xd1c;
  constexpr static std::size_t addrs = 0x348fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.IsRevoked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x349084c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                               "IsRevoked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3490b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*,
                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x349101c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x3490ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x349108c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x34913dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x34910f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3491444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*,
                                                                      ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34917c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::System::Object*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x34914b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.AddCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3491838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey.RemoveCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x3491a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr int64_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyId;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keyId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyId = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_fingerprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_fingerprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fingerprint;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_fingerprint(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fingerprint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStrength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keyStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyStrength;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keyStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyStrength = value;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_publicPk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicPk;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_publicPk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicPk;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_publicPk(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicPk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_trustPk() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPk;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_trustPk() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPk;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_trustPk(::Org::BouncyCastle::Bcpg::TrustPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trustPk)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keySigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_keySigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_keySigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keySigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_ids(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idTrusts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idTrusts;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idTrusts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idTrusts;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_idTrusts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___idTrusts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idSigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idSigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_idSigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idSigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_idSigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___idSigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_subSigs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subSigs;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_get_subSigs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subSigs;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::__cordl_internal_set_subSigs(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subSigs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::setStaticF_MasterKeyCertificationTypes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "MasterKeyCertificationTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::getStaticF_MasterKeyCertificationTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "MasterKeyCertificationTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::CalculateFingerprint(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "CalculateFingerprint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, publicPk);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::UpdateDigest(::Org::BouncyCastle::Crypto::IDigest* d, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "UpdateDigest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                  ::System::DateTime time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, pubKey, time);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicPk);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                  ::System::Collections::IList* sigs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicPk, trustPk, sigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust,
                                                                  ::System::Collections::IList* subSigs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, trust, subSigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                  ::System::Collections::IList* keySigs, ::System::Collections::IList* ids, ::System::Collections::IList* idTrusts,
                                                                  ::System::Collections::IList* idSigs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicPk, trustPk, keySigs, ids, idTrusts, idSigs);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk, ::System::Collections::IList* ids, ::System::Collections::IList* idSigs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicPk, ids, idSigs);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_CreationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_CreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_ValidDays() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_ValidDays", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetTrustData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetTrustData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetValidSeconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetValidSeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetExpirationTimeFromSig(bool selfSigned, int32_t signatureType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetExpirationTimeFromSig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, selfSigned, signatureType);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetFingerprint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetFingerprint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsEncryptionKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_IsEncryptionKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_IsMasterKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_IsMasterKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_Algorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_Algorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_BitStrength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_BitStrength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetECKey(::StringW algorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetECKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, false>(this, ___internal_method, algorithm);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetUserIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetUserAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetUserAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForId(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesForId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method, id);
}
inline ::System::Collections::IEnumerable*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesForUserAttribute(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesForUserAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method, userAttributes);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignaturesOfType(int32_t signatureType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "GetSignaturesOfType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method, signatureType);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetSignatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetSignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetKeySignatures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetKeySignatures", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::get_PublicKeyPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "get_PublicKeyPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::Encode(::System::IO::Stream* outStr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::IsRevoked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                             "IsRevoked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, userAttributes, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCert", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, userAttributes);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::StringW id,
                                                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, userAttributes, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCert(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::System::Object* id,
                                                                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, id, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::AddCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "AddCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::RemoveCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key,
                                                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* certification) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(), "RemoveCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, key, certification);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                                                  ::System::DateTime time) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(algorithm, pubKey, time));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk, ::System::Collections::IList* sigs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, trustPk, sigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key, ::Org::BouncyCastle::Bcpg::TrustPacket* trust, ::System::Collections::IList* subSigs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(key, trust, subSigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(pubKey));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPk,
                                                                                                                  ::System::Collections::IList* keySigs, ::System::Collections::IList* ids,
                                                                                                                  ::System::Collections::IList* idTrusts, ::System::Collections::IList* idSigs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, trustPk, keySigs, ids, idTrusts, idSigs));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* publicPk,
                                                                                                                  ::System::Collections::IList* ids, ::System::Collections::IList* idSigs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(publicPk, ids, idSigs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey::PgpPublicKey() {}
