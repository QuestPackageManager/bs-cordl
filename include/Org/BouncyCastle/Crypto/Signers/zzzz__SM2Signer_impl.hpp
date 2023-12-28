#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__SM2Signer_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaKCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECKeyParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf577e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xf578f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xf57968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*, ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf57878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf579dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::Init)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0xf57a1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::Update)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xf581e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.BlockUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xf5828c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xf58350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xf58738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.GenerateSignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xf5886c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.VerifySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xf584d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.GetZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xf58070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "GetZ", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.AddUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xf58d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "AddUserID", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.AddFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xf58ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "AddFieldElement", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.CalculateE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xf58fc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::SM2Signer.CreateBasePointMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* (::Org::BouncyCastle::Crypto::Signers::SM2Signer::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xf5902c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), 19));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::SM2Signer::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_kCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_kCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kCalculator;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_kCalculator(::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kCalculator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encoding)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_ecParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecParams;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_ecParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecParams;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_ecParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ecParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_pubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubPoint;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_pubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_pubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pubPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_ecKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_ecKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ecKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_ecKey(::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ecKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Signers::SM2Signer::__get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Crypto::Signers::SM2Signer::__set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>());
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(digest));
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(encoding));
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Crypto::Signers::SM2Signer* Org::BouncyCastle::Crypto::Signers::SM2Signer::New_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding,
                                                                                                                ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>(encoding, digest));
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::_ctor(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding, digest);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::SM2Signer::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Update(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "BlockUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf, off, len);
}
inline bool Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::SM2Signer::GenerateSignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                                             "GenerateSignature", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::SM2Signer::VerifySignature(::Org::BouncyCastle::Math::BigInteger* r, ::Org::BouncyCastle::Math::BigInteger* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "VerifySignature", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, r, s);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Signers::SM2Signer::GetZ(::ArrayW<uint8_t, ::Array<uint8_t>*> userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "GetZ", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, userID);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "AddUserID", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, userID);
}
inline void Org::BouncyCastle::Crypto::Signers::SM2Signer::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "AddFieldElement", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, v);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::SM2Signer::CalculateE(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t, ::Array<uint8_t>*> message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(), "CalculateE", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, n, message);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* Org::BouncyCastle::Crypto::Signers::SM2Signer::CreateBasePointMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Signers::SM2Signer*>::get(),
                                                                             "CreateBasePointMultiplier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::SM2Signer::SM2Signer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
