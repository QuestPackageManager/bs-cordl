#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/DeclarationOfMajority.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/IsisMtt/X509/zzzz__DeclarationOfMajority_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerGeneralizedTime_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DeclarationOfMajority_Choice(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DeclarationOfMajority_Choice() {}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::NotYoungerThan{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::FullAgeAtCountry{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice::DateOfBirth{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3450168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(bool, ::StringW)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3450208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(::Org::BouncyCastle::Asn1::DerGeneralizedTime*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3450418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* (*)(::System::Object*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3450488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x345060c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34506a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34506ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_NotYoungerThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x34506c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_FullAgeAtCountry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Sequence* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3450704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority.get_DateOfBirth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerGeneralizedTime* (::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::*)()>(
    &::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3450734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 8 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject*& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_get_declaration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObject* const& Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_get_declaration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___declaration;
}
constexpr void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::__cordl_internal_set_declaration(::Org::BouncyCastle::Asn1::Asn1TaggedObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___declaration = value;
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(int32_t notYoungerThan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notYoungerThan);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(bool fullAge, ::StringW country) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullAge, country);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dateOfBirth);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::GetInstance(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority_Choice>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_NotYoungerThan() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Sequence* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_FullAgeAtCountry() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Sequence*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::get_DateOfBirth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerGeneralizedTime*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(int32_t notYoungerThan) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(notYoungerThan));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(bool fullAge, ::StringW country) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(fullAge, country));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*
Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(dateOfBirth));
}
inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority*>(o));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::DeclarationOfMajority::DeclarationOfMajority() {}
