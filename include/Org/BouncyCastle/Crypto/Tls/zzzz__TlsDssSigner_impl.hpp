#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsDssSigner.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDssSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.IsValidPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2428764;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.CreateDsaImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDsa* (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x24287dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242889c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24255bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl(uint8_t hashAlgorithm) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDsa*, false>(this, ___internal_method, hashAlgorithm);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner* Org::BouncyCastle::Crypto::Tls::TlsDssSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::TlsDssSigner() {}
