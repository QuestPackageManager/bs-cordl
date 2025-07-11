#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/DefaultPKMacPrimitivesProvider.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IPKMacPrimitivesProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacPrimitivesProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateDigest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (
    ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2684c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(), "CreateDigest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider.CreateMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IMac* (
    ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)>(&::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2684cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(), "CreateMac", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::*)()>(
    &::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2684d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateDigest(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(), "CreateDigest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method, digestAlg);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::CreateMac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(), "CreateMac", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*, false>(this, ___internal_method, macAlg);
}
inline void Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
constexpr Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::operator ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider"
constexpr ::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::i___Org__BouncyCastle__Crmf__IPKMacPrimitivesProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::DefaultPKMacPrimitivesProvider::DefaultPKMacPrimitivesProvider() {}
