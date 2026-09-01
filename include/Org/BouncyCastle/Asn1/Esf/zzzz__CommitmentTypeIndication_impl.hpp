#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Esf\CommitmentTypeIndication.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Esf/zzzz__CommitmentTypeIndication_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3370154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x33702d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3370584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x337058c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication.get_CommitmentTypeID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::get_CommitmentTypeID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33705ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "get_CommitmentTypeID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication.get_CommitmentTypeQualifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::get_CommitmentTypeQualifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33705f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "get_CommitmentTypeQualifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::*)()>(
    &::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::ToAsn1Object)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x33705fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_get_commitmentTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commitmentTypeId;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_get_commitmentTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commitmentTypeId;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_set_commitmentTypeId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commitmentTypeId = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_get_commitmentTypeQualifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commitmentTypeQualifier;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_get_commitmentTypeQualifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___commitmentTypeQualifier;
}
constexpr void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::__cordl_internal_set_commitmentTypeQualifier(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___commitmentTypeQualifier = value;
}
inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commitmentTypeId);
}
inline void Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId,
                                                                          ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, commitmentTypeId, commitmentTypeQualifier);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::get_CommitmentTypeID() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "get_CommitmentTypeID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::get_CommitmentTypeQualifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), { "get_CommitmentTypeQualifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(commitmentTypeId));
}
inline ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication* Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* commitmentTypeId,
                                                                                                                                  ::Org::BouncyCastle::Asn1::Asn1Sequence* commitmentTypeQualifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication*>(commitmentTypeId, commitmentTypeQualifier));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication::CommitmentTypeIndication() {}
