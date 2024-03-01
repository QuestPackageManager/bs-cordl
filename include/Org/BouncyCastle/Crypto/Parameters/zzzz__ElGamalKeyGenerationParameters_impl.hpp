#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xfa543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa54ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(),
                                                 "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.GetStrength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xfa5478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(), "GetStrength",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*& Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*> const&
Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(random, parameters));
}
inline void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, random, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(),
                                               "get_Parameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>::get(), "GetStrength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, parameters);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::ElGamalKeyGenerationParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
