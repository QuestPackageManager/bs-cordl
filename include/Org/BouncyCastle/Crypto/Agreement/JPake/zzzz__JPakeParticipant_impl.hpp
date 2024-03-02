#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeParticipant_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakePrimeOrderGroup_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound1Payload_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound2Payload_def.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/JPake/zzzz__JPakeRound3Payload_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1283f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*)>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1283fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(
    ::StringW, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*, ::Org::BouncyCastle::Crypto::IDigest*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x12840a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1284338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.CreateRound1PayloadToSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* (
    ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)()>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound1PayloadToSend)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x1284340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.ValidateRound1PayloadReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(
    ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound1PayloadReceived)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x1284a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.CreateRound2PayloadToSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* (
    ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)()>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound2PayloadToSend)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1284fa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.ValidateRound2PayloadReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(
    ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*)>(&::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound2PayloadReceived)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1285418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.CalculateKeyingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CalculateKeyingMaterial)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x12858a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.CreateRound3PayloadToSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound3PayloadToSend)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1285adc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant.ValidateRound3PayloadReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::*)(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound3PayloadReceived)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x1285f18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_participantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_participantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___participantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_participantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___participantId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_password() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_password() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___password;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_password(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___password)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_p(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___p)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_q(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___q)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___g)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_partnerParticipantId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partnerParticipantId;
}
constexpr ::StringW const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_partnerParticipantId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partnerParticipantId;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_partnerParticipantId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partnerParticipantId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_x1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x1;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_x1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x1;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_x1(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_x2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x2;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_x2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x2;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_x2(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___x2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx1;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx1;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_gx1(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gx1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx2;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx2;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_gx2(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gx2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx3;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx3;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_gx3(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gx3)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx4;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_gx4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gx4;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_gx4(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gx4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_b(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___b)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::__cordl_internal_set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_INITIALIZED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_INITIALIZED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_INITIALIZED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_INITIALIZED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_1_CREATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_1_CREATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_1_CREATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_1_CREATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_1_VALIDATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_1_VALIDATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_1_VALIDATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_1_VALIDATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_2_CREATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_2_CREATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_2_CREATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_2_CREATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_2_VALIDATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_2_VALIDATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_2_VALIDATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_2_VALIDATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_KEY_CALCULATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_KEY_CALCULATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_KEY_CALCULATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_KEY_CALCULATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_3_CREATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_3_CREATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_3_CREATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_3_CREATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::setStaticF_STATE_ROUND_3_VALIDATED(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "STATE_ROUND_3_VALIDATED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::getStaticF_STATE_ROUND_3_VALIDATED() {
  return ::cordl_internals::getStaticField<int32_t, "STATE_ROUND_3_VALIDATED",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::New_ctor(::StringW participantId,
                                                                                                                                                ::ArrayW<char16_t, ::Array<char16_t>*> password) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>(participantId, password));
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId, password);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::New_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                        ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>(participantId, password, group));
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                 ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId, password, group);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::New_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                        ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                        ::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>(participantId, password, group, digest, random));
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::_ctor(::StringW participantId, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                 ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* group,
                                                                                 ::Org::BouncyCastle::Crypto::IDigest* digest, ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, participantId, password, group, digest, random);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::get_State() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound1PayloadToSend() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound1PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound1Payload* round1PayloadReceived) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, round1PayloadReceived);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound2PayloadToSend() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound2PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound2Payload* round2PayloadReceived) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, round2PayloadReceived);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CalculateKeyingMaterial() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*
Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::CreateRound3PayloadToSend(::Org::BouncyCastle::Math::BigInteger* keyingMaterial) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload*, false>(this, ___internal_method, keyingMaterial);
}
inline void Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::ValidateRound3PayloadReceived(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeRound3Payload* round3PayloadReceived,
                                                                                                         ::Org::BouncyCastle::Math::BigInteger* keyingMaterial) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, round3PayloadReceived, keyingMaterial);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakeParticipant::JPakeParticipant() {}
