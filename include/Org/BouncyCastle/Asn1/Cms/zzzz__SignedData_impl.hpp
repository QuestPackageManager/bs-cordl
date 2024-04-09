#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfo_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignedData* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xfe88dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(
    ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Cms::ContentInfo*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xfe8ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.CalculateVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (
    ::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Set*, ::Org::BouncyCastle::Asn1::Asn1Set*,
                                                   ::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0xfe9100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "CalculateVersion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.CheckForVersion3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xfe9794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "CheckForVersion3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignedData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::_ctor)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0xfe8980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_DigestAlgorithms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                               "get_DigestAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_EncapContentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfo* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                               "get_EncapContentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_Certificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                               "get_Certificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_CRLs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "get_CRLs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.get_SignerInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfe9a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                               "get_SignerInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignedData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::SignedData::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xfe9a98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_digestAlgorithms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithms;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_digestAlgorithms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgorithms;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgorithms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certificates;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_certificates(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crls;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___crls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_signerInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfos;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_signerInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signerInfos;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___signerInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certsBer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certsBer;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_certsBer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certsBer;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_certsBer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certsBer = value;
}
constexpr bool& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crlsBer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlsBer;
}
constexpr bool const& Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_get_crlsBer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crlsBer;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignedData::__cordl_internal_set_crlsBer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crlsBer = value;
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version1(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version1() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version3(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version3() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version4(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version4() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>();
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::setStaticF_Version5(::Org::BouncyCastle::Asn1::DerInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerInteger*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::getStaticF_Version5() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerInteger*, "Version5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get>();
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "GetInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignedData*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms,
                                                                                                      ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo,
                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* certificates, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                                                                      ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Cms::SignedData*>(digestAlgorithms, contentInfo, certificates, crls, signerInfos));
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo,
                                                            ::Org::BouncyCastle::Asn1::Asn1Set* certificates, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                            ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::ContentInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestAlgorithms, contentInfo, certificates, crls, signerInfos);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid,
                                                                                                         ::Org::BouncyCastle::Asn1::Asn1Set* certs, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                                                                         ::Org::BouncyCastle::Asn1::Asn1Set* signerInfs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "CalculateVersion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method, contentOid, certs, crls, signerInfs);
}
inline bool Org::BouncyCastle::Asn1::Cms::SignedData::CheckForVersion3(::Org::BouncyCastle::Asn1::Asn1Set* signerInfs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "CheckForVersion3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Set*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, signerInfs);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignedData* Org::BouncyCastle::Asn1::Cms::SignedData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Cms::SignedData*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::SignedData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::SignedData::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_DigestAlgorithms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                             "get_DigestAlgorithms", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* Org::BouncyCastle::Asn1::Cms::SignedData::get_EncapContentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                             "get_EncapContentInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfo*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                             "get_Certificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_CRLs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), "get_CRLs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::SignedData::get_SignerInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(),
                                                                             "get_SignerInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::SignedData::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::SignedData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData::SignedData() {}
