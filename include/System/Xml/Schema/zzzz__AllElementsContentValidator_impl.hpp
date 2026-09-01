#pragma once
// IWYU pragma private; include "System\Xml\Schema\AllElementsContentValidator.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__AllElementsContentValidator_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__BitSet_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType, int32_t, bool)>(
    &::System::Xml::Schema::AllElementsContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61bb7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.AddElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Object*, bool)>(
    &::System::Xml::Schema::AllElementsContentValidator::AddElement)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x61bb8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(),
                                                { "AddElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.get_IsEmptiable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AllElementsContentValidator::*)()>(&::System::Xml::Schema::AllElementsContentValidator::get_IsEmptiable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61bba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.InitValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::AllElementsContentValidator::InitValidation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61bba3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::by_ref<int32_t>)>(
        &::System::Xml::Schema::AllElementsContentValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61bbad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::Schema::ValidationState*)>(
    &::System::Xml::Schema::AllElementsContentValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61bbbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.ExpectedElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(
    &::System::Xml::Schema::AllElementsContentValidator::ExpectedElements)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x61bbc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::AllElementsContentValidator.ExpectedParticles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::AllElementsContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(
        &::System::Xml::Schema::AllElementsContentValidator::ExpectedParticles)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x61bbff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Xml::Schema::AllElementsContentValidator::__cordl_internal_set_elements(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
constexpr ::ArrayW<::System::Object*>& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particles;
}
constexpr ::ArrayW<::System::Object*> const& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___particles;
}
constexpr void System::Xml::Schema::AllElementsContentValidator::__cordl_internal_set_particles(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___particles = value;
}
constexpr ::System::Xml::Schema::BitSet*& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_isRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRequired;
}
constexpr ::System::Xml::Schema::BitSet* const& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_isRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRequired;
}
constexpr void System::Xml::Schema::AllElementsContentValidator::__cordl_internal_set_isRequired(::System::Xml::Schema::BitSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRequired = value;
}
constexpr int32_t& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_countRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countRequired;
}
constexpr int32_t const& System::Xml::Schema::AllElementsContentValidator::__cordl_internal_get_countRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countRequired;
}
constexpr void System::Xml::Schema::AllElementsContentValidator::__cordl_internal_set_countRequired(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___countRequired = value;
}
inline void System::Xml::Schema::AllElementsContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, int32_t size, bool isEmptiable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentType, size, isEmptiable);
}
inline bool System::Xml::Schema::AllElementsContentValidator::AddElement(::System::Xml::XmlQualifiedName* name, ::System::Object* particle, bool isEmptiable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(),
                                                           { "AddElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, particle, isEmptiable);
}
inline bool System::Xml::Schema::AllElementsContentValidator::get_IsEmptiable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::AllElementsContentValidator::InitValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* System::Xml::Schema::AllElementsContentValidator::ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context,
                                                                                           ::by_ref<int32_t> errorCode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, context, errorCode);
}
inline bool System::Xml::Schema::AllElementsContentValidator::CompleteValidation(::System::Xml::Schema::ValidationState* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::AllElementsContentValidator::ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::AllElementsContentValidator::ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly,
                                                                                                             ::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::AllElementsContentValidator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, context, isRequiredOnly, schemaSet);
}
inline ::System::Xml::Schema::AllElementsContentValidator* System::Xml::Schema::AllElementsContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, int32_t size,
                                                                                                                      bool isEmptiable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::AllElementsContentValidator*>(contentType, size, isEmptiable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::AllElementsContentValidator::AllElementsContentValidator() {}
