#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/ECMqvBasicAgreement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__ECMqvBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__MqvPrivateParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)(
    ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::Init)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x26599bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.GetFieldSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2659aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2659b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement.CalculateMqvAgreement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*,
                                                            ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*,
                                                            ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateMqvAgreement)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2659d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), "CalculateMqvAgreement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2659f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*& Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_get_privParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParams;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters*> const&
Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_get_privParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParams;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::__cordl_internal_set_privParams(::Org::BouncyCastle::Crypto::Parameters::MqvPrivateParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::GetFieldSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, pubKey);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::CalculateMqvAgreement(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d1U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* d2U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2U,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q1V,
                                                                                                                                ::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Q2V) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), "CalculateMqvAgreement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(nullptr, ___internal_method, parameters, d1U, d2U, Q2U, Q1V, Q2V);
}
inline ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement* Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>());
}
inline void Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::ECMqvBasicAgreement::ECMqvBasicAgreement() {}
