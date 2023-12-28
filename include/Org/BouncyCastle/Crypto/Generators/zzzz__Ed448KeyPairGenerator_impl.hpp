#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Ed448KeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::*)(
    ::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xefa280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (
    ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xefa29c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xefa34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::__get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::__get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::__set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::GenerateKeyPair() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), "GenerateKeyPair",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator* Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Ed448KeyPairGenerator::Ed448KeyPairGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
