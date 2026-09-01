#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Crmf\EncryptedKey.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedKey_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__EnvelopedData_def.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedValue_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x336707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::*)(::Org::BouncyCastle::Asn1::Cms::EnvelopedData*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::*)(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3367208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey.get_IsEncryptedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::*)()>(&::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::get_IsEncryptedValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x33672b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33672c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::ToAsn1Object)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x33672dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData*& Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_get_envelopedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envelopedData;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* const& Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_get_envelopedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___envelopedData;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___envelopedData = value;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_get_encryptedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedValue;
}
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* const& Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_get_encryptedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptedValue;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedKey::__cordl_internal_set_encryptedValue(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptedValue = value;
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::GetInstance(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(nullptr, ___internal_method, o);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncryptedKey::_ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, envelopedData);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncryptedKey::_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptedValue);
}
inline bool Org::BouncyCastle::Asn1::Crmf::EncryptedKey::get_IsEncryptedValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::get_Value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::New_ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(envelopedData));
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*>(encryptedValue));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::Crmf::EncryptedKey::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::Crmf::EncryptedKey::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey::EncryptedKey() {}
