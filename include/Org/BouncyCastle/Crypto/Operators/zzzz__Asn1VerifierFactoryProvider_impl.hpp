#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__Asn1VerifierFactoryProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactoryProvider_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf2d060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.CreateVerifierFactory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IVerifierFactory* (
    ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)(::System::Object*)>(&::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf2d088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(), "CreateVerifierFactory",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider.get_SignatureAlgNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::*)()>(
    &::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xf2d14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(),
                                                 "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifierFactoryProvider"
constexpr Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::operator ::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifierFactoryProvider*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> const& Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::__set_publicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*
Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>(publicKey));
}
inline void Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::IVerifierFactory* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::CreateVerifierFactory(::System::Object* algorithmDetails) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(), "CreateVerifierFactory",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IVerifierFactory*, false>(this, ___internal_method, algorithmDetails);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::get_SignatureAlgNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider*>::get(),
                                               "get_SignatureAlgNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::Asn1VerifierFactoryProvider::Asn1VerifierFactoryProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
