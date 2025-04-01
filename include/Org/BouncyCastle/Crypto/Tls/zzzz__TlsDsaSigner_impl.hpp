#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDsaSigner.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.GenerateRawSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::GenerateRawSignature)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2428074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.VerifyRawSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::VerifyRawSignature)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x24282ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.CreateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateSigner)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24284bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.CreateVerifyer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateVerifyer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24284d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.MakeInitParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (
    ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::MakeInitParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24284f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.MakeSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, bool, bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::MakeSigner)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x24284fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner.CreateDsaImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDsa* (::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateDsaImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> hash) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, algorithm, privateKey, hash);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBytes,
                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> hash) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, algorithm, sigBytes, publicKey, hash);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*, false>(this, ___internal_method, algorithm, privateKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*, false>(this, ___internal_method, algorithm, publicKey);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::MakeInitParameters(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* cp) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*, false>(this, ___internal_method, forSigning, cp);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                                                                      ::Org::BouncyCastle::Crypto::ICipherParameters* cp) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*, false>(this, ___internal_method, algorithm, raw, forSigning, cp);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::get_SignatureAlgorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::CreateDsaImpl(uint8_t hashAlgorithm) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDsa*, false>(this, ___internal_method, hashAlgorithm);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner* Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDsaSigner::TlsDsaSigner() {}
