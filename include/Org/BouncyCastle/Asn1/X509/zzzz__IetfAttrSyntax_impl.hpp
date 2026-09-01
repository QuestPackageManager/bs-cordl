#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\IetfAttrSyntax.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IetfAttrSyntax_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::_ctor)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x365f2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax.get_PolicyAuthority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralNames* (::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::get_PolicyAuthority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365f918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "get_PolicyAuthority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax.get_ValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::*)()>(&::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::get_ValueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365f920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "get_ValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax.GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::GetValues)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x365f928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "GetValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::ToAsn1Object)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x365fc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_policyAuthority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyAuthority;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames* const& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_policyAuthority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___policyAuthority;
}
constexpr void Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_set_policyAuthority(::Org::BouncyCastle::Asn1::X509::GeneralNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___policyAuthority = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector* const& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_set_values(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
constexpr int32_t& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_valueChoice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChoice;
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_get_valueChoice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueChoice;
}
constexpr void Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::__cordl_internal_set_valueChoice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueChoice = value;
}
inline void Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::get_PolicyAuthority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "get_PolicyAuthority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralNames*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::get_ValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "get_ValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::GetValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), { "GetValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax* Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::IetfAttrSyntax::IetfAttrSyntax() {}
