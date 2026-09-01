#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X509\SigI\NameOrPseudonym.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/SigI/zzzz__NameOrPseudonym_def.hpp"
#include "Org/BouncyCastle/Asn1/X500/zzzz__DirectoryString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::GetInstance)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3559a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)(::Org::BouncyCastle::Asn1::X500::DirectoryString*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3559c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3559c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)(::StringW)>(&::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3559e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)(
    ::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3559e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym.get_Pseudonym
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::get_Pseudonym)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3559e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "get_Pseudonym", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym.get_Surname
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::X500::DirectoryString* (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::get_Surname)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3559e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "get_Surname", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym.GetGivenName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::GetGivenName)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x3559e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "GetGivenName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::*)()>(
    &::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::ToAsn1Object)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x355a1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_pseudonym() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pseudonym;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_pseudonym() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pseudonym;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_set_pseudonym(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pseudonym = value;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_surname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surname;
}
constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* const& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_surname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surname;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_set_surname(::Org::BouncyCastle::Asn1::X500::DirectoryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surname = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_givenName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___givenName;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_get_givenName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___givenName;
}
constexpr void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::__cordl_internal_set_givenName(::Org::BouncyCastle::Asn1::Asn1Sequence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___givenName = value;
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* pseudonym) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pseudonym);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor(::StringW pseudonym) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pseudonym);
}
inline void Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* surname, ::Org::BouncyCastle::Asn1::Asn1Sequence* givenName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surname, givenName);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::get_Pseudonym() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "get_Pseudonym", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::get_Surname() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "get_Surname", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X500::DirectoryString*>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*> Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::GetGivenName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), { "GetGivenName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* pseudonym) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(pseudonym));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(seq));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::New_ctor(::StringW pseudonym) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(pseudonym));
}
inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* surname,
                                                                                                                              ::Org::BouncyCastle::Asn1::Asn1Sequence* givenName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*>(surname, givenName));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym::NameOrPseudonym() {}
