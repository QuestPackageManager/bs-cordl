#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpV3SignatureGenerator.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpV3SignatureGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpOnePassSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignature_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x34a825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.InitSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34a8330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "InitSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.InitSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x34a8338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "InitSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x34a85a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doCanonicalUpdateByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doCanonicalUpdateByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x34a85b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doCanonicalUpdateByte",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doUpdateCRLF
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateCRLF)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34a8754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doUpdateCRLF",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.doUpdateByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(uint8_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateByte)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x34a861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doUpdateByte",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x34a8774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x34a8920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.GenerateOnePassVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)(bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::GenerateOnePassVersion)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x34a8acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "GenerateOnePassVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Generate)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x34a8b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Generate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_keyAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_keyAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_privKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_privKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privKey;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_privKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_sig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr ::Org::BouncyCastle::Crypto::ISigner* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_sig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_sig(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_dig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dig;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_dig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dig;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_dig(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_signatureType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_signatureType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signatureType;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_signatureType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signatureType = value;
}
constexpr uint8_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_lastb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr uint8_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_get_lastb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastb;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::__cordl_internal_set_lastb(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastb = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyAlgorithm, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "InitSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigType, key);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::InitSign(int32_t sigType, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* key,
                                                                                ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "InitSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sigType, key, random);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doCanonicalUpdateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doCanonicalUpdateByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateCRLF() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doUpdateCRLF",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::doUpdateByte(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "doUpdateByte",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Update(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b, off, len);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::GenerateOnePassVersion(bool isNested) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "GenerateOnePassVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpOnePassSignature*, false>(this, ___internal_method, isNested);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::Generate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>::get(), "Generate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                                                                                        ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator*>(keyAlgorithm, hashAlgorithm));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpV3SignatureGenerator::PgpV3SignatureGenerator() {}
