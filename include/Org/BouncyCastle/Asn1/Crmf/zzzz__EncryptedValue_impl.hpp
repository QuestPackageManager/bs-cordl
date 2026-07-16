#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/EncryptedValue.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/zzzz__EncryptedValue_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x3364fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3364e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)(
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::DerBitString*,
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::DerBitString*)>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3365200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_IntendedAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_IntendedAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_SymmAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_SymmAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_EncSymmKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_EncSymmKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_KeyAlg
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_KeyAlg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_ValueHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_ValueHint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.get_EncValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_EncValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3365288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::*)()>(
    &::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::ToAsn1Object)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3365290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_intendedAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intendedAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_intendedAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intendedAlg;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_intendedAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intendedAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_symmAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symmAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_symmAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___symmAlg;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_symmAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___symmAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_encSymmKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encSymmKey;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_encSymmKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encSymmKey;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_encSymmKey(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encSymmKey = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_keyAlg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlg;
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_keyAlg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyAlg;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_keyAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyAlg = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_valueHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueHint;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_valueHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueHint;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_valueHint(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueHint = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_encValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encValue;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_get_encValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encValue;
}
constexpr void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::__cordl_internal_set_encValue(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encValue = value;
}
inline void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Crmf::EncryptedValue::_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg,
                                                                 ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg,
                                                                 ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint, ::Org::BouncyCastle::Asn1::DerBitString* encValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, intendedAlg, symmAlg, encSymmKey, keyAlg, valueHint, encValue);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_IntendedAlg() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_SymmAlg() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_EncSymmKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_KeyAlg() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_ValueHint() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::get_EncValue() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Org::BouncyCastle::Asn1::Crmf::EncryptedValue::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*
Org::BouncyCastle::Asn1::Crmf::EncryptedValue::New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* intendedAlg, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* symmAlg,
                                                        ::Org::BouncyCastle::Asn1::DerBitString* encSymmKey, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyAlg,
                                                        ::Org::BouncyCastle::Asn1::Asn1OctetString* valueHint, ::Org::BouncyCastle::Asn1::DerBitString* encValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*>(intendedAlg, symmAlg, encSymmKey, keyAlg, valueHint, encValue));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue::EncryptedValue() {}
