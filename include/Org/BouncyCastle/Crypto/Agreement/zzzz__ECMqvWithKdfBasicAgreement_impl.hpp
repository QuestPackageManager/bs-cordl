#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvWithKdfBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(
    ::StringW, ::Org::BouncyCastle::Crypto::IDerivationFunction*)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x121b434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x121b4d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement.BigIntToBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::*)(
    ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::BigIntToBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x121b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), "BigIntToBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__set_algorithm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_kdf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kdf;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__get_kdf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kdf;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::__set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kdf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*
Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::New_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>(algorithm, kdf));
}
inline void Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::_ctor(::StringW algorithm, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, algorithm, kdf);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), "CalculateAgreement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, pubKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::BigIntToBytes(::Org::BouncyCastle::Math::BigInteger* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement*>::get(), "BigIntToBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, r);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECMqvWithKdfBasicAgreement::ECMqvWithKdfBasicAgreement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
