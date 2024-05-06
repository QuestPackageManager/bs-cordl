#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__ECDsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11a55a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*)>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11a5614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11a5640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::Init)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x11a5680;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.get_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_Order)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x11a590c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> (
    ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x11a5930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x11a5db0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.CalculateE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
        &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CalculateE)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x11a6138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.CreateBasePointMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CreateBasePointMultiplier)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11a61f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.GetDenominator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (
    ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(int32_t, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GetDenominator)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11a6254;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner.InitSecureRandom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (
    ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::*)(bool, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::InitSecureRandom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11a62e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 17));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr Org::BouncyCastle::Crypto::Signers::ECDsaSigner::operator ::Org::BouncyCastle::Crypto::IDsaExt*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsaExt"
constexpr ::Org::BouncyCastle::Crypto::IDsaExt* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::i___Org__BouncyCastle__Crypto__IDsaExt() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDsa"
constexpr Org::BouncyCastle::Crypto::Signers::ECDsaSigner::operator ::Org::BouncyCastle::Crypto::IDsa*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDsa"
constexpr ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::i___Org__BouncyCastle__Crypto__IDsa() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDsa*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_kCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> const& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_kCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kCalculator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::setStaticF_Eight(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Eight", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::getStaticF_Eight() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Eight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>());
}
inline void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>(kCalculator));
}
inline void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kCalculator);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_AlgorithmName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::ECDsaSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forSigning, parameters);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::get_Order() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GenerateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>, false>(this, ___internal_method, message);
}
inline bool Org::BouncyCastle::Crypto::Signers::ECDsaSigner::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::Org::BouncyCastle::Math::BigInteger* r,
                                                                             ::Org::BouncyCastle::Math::BigInteger* s) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message, r, s);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, n, message);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::CreateBasePointMultiplier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::GetDenominator(int32_t coordinateSystem, ::Org::BouncyCastle::Math::EC::ECPoint* p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*, false>(this, ___internal_method, coordinateSystem, p);
}
inline ::Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Crypto::Signers::ECDsaSigner::InitSecureRandom(bool needed, ::Org::BouncyCastle::Security::SecureRandom* provided) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::ECDsaSigner*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Security::SecureRandom*, false>(this, ___internal_method, needed, provided);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::ECDsaSigner::ECDsaSigner() {}
