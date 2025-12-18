#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/Asn1VerifierFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1VerifierFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x330e7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330e930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory.get_AlgorithmDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330e938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), "get_AlgorithmDetails",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory.CreateCalculator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IStreamCalculator* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x330e940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), "CreateCalculator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_get_algID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algID;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_get_algID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algID;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, publicKey);
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, publicKey);
}
inline ::System::Object* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::get_AlgorithmDetails() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), "get_AlgorithmDetails",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::CreateCalculator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>::get(), "CreateCalculator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IStreamCalculator*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*
Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>(algorithm, publicKey));
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*
Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory*>(algorithm, publicKey));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactory"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::operator ::Org::BouncyCastle::Crypto::IVerifierFactory*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifierFactory"
constexpr ::Org::BouncyCastle::Crypto::IVerifierFactory* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::i___Org__BouncyCastle__Crypto__IVerifierFactory() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactory::Asn1VerifierFactory() {}
