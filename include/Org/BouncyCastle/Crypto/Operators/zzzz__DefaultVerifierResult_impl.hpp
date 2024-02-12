#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultVerifierResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifier_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::Org::BouncyCastle::Crypto::ISigner*)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xf58db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf58de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult.IsVerified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xf58e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifier"
constexpr Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::operator ::Org::BouncyCastle::Crypto::IVerifier*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IVerifier"
constexpr ::Org::BouncyCastle::Crypto::IVerifier* Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::i___Org__BouncyCastle__Crypto__IVerifier() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IVerifier*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::ISigner*& Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_get_mSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_get_mSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::__cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mSigner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult* Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>(signer));
}
inline void Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::_ctor(::Org::BouncyCastle::Crypto::ISigner* signer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, signer);
}
inline bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signature);
}
inline bool Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, int32_t sigLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*>::get(), "IsVerified", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sig, sigOff, sigLen);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult::DefaultVerifierResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
