#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/DHBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__DHBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x268db98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.GetFieldSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x268dcd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement.CalculateAgreement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x268dd14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268df80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* const& Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters*& Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_get_dhParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dhParams;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::DHParameters* const& Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_get_dhParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dhParams;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::__cordl_internal_set_dhParams(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dhParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::GetFieldSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::CalculateAgreement(::Org::BouncyCastle::Crypto::ICipherParameters* pubKey) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, pubKey);
}
inline void Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::operator ::Org::BouncyCastle::Crypto::IBasicAgreement*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IBasicAgreement"
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::i___Org__BouncyCastle__Crypto__IBasicAgreement() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IBasicAgreement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement::DHBasicAgreement() {}
