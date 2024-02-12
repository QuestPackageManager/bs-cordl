#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__Features_def.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__NotationData_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x10f7738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSubpacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::SignatureSubpacket* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpacket)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10fa818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSubpacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.HasSubpacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(
    ::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSubpacket)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x10fa870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "HasSubpacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSubpackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpackets)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x10fa888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSubpackets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetNotationDataOccurrences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*> (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurrences)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x10fa9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetNotationDataOccurrences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetNotationDataOccurences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*> (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurences)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x10fab2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetNotationDataOccurences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetIssuerKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetIssuerKeyId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetIssuerKeyId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.HasSignatureCreationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSignatureCreationTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fabc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "HasSignatureCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignatureCreationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureCreationTime)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x10fabdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetSignatureCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignatureExpirationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureExpirationTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10facac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetSignatureExpirationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetKeyExpirationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyExpirationTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fad3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetKeyExpirationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredHashAlgorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredHashAlgorithms)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fadcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetPreferredHashAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredSymmetricAlgorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredSymmetricAlgorithms)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fae5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetPreferredSymmetricAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetPreferredCompressionAlgorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredCompressionAlgorithms)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10faeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                 "GetPreferredCompressionAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetKeyFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyFlags)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10faf7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetKeyFlags",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetSignerUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignerUserId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fb00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSignerUserId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.IsPrimaryUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::IsPrimaryUserId)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10fb09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "IsPrimaryUserId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetCriticalTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetCriticalTags)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x10fb12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetCriticalTags",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.GetFeatures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::Sig::Features* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetFeatures)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x10fb224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetFeatures",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.get_Size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Size)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fb2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "get_Size",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10fb2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "get_Count",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector.ToSubpacketArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::ToSubpacketArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10fb308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "ToSubpacketArray",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>&
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_get_packets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> const&
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_get_packets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packets;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::__cordl_internal_set_packets(
    ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___packets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>(packets));
}
inline void
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*> packets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packets);
}
inline ::Org::BouncyCastle::Bcpg::SignatureSubpacket* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSubpacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, false>(this, ___internal_method, type);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSubpacket(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "HasSubpacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSubpackets(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSubpackets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>, false>(this, ___internal_method, type);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurrences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetNotationDataOccurrences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetNotationDataOccurences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetNotationDataOccurences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::Sig::NotationData*, ::Array<::Org::BouncyCastle::Bcpg::Sig::NotationData*>*>, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetIssuerKeyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetIssuerKeyId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::HasSignatureCreationTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "HasSignatureCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureCreationTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetSignatureCreationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignatureExpirationTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetSignatureExpirationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyExpirationTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetKeyExpirationTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredHashAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetPreferredHashAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredSymmetricAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetPreferredSymmetricAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetPreferredCompressionAlgorithms() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                               "GetPreferredCompressionAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetKeyFlags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetKeyFlags",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetSignerUserId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetSignerUserId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::IsPrimaryUserId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "IsPrimaryUserId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetCriticalTags() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetCriticalTags",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacketTag>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::Features* Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::GetFeatures() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "GetFeatures",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Sig::Features*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Size() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "get_Size",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::ToSubpacketArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(), "ToSubpacketArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Bcpg::SignatureSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::SignatureSubpacket*>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector::PgpSignatureSubpacketVector() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
