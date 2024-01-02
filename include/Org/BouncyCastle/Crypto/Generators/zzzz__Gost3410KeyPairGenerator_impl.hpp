#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Gost3410KeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)(
    ::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xefa688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (
    ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xefa7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), "GenerateKeyPair",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xefa9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*& Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::__get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*> const&
Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::__get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::__set_param(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___param)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::GenerateKeyPair() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), "GenerateKeyPair",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator* Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Gost3410KeyPairGenerator::Gost3410KeyPairGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
