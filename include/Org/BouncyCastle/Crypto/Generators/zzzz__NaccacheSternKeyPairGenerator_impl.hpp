#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__NaccacheSternKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricCipherKeyPairGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)(
    ::Org::BouncyCastle::Crypto::KeyGenerationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::Init)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x106ab40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* (
    ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::GenerateKeyPair)> {
  constexpr static std::size_t size = 0xf74;
  constexpr static std::size_t addrs = 0x106abe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(),
                                                 "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.generatePrime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::generatePrime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x106c180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "generatePrime",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.permuteList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::Collections::IList*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::permuteList)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x106bcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "permuteList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator.findFirstPrimes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::findFirstPrimes)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x106bb58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "findFirstPrimes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x106c290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::operator ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*
Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::i___Org__BouncyCastle__Crypto__IAsymmetricCipherKeyPairGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*& Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters*> const&
Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___param)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::setStaticF_smallPrimes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "smallPrimes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::getStaticF_smallPrimes() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "smallPrimes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get>();
}
inline void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::Init(::Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::GenerateKeyPair() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(),
                                               "GenerateKeyPair", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::generatePrime(int32_t bitLength, int32_t certainty,
                                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "generatePrime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(nullptr, ___internal_method, bitLength, certainty, rand);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::permuteList(::System::Collections::IList* arr,
                                                                                                                       ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "permuteList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, arr, rand);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::findFirstPrimes(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), "findFirstPrimes",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*, false>(nullptr, ___internal_method, count);
}
inline ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator* Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator::NaccacheSternKeyPairGenerator() {}
