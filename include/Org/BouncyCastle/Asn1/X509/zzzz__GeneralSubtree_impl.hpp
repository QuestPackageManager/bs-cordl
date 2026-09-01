#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\GeneralSubtree.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralSubtree_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x365e5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)(
    ::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x365e800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)(::Org::BouncyCastle::Asn1::X509::GeneralName*)>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x365e8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralSubtree* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::GetInstance)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x365e904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(),
                                                             { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralSubtree* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::GeneralSubtree::GetInstance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x365e984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.get_Base
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)()>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Base)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x365ea24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Base", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.get_Minimum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)()>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Minimum)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x365ea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Minimum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.get_Maximum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)()>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Maximum)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x365eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Maximum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::GeneralSubtree.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::GeneralSubtree::*)()>(
    &::Org::BouncyCastle::Asn1::X509::GeneralSubtree::ToAsn1Object)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x365eab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_baseName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseName;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_baseName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseName;
}
constexpr void Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_set_baseName(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseName = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_minimum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_minimum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minimum;
}
constexpr void Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_set_minimum(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minimum = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_maximum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximum;
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_get_maximum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maximum;
}
constexpr void Org::BouncyCastle::Asn1::X509::GeneralSubtree::__cordl_internal_set_maximum(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maximum = value;
}
inline void Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName, ::Org::BouncyCastle::Math::BigInteger* minimum,
                                                                 ::Org::BouncyCastle::Math::BigInteger* maximum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseName, minimum, maximum);
}
inline void Org::BouncyCastle::Asn1::X509::GeneralSubtree::_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseName);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* Org::BouncyCastle::Asn1::X509::GeneralSubtree::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o, bool isExplicit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(),
                                                           { "GetInstance", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(nullptr, ___internal_method, o, isExplicit);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* Org::BouncyCastle::Asn1::X509::GeneralSubtree::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Base() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Base", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Minimum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Minimum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::GeneralSubtree::get_Maximum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), { "get_Maximum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::GeneralSubtree::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* Org::BouncyCastle::Asn1::X509::GeneralSubtree::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* Org::BouncyCastle::Asn1::X509::GeneralSubtree::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName,
                                                                                                                ::Org::BouncyCastle::Math::BigInteger* minimum,
                                                                                                                ::Org::BouncyCastle::Math::BigInteger* maximum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(baseName, minimum, maximum));
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralSubtree* Org::BouncyCastle::Asn1::X509::GeneralSubtree::New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* baseName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::GeneralSubtree*>(baseName));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralSubtree::GeneralSubtree() {}
