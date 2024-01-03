#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformationStore_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AuthenticatedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__AttributeTable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11da7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x11da864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgorithmID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgorithmID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dab6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "get_MacAlgorithmID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgOid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgOid)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11dab74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "get_MacAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.get_MacAlgParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgParams)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11daba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "get_MacAlgParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetRecipientInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cms::RecipientInformationStore* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetRecipientInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11dabd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "GetRecipientInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetMac)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x11dabe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "GetMac", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetAuthAttrs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetAuthAttrs)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x11dac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "GetAuthAttrs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser.GetUnauthAttrs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::AttributeTable* (::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::*)()>(
    &::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetUnauthAttrs)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x11daec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                               "GetUnauthAttrs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get__recipientInfoStore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recipientInfoStore;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get__recipientInfoStore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recipientInfoStore;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set__recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recipientInfoStore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authData;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authData;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authData(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_macAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAlg;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_macAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macAlg;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macAlg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authAttrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrs;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_unauthAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unauthAttrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrNotRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrNotRead;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_authAttrNotRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authAttrNotRead;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_authAttrNotRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authAttrNotRead = value;
}
constexpr bool& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrNotRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrNotRead;
}
constexpr bool const& Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__get_unauthAttrNotRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unauthAttrNotRead;
}
constexpr void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::__set_unauthAttrNotRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unauthAttrNotRead = value;
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>(envelopedData));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, envelopedData);
}
inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::New_ctor(::System::IO::Stream* envelopedData) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>(envelopedData));
}
inline void Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::_ctor(::System::IO::Stream* envelopedData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, envelopedData);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgorithmID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "get_MacAlgorithmID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgOid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "get_MacAlgOid", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::get_MacAlgParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "get_MacAlgParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cms::RecipientInformationStore* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetRecipientInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "GetRecipientInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cms::RecipientInformationStore*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetMac() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "GetMac", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetAuthAttrs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "GetAuthAttrs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::GetUnauthAttrs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*>::get(),
                                                                             "GetUnauthAttrs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::AttributeTable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser::CmsAuthenticatedDataParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
