#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509NameTokenizer_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)(::StringW)>(
    &::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11a54f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)(::StringW, char16_t)>(
    &::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x11a56cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer.HasMoreTokens
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::HasMoreTokens)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11a5758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(),
                                                                               "HasMoreTokens", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer.NextToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::*)()>(
    &::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::NextToken)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x11a5500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(),
                                                                               "NextToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
constexpr char16_t& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
constexpr char16_t const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___separator;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__set_separator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___separator = value;
}
constexpr ::System::Text::StringBuilder*& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::__set_buffer(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* Org::BouncyCastle::Asn1::X509::X509NameTokenizer::New_ctor(::StringW oid) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(oid));
}
inline void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor(::StringW oid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid);
}
inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* Org::BouncyCastle::Asn1::X509::X509NameTokenizer::New_ctor(::StringW oid, char16_t separator) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>(oid, separator));
}
inline void Org::BouncyCastle::Asn1::X509::X509NameTokenizer::_ctor(::StringW oid, char16_t separator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oid, separator);
}
inline bool Org::BouncyCastle::Asn1::X509::X509NameTokenizer::HasMoreTokens() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(),
                                                                             "HasMoreTokens", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::X509NameTokenizer::NextToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*>::get(),
                                                                             "NextToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer::X509NameTokenizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
