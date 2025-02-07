#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/RsaOaepWrapperProvider.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__WrapperProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__RsaOaepWrapperProvider_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23b2624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider.Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
        &::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23b2d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>::get(),
                                                 "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_get_digestOid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOid;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_get_digestOid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestOid;
}
constexpr void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::__cordl_internal_set_digestOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestOid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestOid);
}
inline ::System::Object*
Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::Org_BouncyCastle_Crypto_Operators_WrapperProvider_CreateWrapper(bool forWrapping,
                                                                                                                              ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>::get(),
                                               "Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, forWrapping, parameters);
}
inline ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*
Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider*>(digestOid));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
constexpr Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::operator ::Org::BouncyCastle::Crypto::Operators::WrapperProvider*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Operators::WrapperProvider"
constexpr ::Org::BouncyCastle::Crypto::Operators::WrapperProvider* Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::i___Org__BouncyCastle__Crypto__Operators__WrapperProvider() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Operators::WrapperProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::RsaOaepWrapperProvider::RsaOaepWrapperProvider() {}
