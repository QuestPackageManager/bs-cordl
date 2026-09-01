#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X500\Rdn.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__Rdn_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__AttributeTypeAndValue_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::Rdn::*)(::Org::BouncyCastle::Asn1::Asn1Set*)>(&::Org::BouncyCastle::Asn1::X500::Rdn::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35575fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::Rdn* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X500::Rdn::GetInstance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3557604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::Rdn::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Encodable*)>(
    &::Org::BouncyCastle::Asn1::X500::Rdn::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x35576a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::Rdn::*)(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*)>(
    &::Org::BouncyCastle::Asn1::X500::Rdn::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x35577c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X500::Rdn::*)(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>)>(
    &::Org::BouncyCastle::Asn1::X500::Rdn::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x355782c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.get_IsMultiValued
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Asn1::X500::Rdn::*)()>(&::Org::BouncyCastle::Asn1::X500::Rdn::get_IsMultiValued)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x355789c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::X500::Rdn::*)()>(&::Org::BouncyCastle::Asn1::X500::Rdn::get_Count)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35578c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.GetFirst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* (::Org::BouncyCastle::Asn1::X500::Rdn::*)()>(
    &::Org::BouncyCastle::Asn1::X500::Rdn::GetFirst)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x35578e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.GetTypesAndValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*> (::Org::BouncyCastle::Asn1::X500::Rdn::*)()>(
    &::Org::BouncyCastle::Asn1::X500::Rdn::GetTypesAndValues)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3557934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X500::Rdn.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X500::Rdn::*)()>(&::Org::BouncyCastle::Asn1::X500::Rdn::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3557a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::X500::Rdn::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::X500::Rdn::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void Org::BouncyCastle::Asn1::X500::Rdn::__cordl_internal_set_values(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
inline void Org::BouncyCastle::Asn1::X500::Rdn::_ctor(::Org::BouncyCastle::Asn1::Asn1Set* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline ::Org::BouncyCastle::Asn1::X500::Rdn* Org::BouncyCastle::Asn1::X500::Rdn::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::Rdn*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X500::Rdn::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oid, value);
}
inline void Org::BouncyCastle::Asn1::X500::Rdn::_ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrTAndV);
}
inline void Org::BouncyCastle::Asn1::X500::Rdn::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*> aAndVs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aAndVs);
}
inline bool Org::BouncyCastle::Asn1::X500::Rdn::get_IsMultiValued() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::X500::Rdn::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* Org::BouncyCastle::Asn1::X500::Rdn::GetFirst() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*> Org::BouncyCastle::Asn1::X500::Rdn::GetTypesAndValues() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X500::Rdn::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X500::Rdn*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::Rdn* Org::BouncyCastle::Asn1::X500::Rdn::New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* values) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::Rdn*>(values));
}
inline ::Org::BouncyCastle::Asn1::X500::Rdn* Org::BouncyCastle::Asn1::X500::Rdn::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::Rdn*>(oid, value));
}
inline ::Org::BouncyCastle::Asn1::X500::Rdn* Org::BouncyCastle::Asn1::X500::Rdn::New_ctor(::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue* attrTAndV) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::Rdn*>(attrTAndV));
}
inline ::Org::BouncyCastle::Asn1::X500::Rdn* Org::BouncyCastle::Asn1::X500::Rdn::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X500::AttributeTypeAndValue*> aAndVs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X500::Rdn*>(aAndVs));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X500::Rdn::Rdn() {}
