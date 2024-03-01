#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthEnvelopedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EncryptedContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SetParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xee65d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee66fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetOriginatorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetOriginatorInfo)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0xee6704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetOriginatorInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetRecipientInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xee69e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetRecipientInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetAuthEncryptedContentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* (
    ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(&::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetAuthEncryptedContentInfo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xee6ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetAuthEncryptedContentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetAuthAttrs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xee6ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetAuthAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetMac)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xee7074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser.GetUnauthAttrs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1SetParser* (::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xee71a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                               "GetUnauthAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_seq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_seq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seq;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seq)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::IAsn1Convertible*& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_nextObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextObject;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IAsn1Convertible*> const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_nextObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextObject;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_set_nextObject(::Org::BouncyCastle::Asn1::IAsn1Convertible* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_originatorInfoCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfoCalled;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_get_originatorInfoCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfoCalled;
}
constexpr void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::__cordl_internal_set_originatorInfoCalled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originatorInfoCalled = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetOriginatorInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetOriginatorInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetRecipientInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetRecipientInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetAuthEncryptedContentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetAuthEncryptedContentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::EncryptedContentInfoParser*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetAuthAttrs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetAuthAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetMac", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1SetParser* Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::GetUnauthAttrs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser*>::get(),
                                                                             "GetUnauthAttrs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1SetParser*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::AuthEnvelopedDataParser::AuthEnvelopedDataParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
