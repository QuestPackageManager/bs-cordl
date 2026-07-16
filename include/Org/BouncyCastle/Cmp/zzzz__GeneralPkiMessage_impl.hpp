#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cmp/GeneralPkiMessage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__GeneralPkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage.ParseBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage* (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cmp::GeneralPkiMessage::ParseBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x36a0308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "ParseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)(::Org::BouncyCastle::Asn1::Cmp::PkiMessage*)>(
    &::Org::BouncyCastle::Cmp::GeneralPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Cmp::GeneralPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x36a0328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage.get_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::GeneralPkiMessage::get_Header)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36a0350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_Header", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody* (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::GeneralPkiMessage::get_Body)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x36a036c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_Body", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage.get_HasProtection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::GeneralPkiMessage::get_HasProtection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a0388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_HasProtection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::GeneralPkiMessage.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage* (::Org::BouncyCastle::Cmp::GeneralPkiMessage::*)()>(
    &::Org::BouncyCastle::Cmp::GeneralPkiMessage::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a03b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "ToAsn1Structure", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage*& Org::BouncyCastle::Cmp::GeneralPkiMessage::__cordl_internal_get_pkiMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiMessage;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* const& Org::BouncyCastle::Cmp::GeneralPkiMessage::__cordl_internal_get_pkiMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pkiMessage;
}
constexpr void Org::BouncyCastle::Cmp::GeneralPkiMessage::__cordl_internal_set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pkiMessage = value;
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Cmp::GeneralPkiMessage::ParseBytes(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "ParseBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(nullptr, ___internal_method, encoding);
}
inline void Org::BouncyCastle::Cmp::GeneralPkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pkiMessage);
}
inline void Org::BouncyCastle::Cmp::GeneralPkiMessage::_ctor(::ArrayW<uint8_t> encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoding);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Cmp::GeneralPkiMessage::get_Header() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_Header", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Org::BouncyCastle::Cmp::GeneralPkiMessage::get_Body() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_Body", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Cmp::GeneralPkiMessage::get_HasProtection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "get_HasProtection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Cmp::GeneralPkiMessage::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(), { "ToAsn1Structure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::GeneralPkiMessage* Org::BouncyCastle::Cmp::GeneralPkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage* pkiMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(pkiMessage));
}
inline ::Org::BouncyCastle::Cmp::GeneralPkiMessage* Org::BouncyCastle::Cmp::GeneralPkiMessage::New_ctor(::ArrayW<uint8_t> encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Cmp::GeneralPkiMessage*>(encoding));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::GeneralPkiMessage::GeneralPkiMessage() {}
