#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__ElGamalParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)(
    int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf6b3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator.GenerateParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* (
    ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::GenerateParameters)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xf6b404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(),
                                                 "GenerateParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf6b4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_certainty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_certainty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certainty;
}
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_set_certainty(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certainty = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const&
Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::Init(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, certainty, random);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::GenerateParameters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(),
                                               "GenerateParameters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator* Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>());
}
inline void Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::ElGamalParametersGenerator::ElGamalParametersGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
