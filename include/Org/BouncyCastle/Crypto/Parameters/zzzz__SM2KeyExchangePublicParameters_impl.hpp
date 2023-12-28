#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xf3b730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_StaticPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3b82c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters.get_EphemeralPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf3b834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(), 5));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mStaticPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const&
Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mStaticPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__set_mStaticPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mStaticPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*& Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mEphemeralPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPublicKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*> const&
Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__get_mEphemeralPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::__set_mEphemeralPublicKey(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEphemeralPublicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*
Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>(staticPublicKey, ephemeralPublicKey));
}
inline void Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* staticPublicKey,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ephemeralPublicKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, staticPublicKey, ephemeralPublicKey);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_StaticPublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(),
                                               "get_StaticPublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::get_EphemeralPublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*>::get(),
                                               "get_EphemeralPublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters::SM2KeyExchangePublicParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
