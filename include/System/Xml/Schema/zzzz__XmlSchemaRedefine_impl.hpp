#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaRedefine.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaRedefine_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaRedefine::*)()>(&::System::Xml::Schema::XmlSchemaRedefine::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6234240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine.get_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchemaRedefine::*)()>(
    &::System::Xml::Schema::XmlSchemaRedefine::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62342f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_Items", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine.get_AttributeGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaRedefine::*)()>(
    &::System::Xml::Schema::XmlSchemaRedefine::get_AttributeGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_AttributeGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine.get_SchemaTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaRedefine::*)()>(
    &::System::Xml::Schema::XmlSchemaRedefine::get_SchemaTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_SchemaTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine.get_Groups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaRedefine::*)()>(
    &::System::Xml::Schema::XmlSchemaRedefine::get_Groups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_Groups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaRedefine.AddAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaRedefine::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::XmlSchemaRedefine::AddAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6234318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_attributeGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_attributeGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr void System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeGroups = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr void System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_set_types(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___types = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_groups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_get_groups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr void System::Xml::Schema::XmlSchemaRedefine::__cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groups = value;
}
inline void System::Xml::Schema::XmlSchemaRedefine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchemaRedefine::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaRedefine::get_AttributeGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_AttributeGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaRedefine::get_SchemaTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_SchemaTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaRedefine::get_Groups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), { "get_Groups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaRedefine::AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaRedefine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotation);
}
inline ::System::Xml::Schema::XmlSchemaRedefine* System::Xml::Schema::XmlSchemaRedefine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaRedefine*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaRedefine::XmlSchemaRedefine() {}
