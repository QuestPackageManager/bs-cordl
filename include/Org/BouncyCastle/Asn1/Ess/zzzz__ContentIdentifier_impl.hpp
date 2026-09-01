#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ess\ContentIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ess/zzzz__ContentIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x337a3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x337a574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x337a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x337a5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x337a5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Ess::ContentIdentifier::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Ess::ContentIdentifier::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void Org::BouncyCastle::Asn1::Ess::ContentIdentifier::__cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* Org::BouncyCastle::Asn1::Ess::ContentIdentifier::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Ess::ContentIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Asn1::Ess::ContentIdentifier::_ctor(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Ess::ContentIdentifier::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Ess::ContentIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* Org::BouncyCastle::Asn1::Ess::ContentIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* Org::BouncyCastle::Asn1::Ess::ContentIdentifier::New_ctor(::ArrayW<uint8_t> value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*>(value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier::ContentIdentifier() {}
