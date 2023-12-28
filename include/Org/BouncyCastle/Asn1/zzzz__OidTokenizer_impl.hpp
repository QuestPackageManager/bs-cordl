#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__OidTokenizer_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::OidTokenizer::*)(::StringW)>(&::Org::BouncyCastle::Asn1::OidTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11c6ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.get_HasMoreTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11c6af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                                                                               "get_HasMoreTokens", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::OidTokenizer.NextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::OidTokenizer::*)()>(&::Org::BouncyCastle::Asn1::OidTokenizer::NextToken)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x11c6b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(), "NextToken",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::OidTokenizer::__get_oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::OidTokenizer::__get_oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oid;
}
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__set_oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___oid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::OidTokenizer::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::OidTokenizer::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Asn1::OidTokenizer::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
inline ::Org::BouncyCastle::Asn1::OidTokenizer* Org::BouncyCastle::Asn1::OidTokenizer::New_ctor(::StringW oid) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::OidTokenizer*>(oid));
}
inline void Org::BouncyCastle::Asn1::OidTokenizer::_ctor(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid);
}
inline bool Org::BouncyCastle::Asn1::OidTokenizer::get_HasMoreTokens() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(),
                                                                             "get_HasMoreTokens", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::OidTokenizer::NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::OidTokenizer*>::get(), "NextToken",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::OidTokenizer::OidTokenizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
