#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__DHKekGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1216dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDerivationParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::Init)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1216e24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1216ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1216ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_keySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_keySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__set_keySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySize = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_partyAInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyAInfo;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__get_partyAInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyAInfo;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::__set_partyAInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyAInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator* Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>(digest));
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, param);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::get_Digest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), "get_Digest",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator*>::get(), "GenerateBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKekGenerator::DHKekGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
