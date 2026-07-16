#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/RecipientKeyIdentifier.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__RecipientKeyIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OtherKeyAttribute_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)(
    ::Org::BouncyCastle::Asn1::Asn1OctetString*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x335d008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x335d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*)>(&::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x335d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x335d09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3359a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::GetInstance)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x335d2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.get_SubjectKeyIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1OctetString* (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_SubjectKeyIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_SubjectKeyIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.get_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_Date)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_Date", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.get_OtherKeyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_OtherKeyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335d458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_OtherKeyAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::ToAsn1Object)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x335d460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_subjectKeyIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_subjectKeyIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subjectKeyIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_set_subjectKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subjectKeyIdentifier = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_date() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___date;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_date() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___date;
}
constexpr void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_set_date(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___date = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_other() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___other;
}
constexpr ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* const& Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_get_other() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___other;
}
constexpr void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::__cordl_internal_set_other(::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___other = value;
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                        ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier, date, other);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor(::ArrayW<uint8_t> subjectKeyIdentifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor(::ArrayW<uint8_t> subjectKeyIdentifier, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                        ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subjectKeyIdentifier, date, other);
}
inline void Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* ato, bool explicitly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(nullptr, ___internal_method, ato, explicitly);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_SubjectKeyIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_SubjectKeyIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1OctetString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_Date() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_Date", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::get_OtherKeyAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), { "get_OtherKeyAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* subjectKeyIdentifier,
                                                                                                                              ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                                                                              ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(subjectKeyIdentifier, date, other));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(subjectKeyIdentifier));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::New_ctor(::ArrayW<uint8_t> subjectKeyIdentifier,
                                                                                                                              ::Org::BouncyCastle::Asn1::DerGeneralizedTime* date,
                                                                                                                              ::Org::BouncyCastle::Asn1::Cms::OtherKeyAttribute* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(subjectKeyIdentifier, date, other));
}
inline ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier* Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier*>(seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::RecipientKeyIdentifier::RecipientKeyIdentifier() {}
