#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\PkiMessage.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CmpCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x334f564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiMessage::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x334f728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)(
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*, ::Org::BouncyCastle::Asn1::DerBitString*, ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x334f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)(
    ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*, ::Org::BouncyCastle::Asn1::DerBitString*)>(&::Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x334f850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x334f8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.get_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334f90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody* (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334f914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.get_Protection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerBitString* (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Protection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x334f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.GetExtraCerts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::GetExtraCerts)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x334f924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::PkiMessage.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::PkiMessage::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::PkiMessage::ToAsn1Object)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x334fa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* const& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_set_header(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___header = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody* const& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___body = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString*& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_protection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protection;
}
constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_protection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protection;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_set_protection(::Org::BouncyCastle::Asn1::DerBitString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protection = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_extraCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_get_extraCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraCerts;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::PkiMessage::__cordl_internal_set_extraCerts(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraCerts = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Asn1::Cmp::PkiMessage::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                            ::Org::BouncyCastle::Asn1::DerBitString* protection, ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> extraCerts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, body, protection, extraCerts);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                            ::Org::BouncyCastle::Asn1::DerBitString* protection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerBitString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, body, protection);
}
inline void Org::BouncyCastle::Asn1::Cmp::PkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, body);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Header() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Body() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerBitString* Org::BouncyCastle::Asn1::Cmp::PkiMessage::get_Protection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerBitString*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> Org::BouncyCastle::Asn1::Cmp::PkiMessage::GetExtraCerts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::PkiMessage::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Asn1::Cmp::PkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Asn1::Cmp::PkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                                                      ::Org::BouncyCastle::Asn1::DerBitString* protection,
                                                                                                      ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> extraCerts) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(header, body, protection, extraCerts));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Asn1::Cmp::PkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body,
                                                                                                      ::Org::BouncyCastle::Asn1::DerBitString* protection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(header, body, protection));
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessage* Org::BouncyCastle::Asn1::Cmp::PkiMessage::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                                                      ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>(header, body));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage::PkiMessage() {}
