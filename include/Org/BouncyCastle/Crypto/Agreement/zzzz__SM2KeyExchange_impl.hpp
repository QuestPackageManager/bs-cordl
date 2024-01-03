#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/zzzz__SM2KeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__SM2KeyExchangePublicParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x121b790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x121b7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x121b824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    int32_t, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x121b9f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateKeyWithConfirmation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> (
    ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x121bd1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateU
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters*)>(
        &::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x121c6c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Kdf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x121c944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.Reduce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x121c890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "Reduce", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x121c3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "S1", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.CalculateInnerHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Math::EC::ECPoint*,
    ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x121c1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "CalculateInnerHash", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.S2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x121c550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "S2", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.GetZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x121bbbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "GetZ", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddUserID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x121d068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "AddUserID", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange.AddFieldElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, ::Org::BouncyCastle::Math::EC::ECFieldElement*)>(&::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x121cf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "AddFieldElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mUserID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUserID;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mUserID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mUserID;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mUserID(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mUserID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mStaticKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mStaticKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticPubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPubPoint;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mStaticPubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mStaticPubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mStaticPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mStaticPubPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralPubPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPubPoint;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralPubPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralPubPoint;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mEphemeralPubPoint(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEphemeralPubPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mECParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*> const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mECParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mECParams;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mECParams(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mECParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mW() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mW;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mW() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mW;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mW(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mW = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*> const&
Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mEphemeralKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEphemeralKey;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mEphemeralKey(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mEphemeralKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mInitiator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitiator;
}
constexpr bool const& Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__get_mInitiator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInitiator;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::__set_mInitiator(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInitiator = value;
}
inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>());
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>(digest));
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Init(::Org::BouncyCastle::Crypto::ICipherParameters* privParam) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privParam);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKey(int32_t kLen, ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, kLen, pubParam);
}
inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>
Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateKeyWithConfirmation(int32_t kLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> confirmationTag,
                                                                                   ::Org::BouncyCastle::Crypto::ICipherParameters* pubParam) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>, false>(this, ___internal_method, kLen, confirmationTag,
                                                                                                                                                    pubParam);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateU(::Org::BouncyCastle::Crypto::Parameters::SM2KeyExchangePublicParameters* otherPub) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*, false>(this, ___internal_method, otherPub);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Kdf(::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za,
                                                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> zb, int32_t klen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, u, za, zb, klen);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::Reduce(::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "Reduce", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method, x);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S1(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u,
                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> inner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "S1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, digest, u, inner);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::CalculateInnerHash(::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPoint* u, ::ArrayW<uint8_t, ::Array<uint8_t>*> za,
                                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> zb,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPoint* p1,
                                                                                                                     ::Org::BouncyCastle::Math::EC::ECPoint* p2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "CalculateInnerHash", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, digest, u, za, zb, p1, p2);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::S2(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECPoint* u,
                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> inner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "S2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, digest, u, inner);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::GetZ(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID,
                                                                                                       ::Org::BouncyCastle::Math::EC::ECPoint* pubPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "GetZ", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, digest, userID, pubPoint);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddUserID(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t, ::Array<uint8_t>*> userID) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "AddUserID", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, userID);
}
inline void Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::AddFieldElement(::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Math::EC::ECFieldElement* v) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange*>::get(), "AddFieldElement", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECFieldElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest, v);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::SM2KeyExchange::SM2KeyExchange() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
