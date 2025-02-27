#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Mozilla/PublicKeyAndChallenge.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Mozilla/zzzz__PublicKeyAndChallenge_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectPublicKeyInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::GetInstance)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2407714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2407894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2407900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.get_SubjectPublicKeyInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* (
    ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(&::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_SubjectPublicKeyInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2407908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), "get_SubjectPublicKeyInfo",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge.get_Challenge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerIA5String* (::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::*)()>(
    &::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_Challenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2407910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), "get_Challenge",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_pkacSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkacSeq;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_pkacSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkacSeq;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_pkacSeq(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pkacSeq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_spki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spki;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_spki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spki;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_spki(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___spki)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_challenge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr ::Org::BouncyCastle::Asn1::DerIA5String* const& Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_get_challenge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___challenge;
}
constexpr void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::__cordl_internal_set_challenge(::Org::BouncyCastle::Asn1::DerIA5String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___challenge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), "GetInstance",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_SubjectPublicKeyInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(),
                                                                             "get_SubjectPublicKeyInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerIA5String* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::get_Challenge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>::get(),
                                                                             "get_Challenge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerIA5String*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge* Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Mozilla::PublicKeyAndChallenge::PublicKeyAndChallenge() {}
