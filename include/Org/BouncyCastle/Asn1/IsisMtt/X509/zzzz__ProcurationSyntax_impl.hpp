#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/ProcurationSyntax.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__ProcurationSyntax_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__IssuerSerial_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x34517f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x3451978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Org::BouncyCastle::Asn1::X509::IssuerSerial*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3451c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)(
    ::StringW, ::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3451c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.get_Country
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_Country)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.get_TypeOfSubstitution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_TypeOfSubstitution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.get_ThirdPerson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_ThirdPerson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.get_CertRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_CertRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3451c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::ToAsn1Object)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x3451ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::StringW& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_country() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___country;
}
constexpr ::StringW const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_country() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___country;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_set_country(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___country = value;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_typeOfSubstitution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeOfSubstitution;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_typeOfSubstitution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeOfSubstitution;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_set_typeOfSubstitution(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeOfSubstitution = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_thirdPerson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPerson;
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_thirdPerson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPerson;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_set_thirdPerson(::Org::BouncyCastle::Asn1::X509::GeneralName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thirdPerson = value;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_certRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certRef;
}
constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial* const& Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_get_certRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certRef;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::__cordl_internal_set_certRef(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certRef = value;
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                             ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, country, typeOfSubstitution, certRef);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                             ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(),
          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::X509::GeneralName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, country, typeOfSubstitution, thirdPerson);
}
inline ::StringW Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_Country() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_TypeOfSubstitution() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_ThirdPerson() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::get_CertRef() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::IssuerSerial*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(seq));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*
Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                    ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(country, typeOfSubstitution, certRef));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*
Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                    ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*>(country, typeOfSubstitution, thirdPerson));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax::ProcurationSyntax() {}
