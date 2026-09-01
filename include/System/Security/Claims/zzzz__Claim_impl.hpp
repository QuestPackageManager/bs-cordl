#pragma once
// IWYU pragma private; include "System\Security\Claims\Claim.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Claims/zzzz__Claim_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Claims::Claim::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Security::Claims::ClaimsIdentity*)>(
    &::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b13420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Claims::Claim::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Security::Claims::ClaimsIdentity*,
                                                                                                   ::StringW, ::StringW)>(&::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5b17ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Claims::Claim::*)(::System::Security::Claims::Claim*, ::System::Security::Claims::ClaimsIdentity*)>(
    &::System::Security::Claims::Claim::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5b18010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Security::Claims::Claim*>(), ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.OnDeserializedMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Claims::Claim::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Security::Claims::Claim::OnDeserializedMethod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b18320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                                                           { "OnDeserializedMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (::System::Security::Claims::Claim::*)()>(
    &::System::Security::Claims::Claim::get_Properties)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b17ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Claims::ClaimsIdentity* (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::get_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Subject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.set_Subject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(&::System::Security::Claims::Claim::set_Subject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "set_Subject", {}, { ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b18388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Claims::Claim* (::System::Security::Claims::Claim::*)(::System::Security::Claims::ClaimsIdentity*)>(
    &::System::Security::Claims::Claim::Clone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b18390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { ::i2c::class_of<::System::Security::Claims::Claim*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::Claim.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Claims::Claim::*)()>(&::System::Security::Claims::Claim::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b183fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { ::i2c::class_of<::System::Security::Claims::Claim*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_issuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuer;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_issuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_issuer;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_issuer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_issuer = value;
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_originalIssuer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalIssuer;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_originalIssuer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_originalIssuer;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_originalIssuer(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_originalIssuer = value;
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_type = value;
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_value;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_value = value;
}
constexpr ::StringW& System::Security::Claims::Claim::__cordl_internal_get_m_valueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueType;
}
constexpr ::StringW const& System::Security::Claims::Claim::__cordl_internal_get_m_valueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueType;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_valueType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_valueType = value;
}
constexpr ::ArrayW<uint8_t>& System::Security::Claims::Claim::__cordl_internal_get_m_userSerializationData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userSerializationData;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Claims::Claim::__cordl_internal_get_m_userSerializationData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_userSerializationData;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_userSerializationData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_userSerializationData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& System::Security::Claims::Claim::__cordl_internal_get_m_properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_properties;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& System::Security::Claims::Claim::__cordl_internal_get_m_properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_properties;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_properties(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_properties = value;
}
constexpr ::System::Object*& System::Security::Claims::Claim::__cordl_internal_get_m_propertyLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_propertyLock;
}
constexpr ::System::Object* const& System::Security::Claims::Claim::__cordl_internal_get_m_propertyLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_propertyLock;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_propertyLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_propertyLock = value;
}
constexpr ::System::Security::Claims::ClaimsIdentity*& System::Security::Claims::Claim::__cordl_internal_get_m_subject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr ::System::Security::Claims::ClaimsIdentity* const& System::Security::Claims::Claim::__cordl_internal_get_m_subject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_subject;
}
constexpr void System::Security::Claims::Claim::__cordl_internal_set_m_subject(::System::Security::Claims::ClaimsIdentity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_subject = value;
}
inline void System::Security::Claims::Claim::_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                   ::System::Security::Claims::ClaimsIdentity* subject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { ".ctor",
                                                                                   {},
                                                                                   { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                                     ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value, valueType, issuer, originalIssuer, subject);
}
inline void System::Security::Claims::Claim::_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                   ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue);
}
inline void System::Security::Claims::Claim::_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Claims::Claim*>(), ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other, subject);
}
inline void System::Security::Claims::Claim::OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(),
                                                                                         { "OnDeserializedMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Security::Claims::Claim::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(this, ___internal_method);
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Claims::Claim::get_Subject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Subject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*>(this, ___internal_method);
}
inline void System::Security::Claims::Claim::set_Subject(::System::Security::Claims::ClaimsIdentity* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "set_Subject", {}, { ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Claims::Claim::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Claims::Claim::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Claims::Claim*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::Clone(::System::Security::Claims::ClaimsIdentity* identity) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Claims::Claim*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::Claim*>(this, ___internal_method, identity);
}
inline ::StringW System::Security::Claims::Claim::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Claims::Claim*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                                                    ::System::Security::Claims::ClaimsIdentity* subject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Claims::Claim*>(type, value, valueType, issuer, originalIssuer, subject));
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::StringW type, ::StringW value, ::StringW valueType, ::StringW issuer, ::StringW originalIssuer,
                                                                                    ::System::Security::Claims::ClaimsIdentity* subject, ::StringW propertyKey, ::StringW propertyValue) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Claims::Claim*>(type, value, valueType, issuer, originalIssuer, subject, propertyKey, propertyValue));
}
inline ::System::Security::Claims::Claim* System::Security::Claims::Claim::New_ctor(::System::Security::Claims::Claim* other, ::System::Security::Claims::ClaimsIdentity* subject) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Claims::Claim*>(other, subject));
}
// Ctor Parameters []
constexpr ::System::Security::Claims::Claim::Claim() {}
