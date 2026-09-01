#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\SignerIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__SignerIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__IssuerAndSerialNumber_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3361b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3361bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x3361bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier.get_IsTagged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)()>(&::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::get_IsTagged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3361de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "get_IsTagged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::get_ID)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3361e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "get_ID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3361ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::Asn1::Cms::SignerIdentifier::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& Org::BouncyCastle::Asn1::Cms::SignerIdentifier::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Asn1::Cms::SignerIdentifier::__cordl_internal_set_id(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
inline void Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Org::BouncyCastle::Asn1::Cms::SignerIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1Object* id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(nullptr, ___internal_method, o);
}
inline bool Org::BouncyCastle::Asn1::Cms::SignerIdentifier::get_IsTagged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "get_IsTagged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::get_ID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), { "get_ID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(id));
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(id));
}
inline ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::SignerIdentifier*>(id));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Cms::SignerIdentifier::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Cms::SignerIdentifier::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier::SignerIdentifier() {}
