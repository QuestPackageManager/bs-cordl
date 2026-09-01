#pragma once
// IWYU pragma private; include "System\Xml\Schema\AutoValidator.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/Schema/zzzz__AutoValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__ValidationType_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AutoValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*,
                                                                                                      ::System::Xml::IValidationEventHandling*)>(&::System::Xml::Schema::AutoValidator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6318510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                                 ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AutoValidator::*)()>(&::System::Xml::Schema::AutoValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6318660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AutoValidator::*)()>(&::System::Xml::Schema::AutoValidator::Validate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6318668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AutoValidator::*)()>(&::System::Xml::Schema::AutoValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6318a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator.FindId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::AutoValidator::*)(::StringW)>(&::System::Xml::Schema::AutoValidator::FindId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6318a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AutoValidator.DetectValidationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::ValidationType (::System::Xml::Schema::AutoValidator::*)()>(&::System::Xml::Schema::AutoValidator::DetectValidationType)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6318758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { "DetectValidationType", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::AutoValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                      ::System::Xml::IValidationEventHandling* eventHandling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlValidatingReaderImpl*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>(),
                                                               ::i2c::type_of<::System::Xml::IValidationEventHandling*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, schemaCollection, eventHandling);
}
inline bool System::Xml::Schema::AutoValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::AutoValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::AutoValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::AutoValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name);
}
inline ::System::Xml::ValidationType System::Xml::Schema::AutoValidator::DetectValidationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AutoValidator*>(), { "DetectValidationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::ValidationType>(this, ___internal_method);
}
inline ::System::Xml::Schema::AutoValidator* System::Xml::Schema::AutoValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                                                          ::System::Xml::IValidationEventHandling* eventHandling) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::AutoValidator*>(reader, schemaCollection, eventHandling));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AutoValidator::AutoValidator() {}
