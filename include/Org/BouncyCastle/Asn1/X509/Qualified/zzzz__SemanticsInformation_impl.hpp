#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\Qualified\SemanticsInformation.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__SemanticsInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::GetInstance)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35591b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x3559314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>)>(&::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35596b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35596c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>)>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35596c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation.get_SemanticsIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::get_SemanticsIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35596d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "get_SemanticsIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation.GetNameRegistrationAuthorities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::GetNameRegistrationAuthorities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35596d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "GetNameRegistrationAuthorities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::*)()>(
    &::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::ToAsn1Object)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x35596e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_get_semanticsIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___semanticsIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_get_semanticsIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___semanticsIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_set_semanticsIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___semanticsIdentifier = value;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>& Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_get_nameRegistrationAuthorities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameRegistrationAuthorities;
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_get_nameRegistrationAuthorities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameRegistrationAuthorities;
}
constexpr void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::__cordl_internal_set_nameRegistrationAuthorities(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameRegistrationAuthorities = value;
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
                                                                                  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> generalNames) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, semanticsIdentifier, generalNames);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, semanticsIdentifier);
}
inline void Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> generalNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generalNames);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::get_SemanticsIdentifier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "get_SemanticsIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::GetNameRegistrationAuthorities() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), { "GetNameRegistrationAuthorities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
                                                                         ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> generalNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(semanticsIdentifier, generalNames));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(semanticsIdentifier));
}
inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*> generalNames) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*>(generalNames));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation::SemanticsInformation() {}
