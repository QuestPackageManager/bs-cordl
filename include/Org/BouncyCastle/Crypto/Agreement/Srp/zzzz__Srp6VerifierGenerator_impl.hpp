#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Srp/Srp6VerifierGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Srp/zzzz__Srp6VerifierGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Srp6GroupParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x268c1b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x268c1c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(
    ::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x268c1cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator.GenerateVerifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::GenerateVerifier)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x268c1f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_N() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_N() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___N;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_set_N(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___N)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___g)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                   ::Org::BouncyCastle::Crypto::IDigest* digest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, N, g, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Init(::Org::BouncyCastle::Crypto::Parameters::Srp6GroupParameters* group, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group, digest);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::GenerateVerifier(::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> identity,
                                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> password) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, salt, identity, password);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator* Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Srp::Srp6VerifierGenerator::Srp6VerifierGenerator() {}
