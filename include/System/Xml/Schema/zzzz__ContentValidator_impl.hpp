#pragma once
// IWYU pragma private; include "System\Xml\Schema\ContentValidator.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType)>(
    &::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631fabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(
    &::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x631facc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_ContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::ContentValidator::*)()>(
    &::System::Xml::Schema::ContentValidator::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631fadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_ContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x631fae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_PreserveWhitespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_IsEmptiable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_IsEmptiable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631faf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_IsOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_IsOpen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x631fb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_IsOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.set_IsOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(bool)>(&::System::Xml::Schema::ContentValidator::set_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631fb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "set_IsOpen", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::ContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x631fb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::ContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*,
                                                                                                                      ::by_ref<int32_t>)>(&::System::Xml::Schema::ContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x631fb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::ContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631fb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.ExpectedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(
    &::System::Xml::Schema::ContentValidator::ExpectedElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.ExpectedParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (
    ::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::ContentValidator::ExpectedParticles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.AddParticleToExpected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*)>(
    &::System::Xml::Schema::ContentValidator::AddParticleToExpected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x631fb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                             { "AddParticleToExpected",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                 ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.AddParticleToExpected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Collections::ArrayList*, bool)>(
    &::System::Xml::Schema::ContentValidator::AddParticleToExpected)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x631fbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                             { "AddParticleToExpected",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                 ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaContentType& System::Xml::Schema::ContentValidator::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::System::Xml::Schema::XmlSchemaContentType const& System::Xml::Schema::ContentValidator::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
constexpr bool& System::Xml::Schema::ContentValidator::__cordl_internal_get_isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr bool const& System::Xml::Schema::ContentValidator::__cordl_internal_get_isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOpen = value;
}
constexpr bool& System::Xml::Schema::ContentValidator::__cordl_internal_get_isEmptiable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptiable;
}
constexpr bool const& System::Xml::Schema::ContentValidator::__cordl_internal_get_isEmptiable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptiable;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_isEmptiable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEmptiable = value;
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Empty(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Empty", ::System::Xml::Schema::ContentValidator*>(std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Empty", ::System::Xml::Schema::ContentValidator*>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_TextOnly(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "TextOnly", ::System::Xml::Schema::ContentValidator*>(std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_TextOnly() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "TextOnly", ::System::Xml::Schema::ContentValidator*>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Mixed(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Mixed", ::System::Xml::Schema::ContentValidator*>(std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Mixed() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Mixed", ::System::Xml::Schema::ContentValidator*>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Any(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Any", ::System::Xml::Schema::ContentValidator*>(std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Any() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Any", ::System::Xml::Schema::ContentValidator*>();
}
inline void System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType);
}
inline void System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, isOpen, isEmptiable);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::ContentValidator::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_ContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType>(this, ___internal_method);
}
inline bool System::Xml::Schema::ContentValidator::get_PreserveWhitespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_PreserveWhitespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::ContentValidator::get_IsEmptiable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::ContentValidator::get_IsOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "get_IsOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::ContentValidator::set_IsOpen(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), { "set_IsOpen", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::ContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::ContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::by_ref<int32_t> errorCode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::ContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::ContentValidator::ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::ContentValidator::ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly,
                                                                                                  ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::ContentValidator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly, schemaSet);
}
inline void System::Xml::Schema::ContentValidator::AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet,
                                                                         ::System::Collections::ArrayList* particles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                           { "AddParticleToExpected",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                               ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, schemaSet, particles);
}
inline void System::Xml::Schema::ContentValidator::AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet,
                                                                         ::System::Collections::ArrayList* particles, bool global) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::ContentValidator*>(),
                                                           { "AddParticleToExpected",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                               ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, schemaSet, particles, global);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ContentValidator*>(contentType));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::ContentValidator*>(contentType, isOpen, isEmptiable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ContentValidator::ContentValidator() {}
