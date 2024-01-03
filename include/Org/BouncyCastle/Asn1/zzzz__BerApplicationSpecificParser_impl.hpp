#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerApplicationSpecificParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1ApplicationSpecificParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)(
    int32_t, ::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(&::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x11b641c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)()>(
    &::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x11bbb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(),
                                                                               "ReadObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::*)()>(
    &::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11b644c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(),
                                                                               "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser"
constexpr Org::BouncyCastle::Asn1::BerApplicationSpecificParser::operator ::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::BerApplicationSpecificParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tag;
}
constexpr void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__set_tag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tag = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__get_parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parser;
}
constexpr void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::__set_parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser* Org::BouncyCastle::Asn1::BerApplicationSpecificParser::New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>(tag, parser));
}
inline void Org::BouncyCastle::Asn1::BerApplicationSpecificParser::_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, parser);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(),
                                                                             "ReadObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::BerApplicationSpecificParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser::BerApplicationSpecificParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
