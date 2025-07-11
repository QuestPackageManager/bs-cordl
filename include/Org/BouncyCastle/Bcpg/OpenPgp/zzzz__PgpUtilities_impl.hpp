#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpUtilities_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MPInteger_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__FileInfo_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254d31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.DsaSigToMpi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DsaSigToMpi)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x254a0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "DsaSigToMpi", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.RsaSigToMpi
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::RsaSigToMpi)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x254a314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "RsaSigToMpi", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetDigestName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDigestName)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x253949c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetDigestName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetSignatureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSignatureName)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2547b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetSymmetricCipherName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSymmetricCipherName)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2539300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetSymmetricCipherName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetKeySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetKeySize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x254d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetKeySize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x254d3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeRandomKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeRandomKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x254d438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeRandomKey", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.EncodePassPhrase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::ArrayW<char16_t, ::Array<char16_t>*>, bool)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::EncodePassPhrase)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x253df84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "EncodePassPhrase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhrase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*,
                                                                           ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhrase)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254d4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhrase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhraseUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*,
                                                                           ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseUtf8)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x254d510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhraseUtf8", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.MakeKeyFromPassPhraseRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254d548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhraseRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.DoMakeKeyFromPassPhrase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                           bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DoMakeKeyFromPassPhrase)> {
  constexpr static std::size_t size = 0x960;
  constexpr static std::size_t addrs = 0x253f584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "DoMakeKeyFromPassPhrase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.WriteFileToLiteralData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, char16_t, ::System::IO::FileInfo*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x254d550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "WriteFileToLiteralData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.WriteFileToLiteralData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, char16_t, ::System::IO::FileInfo*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x254d800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "WriteFileToLiteralData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.PipeFileContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::FileInfo*, ::System::IO::Stream*, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PipeFileContents)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x254d624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "PipeFileContents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.IsPossiblyBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::IsPossiblyBase64)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x254d8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "IsPossiblyBase64",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GetDecoderStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDecoderStream)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x254d918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetDecoderStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.CreateWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IWrapper* (*)(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::CreateWrapper)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25396c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "CreateWrapper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GenerateIV
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateIV)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x25421e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GenerateIV", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities.GenerateS2k
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::S2k* (*)(::Org::BouncyCastle::Bcpg::HashAlgorithmTag, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateS2k)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x254215c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GenerateS2k", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "DsaSigToMpi", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>, false>(nullptr, ___internal_method, encoding);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::RsaSigToMpi(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "RsaSigToMpi", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::MPInteger*, ::Array<::Org::BouncyCastle::Bcpg::MPInteger*>*>, false>(nullptr, ___internal_method, encoding);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDigestName(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetDigestName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSignatureName(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetSignatureName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, keyAlgorithm, hashAlgorithm);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetSymmetricCipherName(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetSymmetricCipherName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, algorithm);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetKeySize(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetKeySize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, algorithm);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, keyBytes);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeRandomKey(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeRandomKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, random);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::EncodePassPhrase(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool utf8) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "EncodePassPhrase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, passPhrase, utf8);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                                    ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                                                    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhrase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, s2k, passPhrase);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseUtf8(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                                        ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                                                        ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhraseUtf8", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, s2k, passPhrase);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::MakeKeyFromPassPhraseRaw(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                                       ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "MakeKeyFromPassPhraseRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, s2k, rawPassPhrase);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::DoMakeKeyFromPassPhrase(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algorithm,
                                                                                                                                      ::Org::BouncyCastle::Bcpg::S2k* s2k,
                                                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                                                                      bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "DoMakeKeyFromPassPhrase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::S2k*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, false>(nullptr, ___internal_method, algorithm, s2k, rawPassPhrase, clearPassPhrase);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "WriteFileToLiteralData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, fileType, file);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::WriteFileToLiteralData(::System::IO::Stream* output, char16_t fileType, ::System::IO::FileInfo* file,
                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "WriteFileToLiteralData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, output, fileType, file, buffer);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PipeFileContents(::System::IO::FileInfo* file, ::System::IO::Stream* pOut, int32_t bufSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(),
                                                                             "PipeFileContents", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileInfo*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, file, pOut, bufSize);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::IsPossiblyBase64(int32_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "IsPossiblyBase64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline ::System::IO::Stream* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GetDecoderStream(::System::IO::Stream* inputStream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GetDecoderStream",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(nullptr, ___internal_method, inputStream);
}
inline ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::CreateWrapper(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "CreateWrapper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IWrapper*, false>(nullptr, ___internal_method, encAlgorithm);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateIV(int32_t length, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GenerateIV", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, length, random);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::GenerateS2k(::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, int32_t s2kCount,
                                                                                                   ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>::get(), "GenerateS2k", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*, false>(nullptr, ___internal_method, hashAlgorithm, s2kCount, random);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities* Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUtilities::PgpUtilities() {}
