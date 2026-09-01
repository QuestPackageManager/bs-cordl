#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crmf\RegTokenControl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__RegTokenControl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::RegTokenControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::RegTokenControl::*)(::Org::BouncyCastle::Asn1::DerUtf8String*)>(
    &::Org::BouncyCastle::Crmf::RegTokenControl::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36d80a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::RegTokenControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crmf::RegTokenControl::*)(::StringW)>(&::Org::BouncyCastle::Crmf::RegTokenControl::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x36dcad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::RegTokenControl.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Crmf::RegTokenControl::*)()>(
    &::Org::BouncyCastle::Crmf::RegTokenControl::get_Type)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36dcb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::RegTokenControl.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Crmf::RegTokenControl::*)()>(
    &::Org::BouncyCastle::Crmf::RegTokenControl::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36dcb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& Org::BouncyCastle::Crmf::RegTokenControl::__cordl_internal_get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String* const& Org::BouncyCastle::Crmf::RegTokenControl::__cordl_internal_get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr void Org::BouncyCastle::Crmf::RegTokenControl::__cordl_internal_set_token(::Org::BouncyCastle::Asn1::DerUtf8String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___token = value;
}
inline void Org::BouncyCastle::Crmf::RegTokenControl::setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type", ::Org::BouncyCastle::Crmf::RegTokenControl*>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::RegTokenControl::getStaticF_type() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type", ::Org::BouncyCastle::Crmf::RegTokenControl*>();
}
inline void Org::BouncyCastle::Crmf::RegTokenControl::_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerUtf8String*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void Org::BouncyCastle::Crmf::RegTokenControl::_ctor(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::RegTokenControl::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Crmf::RegTokenControl::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crmf::RegTokenControl*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crmf::RegTokenControl* Org::BouncyCastle::Crmf::RegTokenControl::New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::RegTokenControl*>(token));
}
inline ::Org::BouncyCastle::Crmf::RegTokenControl* Org::BouncyCastle::Crmf::RegTokenControl::New_ctor(::StringW token) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crmf::RegTokenControl*>(token));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
constexpr Org::BouncyCastle::Crmf::RegTokenControl::operator ::Org::BouncyCastle::Crmf::IControl*() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IControl*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crmf::IControl"
constexpr ::Org::BouncyCastle::Crmf::IControl* Org::BouncyCastle::Crmf::RegTokenControl::i___Org__BouncyCastle__Crmf__IControl() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IControl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::RegTokenControl::RegTokenControl() {}
