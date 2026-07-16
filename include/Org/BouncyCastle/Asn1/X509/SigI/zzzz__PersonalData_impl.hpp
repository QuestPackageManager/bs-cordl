#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SigI/PersonalData.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/SigI/zzzz__PersonalData_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/SigI/zzzz__NameOrPseudonym_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3557f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x35580ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)(
    ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerGeneralizedTime*, ::Org::BouncyCastle::Asn1::X500::DirectoryString*,
    ::StringW, ::Org::BouncyCastle::Asn1::X500::DirectoryString*)>(&::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3558424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_NameOrPseudonym
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameOrPseudonym)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3558434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_NameOrPseudonym", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_NameDistinguisher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameDistinguisher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355843c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_NameDistinguisher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_DateOfBirth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3558444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_DateOfBirth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_PlaceOfBirth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PlaceOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355844c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_PlaceOfBirth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_Gender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(&::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_Gender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3558454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_Gender", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.get_PostalAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PostalAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x355845c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_PostalAddress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::ToAsn1Object)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3558464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameOrPseudonym() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameOrPseudonym;
}
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameOrPseudonym() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameOrPseudonym;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_nameOrPseudonym(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameOrPseudonym = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameDistinguisher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameDistinguisher;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_nameDistinguisher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameDistinguisher;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_nameDistinguisher(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameDistinguisher = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_dateOfBirth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateOfBirth;
}
constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_dateOfBirth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dateOfBirth;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_dateOfBirth(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dateOfBirth = value;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_placeOfBirth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeOfBirth;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_placeOfBirth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___placeOfBirth;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_placeOfBirth(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___placeOfBirth = value;
}
constexpr ::StringW& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_gender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gender;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_gender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gender;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_gender(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gender = value;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_postalAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postalAddress;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_get_postalAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postalAddress;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::__cordl_internal_set_postalAddress(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postalAddress = value;
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::PersonalData::_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                                                                     ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth,
                                                                     ::StringW gender, ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameOrPseudonym, nameDistinguisher, dateOfBirth, placeOfBirth, gender, postalAddress);
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameOrPseudonym() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_NameOrPseudonym", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_NameDistinguisher() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_NameDistinguisher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_DateOfBirth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_DateOfBirth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PlaceOfBirth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_PlaceOfBirth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_Gender() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_Gender", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::get_PostalAddress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), { "get_PostalAddress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* Org::BouncyCastle::Asn1::X509::SigI::PersonalData::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*
Org::BouncyCastle::Asn1::X509::SigI::PersonalData::New_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                                                            ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth,
                                                            ::StringW gender, ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*>(nameOrPseudonym, nameDistinguisher, dateOfBirth, placeOfBirth, gender, postalAddress));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData::PersonalData() {}
