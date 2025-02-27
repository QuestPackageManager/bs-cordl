#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/RsaBlindingParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaBlindingParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)(
    ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23c54b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_PublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), "get_PublicKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters.get_BlindingFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23c5544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), "get_BlindingFactor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_blindingFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_get_blindingFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::__cordl_internal_set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blindingFactor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey,
                                                                                ::Org::BouncyCastle::Math::BigInteger* blindingFactor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, publicKey, blindingFactor);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_PublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), "get_PublicKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::get_BlindingFactor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>::get(), "get_BlindingFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*
Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::New_ctor(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* publicKey, ::Org::BouncyCastle::Math::BigInteger* blindingFactor) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters*>(publicKey, blindingFactor));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaBlindingParameters::RsaBlindingParameters() {}
