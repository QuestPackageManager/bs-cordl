#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUserAttributeSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignaturePacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Cast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SignaturePacket* (*)(::Org::BouncyCastle::Bcpg::Packet*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1138f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Packet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x113902c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::SignaturePacket*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1139060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignaturePacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::SignaturePacket*, ::Org::BouncyCastle::Bcpg::TrustPacket*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1139068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignaturePacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11390f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetSig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11392ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1139308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_KeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::HashAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1139324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1139340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "IsCertification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.InitVerify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1139394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "InitVerify", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1139538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doCanonicalUpdateByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1139604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "doCanonicalUpdateByte",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.doUpdateCRLF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x11396e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "doUpdateCRLF", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11397f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1139810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Verify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1139924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "Verify", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithIdData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1139d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "UpdateWithIdData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.UpdateWithPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1139e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "UpdateWithPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1139fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x113a260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x113a368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.VerifyCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x113a460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_SignatureType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1139368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_SignatureType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_KeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x113a5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetCreationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x113a5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_CreationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x113a5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_CreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignatureTrailer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1139a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetSignatureTrailer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.get_HasSubpackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x113a62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "get_HasSubpackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetHashedSubPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x113a660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetHashedSubPackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetUnhashedSubPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x113a6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetUnhashedSubPackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.createSubpacketVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x113a67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "createSubpacketVector", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1139a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x113a730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                               "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1132d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.GetEncodedPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1139ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "GetEncodedPublicKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature.IsCertification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1139384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "IsCertification",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SignaturePacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sigPck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPck;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SignaturePacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sigPck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sigPck;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_sigPck(::Org::BouncyCastle::Bcpg::SignaturePacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sigPck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_signatureType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_signatureType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_signatureType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureType = value;
}
constexpr ::Org::BouncyCastle::Bcpg::TrustPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_trustPck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPck;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::TrustPacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_trustPck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___trustPck;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_trustPck(::Org::BouncyCastle::Bcpg::TrustPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___trustPck)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_lastb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_get_lastb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::__cordl_internal_set_lastb(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastb = value;
}
inline ::Org::BouncyCastle::Bcpg::SignaturePacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Cast(::Org::BouncyCastle::Bcpg::Packet* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Cast", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::Packet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignaturePacket*, false>(nullptr, ___internal_method, packet);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(bcpgInput));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgInput) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgInput);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(sigPacket));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignaturePacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigPacket);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::New_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket,
                                                                                                                  ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>(sigPacket, trustPacket));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::_ctor(::Org::BouncyCastle::Bcpg::SignaturePacket* sigPacket, ::Org::BouncyCastle::Bcpg::TrustPacket* trustPacket) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignaturePacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::TrustPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigPacket, trustPacket);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "GetSig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_KeyAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::HashAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::HashAlgorithmTag, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "IsCertification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::InitVerify(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "InitVerify", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doCanonicalUpdateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "doCanonicalUpdateByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::doUpdateCRLF() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "doUpdateCRLF", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes, off, length);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Verify() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Verify",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithIdData(int32_t header, ::ArrayW<uint8_t, ::Array<uint8_t>*> idBytes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "UpdateWithIdData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header, idBytes);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::UpdateWithPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "UpdateWithPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* userAttributes,
                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, userAttributes, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, key);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* masterKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, masterKey, pubKey);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::VerifyCertification(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "VerifyCertification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pubKey);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_SignatureType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_SignatureType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_KeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetCreationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_CreationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_CreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignatureTrailer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetSignatureTrailer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::get_HasSubpackets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "get_HasSubpackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetHashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetHashedSubPackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetUnhashedSubPackets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetUnhashedSubPackets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::createSubpacketVector(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> pcks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "createSubpacketVector", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, false>(this, ___internal_method, pcks);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetSignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(),
                                                                             "GetEncoded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::Encode(::System::IO::Stream* outStream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "Encode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStream);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::GetEncodedPublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "GetEncodedPublicKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, pubKey);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::IsCertification(int32_t signatureType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*>::get(), "IsCertification",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, signatureType);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature::PgpSignature() {}
