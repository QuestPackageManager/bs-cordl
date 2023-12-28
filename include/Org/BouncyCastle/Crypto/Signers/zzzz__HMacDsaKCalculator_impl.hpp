#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__HMacDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xf4e4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.get_IsDeterministic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::get_IsDeterministic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf4e594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xf4e59c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0xf4e5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.NextK
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::NextK)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xf4ead8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator.BitsToInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::BitsToInt)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xf4ea10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), "BitsToInt", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator"
constexpr Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_hMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Macs::HMac*> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_hMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMac;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__set_hMac(::Org::BouncyCastle::Crypto::Macs::HMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hMac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_K() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_K() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___K;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__set_K(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___K)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_V() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_V() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___V;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__set_V(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___V)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::__set_n(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___n)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>(digest));
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline bool Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::get_IsDeterministic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(),
                                                                             "get_IsDeterministic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, random);
}
inline void Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), "Init", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, d, message);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::NextK() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(),
                                                                             "NextK", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::BitsToInt(::ArrayW<uint8_t, ::Array<uint8_t>*> t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator*>::get(), "BitsToInt", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::HMacDsaKCalculator::HMacDsaKCalculator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
