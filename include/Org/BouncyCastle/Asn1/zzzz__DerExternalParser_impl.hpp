#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerExternalParser.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerExternalParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternalParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerExternalParser::*)(::Org::BouncyCastle::Asn1::Asn1StreamParser*)>(
    &::Org::BouncyCastle::Asn1::DerExternalParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x262a1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternalParser.ReadObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible* (::Org::BouncyCastle::Asn1::DerExternalParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternalParser::ReadObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2634df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(),
                                                                               "ReadObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerExternalParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerExternalParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerExternalParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2634e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& Org::BouncyCastle::Asn1::DerExternalParser::__cordl_internal_get__parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser* const& Org::BouncyCastle::Asn1::DerExternalParser::__cordl_internal_get__parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parser;
}
constexpr void Org::BouncyCastle::Asn1::DerExternalParser::__cordl_internal_set__parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Asn1::DerExternalParser::_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1StreamParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parser);
}
inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* Org::BouncyCastle::Asn1::DerExternalParser::ReadObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(), "ReadObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IAsn1Convertible*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerExternalParser::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerExternalParser*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerExternalParser* Org::BouncyCastle::Asn1::DerExternalParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1StreamParser* parser) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::DerExternalParser*>(parser));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerExternalParser::DerExternalParser() {}
