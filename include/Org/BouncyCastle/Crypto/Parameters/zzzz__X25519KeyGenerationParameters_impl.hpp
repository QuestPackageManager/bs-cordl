#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/X25519KeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__X25519KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23bfa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, random);
}
inline ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters*>(random));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::X25519KeyGenerationParameters::X25519KeyGenerationParameters() {}
