#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x11da548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsContentInfoParser.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsContentInfoParser::*)()>(&::Org::BouncyCastle::Cms::CmsContentInfoParser::Close)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x11da790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(), "Close",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& Org::BouncyCastle::Cms::CmsContentInfoParser::__get_contentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> const& Org::BouncyCastle::Cms::CmsContentInfoParser::__get_contentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentInfo;
}
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Cms::CmsContentInfoParser::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& Org::BouncyCastle::Cms::CmsContentInfoParser::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Cms::CmsContentInfoParser::__set_data(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* Org::BouncyCastle::Cms::CmsContentInfoParser::New_ctor(::System::IO::Stream* data) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::CmsContentInfoParser*>(data));
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::_ctor(::System::IO::Stream* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void Org::BouncyCastle::Cms::CmsContentInfoParser::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsContentInfoParser*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::CmsContentInfoParser::CmsContentInfoParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
