#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TimeStampReq.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__TimeStampReq_def.hpp"
#include "Org/BouncyCastle/Asn1/Tsp/zzzz__MessageImprint_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Extensions_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBoolean_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24fa9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), "GetInstance",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x24faa54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)(
    ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::DerInteger*, ::Org::BouncyCastle::Asn1::DerBoolean*,
    ::Org::BouncyCastle::Asn1::X509::X509Extensions*)>(&::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24fad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBoolean*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_MessageImprint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Tsp::MessageImprint* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_MessageImprint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_MessageImprint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_ReqPolicy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_ReqPolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_ReqPolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Nonce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Nonce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_Nonce", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_CertReq
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerBoolean* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_CertReq)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_CertReq", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.get_Extensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Extensions* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24fae5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                               "get_Extensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::*)()>(
    &::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x24fae64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_messageImprint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_messageImprint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___messageImprint;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___messageImprint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_tsaPolicy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicy;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_tsaPolicy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tsaPolicy;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_tsaPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tsaPolicy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_nonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_nonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nonce;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nonce)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_certReq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_certReq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certReq;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certReq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_get_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensions;
}
constexpr void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::__cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*, false>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Tsp::TimeStampReq::_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                              ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                              ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerBoolean*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Extensions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageImprint, tsaPolicy, nonce, certReq, extensions);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_MessageImprint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                             "get_MessageImprint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_ReqPolicy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                             "get_ReqPolicy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Nonce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), "get_Nonce",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBoolean* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_CertReq() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                             "get_CertReq", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBoolean*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::get_Extensions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(),
                                                                             "get_Extensions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Extensions*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* Org::BouncyCastle::Asn1::Tsp::TimeStampReq::New_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                                                                          ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                                                                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*>(messageImprint, tsaPolicy, nonce, certReq, extensions));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq::TimeStampReq() {}
